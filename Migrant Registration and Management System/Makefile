compilerun:program run

program:displayMenu dataSize main admin person migrants
	g++ ./lib/displayMenu.o ./lib/dataSize.o ./lib/main.o ./lib/admin.o ./lib/person.o ./lib/migrants.o -o ./bin/program
dataSize:
	g++ -I "./include" -c ./src/dataSize.cpp -o ./lib/dataSize.o
displayMenu:
	g++ -I "./include" -c ./src/displayMenu.cpp -o ./lib/displayMenu.o
main:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
admin:
	g++ -I "./include" -c ./src/admin.cpp -o ./lib/admin.o
person:
	g++ -I "./include" -c ./src/person.cpp -o ./lib/person.o
migrants:
	g++ -I "./include" -c ./src/migrants.cpp -o ./lib/migrants.o
run:
	./bin/program.exe