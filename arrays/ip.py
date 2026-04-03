logs = [
"192.168.1.1 Failed,
"192.168.1.1 Failed,
"10.0.0.2 Failed"
]

freq = {}

for line in logs:
  parts = line.spilt()
  ip =parts[0]
  status = parts[1]

  if status == "failed":
     if ip not in freq:
        freq[ip] =0
     freq[ip]+=1

sorted_items = sorte(freq.items(),key=lambda x: x[1],reverse =True)

for ip,count in sorted_items:
   print(ip,"->",count)
