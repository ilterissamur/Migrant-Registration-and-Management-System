#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

// Start Employee Class' Definition.
class Employee : public Person // Employee Class inherited from Person Class.
{
private:
  string job, city; // These private variables using to determine the employee migrants' job and city that work in.
  int salary, tax;  // These private variables using to determine employees' salary and their taxes according to the their salary.

public:
  Employee();               // Default Constructor
  Employee(Person &source); // Conversion Constructor.
  void setEmployeeData(const string &id, const string &name, const string &surname, const int &age, const string &nationallity, const string &gender, const string &job, const string &city, const int &salary, const int &tax);
  void findJob(string grade);
  void addEmployeeFile();
  double getTax();
  string getJob();
  string getCity();
  int getSalary();
};
// End of the Employee Class' Definition.
#endif