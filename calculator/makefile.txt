CC = g++
CFLAGS = -c -Wall

all: ./trpo/calculator

./trpo/calculator: ./build/main.o ./build/Unit_Test_calculator.o ./build/pch.o
			$(CC) $(CFLAGS) -o ./trpo/calculator ./build/main.o ./build/Unit_Test_calculator.o
build/pch.o

main.o: ./calculator/main.cpp
			$(CC) $(CFLAGS) -o build/main.o -c src/main.cpp –lm
				
				
Unit_Test_calculator.o: ./calculator/Unit_Test_calculator.cpp

			$(CC) $(CFLAGS) -o build/Unit_Test_calculator.o -c src/Unit_Test_calculator.cpp –lm
			

pch.o: ./calculator/pch.cpp

			$(CC) $(CFLAGS) -o build/pch.o -c src/pch.cpp –lm
			
			
clean:
		rm -rf build/*.0 ./trpo/calculator
		
		
run:
		./trpo/calculator

