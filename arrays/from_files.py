// creating a dict for the storage 
freq={}

with open("log.txt","r") as file:
 for line in file:
     parts=line.split()
     ip = parts[0]
     status =parts[1]

     if status == "Failed":
        if ip not in freq:
           freq[ip] =0
        freq[ip]+=1

filtered =[]

for ip,count in freq.items():
    if count > 1:
       filtered.append((ip,count))

sorted_ips =sorted(filtered,key =lambda x:x[1],reverse =True)

for ip,count in sorted_ips:
    print(ip,"->",count)
