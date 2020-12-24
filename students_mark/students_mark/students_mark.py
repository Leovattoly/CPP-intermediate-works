
from collections import OrderedDict
import itertools
import math

def top_five(Students ,Marks):

    zipobj = zip(Marks,Students)        # Creating ZIP object
    dict_student_marks = dict(zipobj)   #creating Dictinonary 
    dict_student_marks = OrderedDict(sorted(dict_student_marks.items(),reverse=True))  #Sortting in Decending order
    dict_student_marks = dict(itertools.islice(dict_student_marks.items(),5))          #Slicing the top 5 items
    return dict_student_marks

def leat_five(Students ,Marks):

    zipobj = zip(Marks,Students)
    dict_student_marks = dict(zipobj)
    dict_student_marks = OrderedDict(sorted(dict_student_marks.items(),reverse=False))  #Sortting in Acending order
    dict_student_marks = dict(itertools.islice(dict_student_marks.items(),5))           #Slicing the top 5 items
    return dict_student_marks

def percentile(Students ,Marks):
    Marks.sort()
    i = math.ceil((25/100) * 10)                    #25 th percentile 
    print ("25 th percentile  is ", + Marks[i])    #printing 25 th percentile
    j = math.ceil((75/100)* 10)                     #75 th percentile
    print ("75 th percentile  is ", + Marks[j])    #printing 75 th percentile
    zipobj = zip(Marks,Students)
    dict_student_marks = dict(zipobj)
    dict_student_marks = OrderedDict(sorted(dict_student_marks.items(),reverse=False))
    dict_student_marks = dict(itertools.islice(dict_student_marks.items(),i+1,j-1))    #Slicing marks between >25th percentile <75th percentile
    return dict_student_marks

Students = ['student1','student2','student3','student4','student5','student6','student7','student8','student9','student10'] 
Marks = [45, 78, 12, 14, 48, 43, 45, 98, 35, 80] 

print("Top Five Ranks : ")
x = top_five(Students,Marks)
print(x)
print("\nLesat Five Ranks : ")
y= leat_five(Students ,Marks)
print(y)
print("\nMarks between > 25th percentile <75th percentile : ")
z= percentile(Students ,Marks)
print(z)
