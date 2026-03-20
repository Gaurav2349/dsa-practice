#problem Two sum 
#Approach :use hashmap(dictionary) for O(n) solution 

def two_Sum( nums, target):
  num_map ={}

  for i, num in enumerate(nums):
    complement =target -num

     if complementin num_map:
          return [num_map[complement],i]


      num_map[map] = i

#  Example test

nums =[2,7,11,15]
target =9

print(two_sum(nums,target))
