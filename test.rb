def main(program)
  puts "Program..."
  puts program
  puts "Executing..."
  result = eval program
  puts "Result"
  puts result
  result
rescue => error
  puts "Error! [#{error}]"
  raise error
end

def floo_bar(arg)
  "yey floo #{arg}".tap { |result| puts result }
end
