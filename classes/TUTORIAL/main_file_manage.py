import os

def renamer():
    print('c');
    
s=os.listdir();

print("the name of files are \n");
s.sort();
print(s);

sname = input("Enter the starting name");
lname = input("Enter the last file name");

if sname and lname not in s:
    print("file is not found");
    quit();
count=0;
#for n in s:
print('you enter these file names');
print(sname);
print(lname);
for n in s:
    if n == sname:
        print(n);
        count+=1;
    elif n == lname:
        print(n);
        count-=1;
    elif count:
        print(n);   