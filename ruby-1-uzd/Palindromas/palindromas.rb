def palindromas?(n)
  a = n
  a.to_s == n.to_s.reverse
end

kiek = 0
i = 0
loop do
  i +=1
  if palindromas?(i) && palindromas?(i*i)
    puts i
    kiek +=1
    if kiek == 5
      break
    end
  end
end