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
unsigned int size(){
    std::ifstream infile("employee.txt");
    unsigned int s = 0;
    while (infile){
        s++;
    }
    infile.close();
    return s;
}
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

employee** createEmployees(){
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

    employee** employees = new employee*[1];

    while(infile){
        line = infile.get();
        std::cout << line;
        std::stringstream ssin(line);
        ssin >> id >> first >> last >> salary >> department >> month >> day >> year;
        employees[count] = new employee;
        employees[count]->id = std::stoi(id);
        employees[count]->name = first + " " + last;
        employees[count]->salary = std::stoi(salary);
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
    create_file();
    employee** employees = createEmployees();

    std::cout << employees[0]->name << std::endl;
    // std::cout << "What conditions would you like to find employees under?\n(ID, salary, or department)" << std::endl;
    // std::string cond = condition();
    // unsigned int s = size();

    // if (cond == "ID"){
    //     ID(employees, s);
    // } else if (cond == "salary"){
    //     salary(employees, s);
    // } else if (cond == "department"){
    //     department(employees, s);
    // }
    return 0;
}