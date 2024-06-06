Prac5: Calculator.o Maths.o Advanced_Maths.o
	g++ -std=c++98 Calculator.o Maths.o Advanced_Maths.o -o Prac5


Maths.o:  Maths.cpp Maths.h
	g++ -c -std=c++98 Maths.cpp

Advanced_Maths.o: Advanced_Maths.cpp Advanced_Maths.h Constants.h
	g++ -c -std=c++98 Advanced_Maths.cpp

Calculator.o: Calculator.cpp Maths.h Advanced_Maths.h Maths.h
	g++ -c -std=c++98 Calculator.cpp


run: Prac5
	./Prac5

clean: 
	rm -f Prac5 *.o