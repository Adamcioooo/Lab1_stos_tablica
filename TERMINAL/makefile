#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

TRGDIR=/tmp/Stosik

__start__: ./Stosik
	./Stosik

./Stosik: obj obj/main.o obj/stos.o 
                        
	g++ -Wall -pedantic -std=c++11 -o ./Stosik obj/main.o obj/stos.o 

obj:
	mkdir -p obj

obj/main.o: src/main.cpp inc/stos.hh 
        
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/stos.o: inc/stos.hh src/stos.cpp
	g++ -c ${CXXFLAGS} -o obj/stos.o src/stos.cpp

clean:
	rm -f obj/*.o ./Stosik