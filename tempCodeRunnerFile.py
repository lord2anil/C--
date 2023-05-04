prev_branch = "an"
prev_pre = "danil"
data = {}
japan_total = 0
prev_total = 0


ARGF.each_line do |line|
  line = line.strip
  n = line.length
  s = ["", "", ""]
  ptr = 0

  n.times do |i|
    if line[i] == ","
      ptr += 1
    else
      s[ptr] += line[i]
    end
  end

  sales = s[2].to_i

  if s[0] == ""
    next
  end

  japan_total += sales

  if prev_pre != s[0]
    data.each do |k, v|
      puts "#{k} #{v}"
    end

    if prev_pre != "danil"
      puts "#{prev_pre} Total #{prev_total}"
    end

    puts "* #{s[0]}"
    data.clear
    data[s[1]] = sales
    prev_total = sales
  else
    data[s[1]] ||= 0
    data[s[1]] += sales
    prev_total += sales
  end

  prev_pre = s[0]
  prev_branch = s[1]
end

data.each do |k, v|
  puts "#{k} #{v}"
end

if prev_pre != "danil"
  puts "#{prev_pre} Total #{prev_total}"
end

puts "Japan Total #{japan_total}"
