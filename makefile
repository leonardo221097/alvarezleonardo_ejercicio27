
euler.png: euler3.dat 
	
	python euler.py

euler3.dat: euler3.x
	./euler3.x 
	
euler3.x : ejercicio27.cpp
	c++ ejercicio27.cpp -o euler3.x
	