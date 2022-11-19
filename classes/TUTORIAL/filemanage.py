# this is use rename file 
import os

# this is search name in open file and return set
s = os.listdir() 

#display the name of file in directory
print(s);
#this is take name of file 
name = input("Enter the name of file to rename") 

if name in s :
    n = 1
else :
    n = 0 


# this is use to check valid file  name enter by user 
if n == 0  :
   print("please Enter valid name of  file")
   quit()
        
#this is use to give new name of file  
rname = input("Enter the new name")

f = open(name,"r")
r = f.read()

f = open(rname,"w")
f.write(r)

# after copy of file remove main file in file
os.remove(name)  