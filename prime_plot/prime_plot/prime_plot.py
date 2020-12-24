from matplotlib import pyplot as plt 
import sympy 
x= range(10001)
y = (sympy.primerange(0, 100))  
plt.ylabel("Prime numbers")
plt.plot(x,y) 
plt.show()