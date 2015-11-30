module CUI
  module Events
    # Matcher for all events
    module All
      def self.===(anything)
        true
      end
    end

    def initialize
      @event_handlers = Hash.new { |h, k| h[k] = [] }
    end

    def trigger(event, *args)
      @event_handlers.keys.each do |event_type|
        if event_type === event
          @event_handlers[event_type].each do |listener|
            listener[event, *args]
          end
        end
      end
    end

    def on(event_type, &block)
      raise ArgumentError.new("on called without a block") unless block_given?
      @event_handlers[event_type].push(block) unless @event_handlers[event_type].include?(block)
    end

    def once(event_type, &block)
      raise ArgumentError.new("once called without a block") unless block_given?
      wrapper = proc { |*args|
        block[*args]
        self.off(event_type, &wrapper)
      }
      self.on(event_type, &wrapper)
    end

    def off(event_type, &block)
      raise ArgumentError.new("off called without a block") unless block_given?
      @event_handlers.keys.each do |et|
        if et == event_type
          @event_handlers[et].delete(block)
        end
      end
    end
  end

  # Most basic instantiable event emitting object
  class EventEmitter
    include Events
  end

  # Allow listening to & triggering events on CUI
  # (a la Backbone)
  extend Events
  initialize

  # Extending the ideo of the CUI module as a global event hub,
  # provide a default, globally accessible, hash of hubs.
  # - Recommend using fetch (eg `CUI.hubs.fetch().trigger(...)`)
  #   when referencing hubs to expose typos in hub names.
  @hubs = Hash.new { |h, k| h[k] = EventEmitter.new }
  def self.hubs
    @hubs
  end
end
