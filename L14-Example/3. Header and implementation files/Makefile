Functions_V3: Perimeter.o Area.o Functions_V3.o
	g++ Perimeter.o Area.o Functions_V3.o -o Functions_V3

Perimeter.o:  Perimeter.cpp Perimeter.h Constants.h
	g++ -c Perimeter.cpp

Area.o:  Area.cpp Area.h Constants.h
	g++ -c Area.cpp
	
Functions_V3.o:  Functions_V3.cpp Perimeter.h Area.h
	g++ -c Functions_V3.cpp
	
clean:
	rm -f Functions_V3 *.o *~
	

