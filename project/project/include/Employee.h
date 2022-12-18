#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Employee : public Person
{
private:
  string job, city;
  int salary;
  double tax;

public:
  void findJob(string grade);
  void addEmployeeFile();
  void setEmployeeData(string job, string city, int salary);
  Employee();
  Employee(Person &source);
  double getTax();
};