#include <iostream>
#include<string>
int main(){
    std::string name;
    int age;
    std:: string college_name;  
    std::cout << "enter your name" << "\n";
    std::getline(std::cin, name); 
    std::cout << "enter your age" << "\n";
    std::cin  >> age;    
    std::cin.ignore();
    std::cout << "enter your college name" << "\n";
    std::getline(std::cin,college_name);
    std::cout << "Hello, " << name << " I see you are " << age << " years old and are currently studying at "<< college_name;

}