import numpy as np 
import matplotlib.pylab as plt

m=np.loadtxt('euler3.dat')

x=m[:,0]
y=m[:,1]

plt.figure(1)
plt.plot(x,y)


