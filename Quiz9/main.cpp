#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

struct employee{
    int id;
    std::string name;
    int salary;
    std::string department;
    std::string date;
};

int create_file(){
    std::string inp;
    int count = 0;
    std::ofstream outfile("employee.txt");
    std::cout << "Input in a string in the format 'ID Name Salary Department Date'." << std::endl;
    std::cout << "Input 'quit' to end the input" << std::endl;
    std::getline(std::cin, inp);
    while (inp != "quit"){
        outfile << inp << std::endl;
        std::getline(std::cin, inp);
        count++;
    }
    outfile.close();

    return count;

}

employee** createEmployees(int c){
    std::ifstream infile("employee.txt");
    std::string id;
    std::string first;
    std::string last;
    std::string salary;
    std::string department;
    std::string month;
    std::string day;
    std::string year;
    int count = 0;

    employee** employees = new employee*[c];

    for(std::string l; getline(infile, l);){
        std::stringstream ssin(l);
        ssin >> id >> first >> last >> salary >> department >> month >> day >> year;
        employees[count] = new employee;
        employees[count]->id = stoi(id);
        employees[count]->name = first + " " + last;
        employees[count]->salary = stoi(salary);
        employees[count]->department = department;
        employees[count]->date = month + " " + day + " " + year;
        count++;
    }

    return employees;
}

std::string condition(){
    std::string cond;
    std::cin >> cond;
    return cond;
}

void ID(employee** employees, unsigned int s){
    int id;
    std::cout << "Enter an ID" << std::endl;
    std::cin >> id;
    for (unsigned int i = 0; i < s; i++){
        if (employees[i]->id == id){
            std::cout << employees[i]->name << std::endl;
            break;
        }
    }
}

void salary(employee** employees, unsigned int s){
    int salary;
    std::cout << "Enter a minimum salary" << std::endl;
    std::cin >> salary;
    for (unsigned int i = 0; i < s; i++){
        if (employees[i]->salary >= salary){
            std::cout << employees[i]->name << std::endl;
            
        }
    }
}

void department(employee** employees, unsigned int s){
    std::string department;
    std::cout << "Enter a department" << std::endl;
    std::cin >> department;
    for (unsigned int i = 0; i < s; i++){
        if (employees[i]->department == department){
            std::cout << employees[i]->name << std::endl;
        }
    }
}

int main(){
    int c = create_file();
    employee** employees = createEmployees(c);

    std::cout << "What conditions would you like to find employees under?\n(ID, salary, or department)" << std::endl;
    std::string cond = condition();

    if (cond == "ID"){
        ID(employees, c);
    } else if (cond == "salary"){
        salary(employees, c);
    } else if (cond == "department"){
        department(employees, c);
    }
    return 0;
}