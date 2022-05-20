#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <string>

struct employee{
    unsigned int id;
    std::string name;
    unsigned int salary;
    std::string department;
    std::string date;
};

void create_file();

employee* createEmployees();


#endif