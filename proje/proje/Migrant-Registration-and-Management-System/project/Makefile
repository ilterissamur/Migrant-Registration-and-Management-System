compilerun:program run

program:functions main admin person migrants
	g++ ./obj/functions.o ./obj/main.o ./obj/admin.o ./obj/person.o ./obj/migrants.o -o ./bin/program
functions:
	g++ -I "./include" -c ./src/functions.cpp -o ./obj/functions.o
main:
	g++ -I "./include" -c ./src/main.cpp -o ./obj/main.o
admin:
	g++ -I "./include" -c ./src/admin.cpp -o ./obj/admin.o
person:
	g++ -I "./include" -c ./src/person.cpp -o ./obj/person.o
migrants:
	g++ -I "./include" -c ./src/migrants.cpp -o ./obj/migrants.o
camp:
	g++ -I "./include" -c ./src/camp.cpp -o ./obj/camp.o
employee:
	g++ -I "./include" -c ./src/employee.cpp -o ./obj/employee.o
refugee:
	g++ -I "./include" -c ./src/refugee.cpp -o ./obj/refugee.o
run:
	./bin/program.exe