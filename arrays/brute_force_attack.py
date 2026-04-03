freq={}

logs = [ 
"192.168.1.1 Failed",
    "192.168.1.1 Failed",
    "192.168.1.1 Failed",
    "10.0.0.2 Failed",
    "10.0.0.2 Success"
]

for line in logs 
    parts=line.split()
    ip= parts[0]
    status= parts[1]
    if status =="Failed":
       if ip not in freq:
          freq[ip]=0
       freq[ip]+=1


for ip,count in freq.items():
    if count >=3:
       print(ip,"-> Brute Force Attack")
