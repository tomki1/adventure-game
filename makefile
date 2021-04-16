XXFLAGS = -Wall -g -std=c++0x -pedantic-errors

output: main.o toonTown.o fantasyLand.o inputValidation.o menu.o simulation.o mainStreet.o land.o frontierLand.o bagNode.o tomorrowLand.o bag.o adventureLand.o
	g++ ${CXXFLAGS} main.o toonTown.o fantasyLand.o inputValidation.o menu.o simulation.o mainStreet.o land.o frontierLand.o bagNode.o tomorrowLand.o bag.o adventureLand.o -o finalproject

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

toonTown.o: toonTown.cpp toonTown.hpp
	g++ ${CXXFLAGS} -c toonTown.cpp

fantasyLand.o: fantasyLand.cpp fantasyLand.hpp
	g++ ${CXXFLAGS} -c fantasyLand.cpp

inputValidation.o: inputValidation.cpp inputValidation.hpp
	g++ ${CXXFLAGS} -c inputValidation.cpp

menu.o: menu.cpp menu.hpp
	g++ ${CXXFLAGS} -c menu.cpp

simulation.o: simulation.cpp simulation.hpp
	g++ ${CXXFLAGS} -c simulation.cpp


mainStreet.o: mainStreet.cpp mainStreet.hpp
	g++ ${CXXFLAGS} -c mainStreet.cpp
	
land.o: land.cpp land.hpp
	g++ ${CXXFLAGS} -c land.cpp
	
frontierLand.o: frontierLand.cpp frontierLand.hpp
	g++ ${CXXFLAGS} -c frontierLand.cpp
	
bagNode.o: bagNode.cpp bagNode.hpp
	g++ ${CXXFLAGS} -c bagNode.cpp	
	
tomorrowLand.o: tomorrowLand.cpp tomorrowLand.hpp
	g++ ${CXXFLAGS} -c tomorrowLand.cpp

bag.o: bag.cpp bag.hpp
	g++ ${CXXFLAGS} -c bag.cpp

adventureLand.o: adventureLand.cpp adventureLand.hpp
	g++ ${CXXFLAGS} -c adventureLand.cpp

clean:
	rm *.o finalproject

zip:
	zip -D finalproject_Tom_Kimberly.zip toonTown.cpp fantasyLand.cpp inputValidation.cpp menu.cpp simulation.cpp mainStreet.cpp land.cpp frontierLand.cpp bagNode.cpp tomorrowLand.cpp bag.cpp adventureLand.cpp toonTown.hpp fantasyLand.hpp inputValidation.hpp menu.hpp simulation.hpp mainStreet.hpp land.hpp frontierLand.hpp bagNode.hpp tomorrowLand.hpp bag.hpp adventureLand.hpp main.cpp makefile FinalProjectKimberlyTom.pdf

valgrind:
	valgrind --leak-check=full --tool=memcheck --show-leak-kinds=all  --track-origins=yes finalproject
