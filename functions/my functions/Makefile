Functions : Perimeter.out Area.out Functions.out
	clang++ Perimeter.out Area.out Functions.out -o Functions

Perimeter.out: Perimeter.cpp Perimeter.h Constants.h
	clang++ Perimeter.cpp
Area.out: Area.cpp Area.h Constants.h
	clang++ Area.cpp

Functions.out: Functions.cpp Perimeter.h Area.h
	clang++ Functions.cpp
