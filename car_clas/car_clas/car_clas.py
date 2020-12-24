
import pickle

class automobile:

    # constructor
    def __init__(self, make, model,color,year,mileage):
        self.__make=make  # private attribute 
        self.__model=model # private attribute
        self.__color=color  # private attribute 
        self.__year=year # private attribute
        self.__mileage=mileage # private attribute

     # Deleting (Calling destructor) 
    def __del__(self): 
        print('Destructor called, vehicle deleted.') 

    def add_a_new_vehicle():
        print('Enter vehicle make:')
        make = str(input())
        print('Enter vehicle model:')
        smodel = input()
        print('Enter vehicle color:')
        color = input()
        print('Enter vehicle year:')
        year = int(input())
        print('Enter vehicle mileage:')
        mileage = int(input())
    def update_vehicle():
        print('Enter vehicle new make:')
        make = input()
        print('Enter vehicle  new model:')
        model = input()
        print('Enter vehicle new color:')
        color = input()
        print('Enter vehicle new year:')
        year = int(input())
        print('Enter vehicle new mileage:')
        mileage = int(input())

           
# Defining main function 
def main(): 

    obj1 = automobile('Toyoto','XUV','Black',2010, 14)
    obj2 = automobile
    obj2.add_a_new_vehicle()
    with open('inventory.txt', 'wb') as output:
        pickle.dump(obj1, output, pickle.HIGHEST_PROTOCOL)
        pickle.dump(obj2, output, pickle.HIGHEST_PROTOCOL)
    del obj1  
    del obj2
  
  
# Using the special variable  
# __name__ 
if __name__=="__main__": 
    main() 

