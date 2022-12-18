compilerun:program run

program:functions main admin person employee camp refugee array color
	g++ ./obj/Functions.o ./obj/Main.o ./obj/Admin.o ./obj/Person.o ./obj/Employee.o ./obj/Camp.o ./obj/Refugee.o ./obj/Array.o ./obj/Color.o -o ./bin/program
functions:
	g++ -I "./include" -c ./src/Functions.cpp -o ./obj/Functions.o
main:
	g++ -I "./include" -c ./src/Main.cpp -o ./obj/Main.o
admin:
	g++ -I "./include" -c ./src/Admin.cpp -o ./obj/Admin.o
person:
	g++ -I "./include" -c ./src/Person.cpp -o ./obj/Person.o
camp:
	g++ -I "./include" -c ./src/Camp.cpp -o ./obj/Camp.o
employee:
	g++ -I "./include" -c ./src/Employee.cpp -o ./obj/Employee.o
refugee:
	g++ -I "./include" -c ./src/Refugee.cpp -o ./obj/Refugee.o
array:
	g++ -I "./include" -c ./src/Array.cpp -o ./obj/Array.o
color:
	g++ -I "./include" -c ./src/Color.cpp -o ./obj/Color.o
run:
	./bin/program.exe