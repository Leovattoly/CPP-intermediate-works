from collections import OrderedDict 
import itertools  

def distance(x,y,p1,p2):
    dist = ((x-p1)**2 + (y-p2)** (2)) **(.5)
    return dist

s = [ (5,2),(3,3),(0,0),(1,8),(9,8),(9,0),(-1,0),(8,0),(-1,89) ]
p = (0,0)
dist_list = []
print(s)  #showing the given points 
for i in s:
    x,y = i
    p1,p2 = p
    dist_list.append(distance (x,y,p1,p2)) #finding the distance between points

zipobj = zip(dist_list,s)  #creating zip object to create dictionary
dict_dist = dict(zipobj)   #creating dictionary using zip object
dict1 = OrderedDict(sorted(dict_dist.items()))  #soritng the items in the dictionary
out = dict(itertools.islice(dict1.items(), 5))  #slicing the first 5 objects from the dictionary
values = out.values()                           #splitting the dictionary values and taking only the points
print ("The nearest 5 points are ")            # printing the nearest points to given point p
for i in values:
    print(i)  
