#include <iostream>
#include <fstream>
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
int main(){
    create_file();
    
    return 0;
}