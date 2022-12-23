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
  void setEmployeeData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &job, const string &city, const int &salary, const int &tax);
  void findJob(string grade);
  void addEmployeeFile();
  double getTax();
  string getJob();
  string getCity();
  int getSalary();
};

#endif