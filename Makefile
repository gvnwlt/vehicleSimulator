ALL = main.o main vehicle.o

main: main.o vehicle.o
	g++ vehicle.o main.o -o main -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp -I /usr/include/SFML

vehicle.o: vehicle.cpp
	g++ -c vehicle.cpp

.PHONY: clean

clean:
	rm -rf $(ALL)
