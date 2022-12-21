#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Employee : public Person
{
private:
  string job, city;
  int salary, tax;

public:
  Employee();
  Employee(Person &source);
  void setEmployeeData(string id, string name, string surname, int age, string nationallity, string gender, string job, string city, int salary, int tax);
  void findJob(string grade);
  void addEmployeeFile();
  double getTax();
  string getJob();
  string getCity();
  int getSalary();
};

#endif