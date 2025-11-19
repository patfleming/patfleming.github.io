# _plugins/00_liquid_taint_patch.rb

puts "Loading 00_liquid_taint_patch..."

module Liquid
  class Variable
    # Override taint_check to always return false.
    def taint_check(obj)
      false
    end
  end
end

# Also add a dummy tainted? method for Array and Hash
unless Array.method_defined?(:tainted?)
  class Array
    def tainted?
      false
    end
  end
end

unless Hash.method_defined?(:tainted?)
  class Hash
    def tainted?
      false
    end
  end
end
