#include <iostream>
#include <fstream>
#include <sstream>
#include "employee.hpp"

void create_file(){
    std::string inp;
    std::ofstream outfile("employee.txt");
    std::cout << "Input in a string in the format 'ID Name Salary Department Date'." << std::endl;
    std::cout << "Input 'quit' to end the input" << std::endl;
    std::getline(std::cin, inp);
    while (inp != "quit"){
        outfile << inp << std::endl;
        std::getline(std::cin, inp);
    }
    outfile.close();

}

employee* createEmployees(){
    std::ifstream infile("employee.txt");
    std::string line;
    std::string id;
    std::string first;
    std::string last;
    std::string salary;
    std::string department;
    std::string month;
    std::string day;
    std::string year;
    int count = 0;

    unsigned int size = 0;
    while (infile){
        size++;
    }

    employee* employees = new employee[size];

    while(infile){
        line = infile.get();
        std::stringstream ssin(line);
        ssin >> id >> first >> last >> salary >> department >> month >> day >> year;
        employees[count].id = stoi(id);
        employees[count].name = first + " " + last;
        employees[count].salary = stoi(salary);
        employees[count].department = department;
        employees[count].date = month + " " + day + " " + year;
        count++;
    }

    return employees;
}