#include <iostream>
#include <string>

void Personal_info(){
    std::string name;
    std::string Fname;
    int Age;
    std::cout << "Name : " << name << std::endl;
    std::cin>> name;
    std::cout << "Family Name : " << Fname << std::endl;
    std::cin>> Fname;
    std::cout << "Age : " << Age << std::endl;
    std::cin>> Age;
}
int main(){
    while(true){
        Personal_info();
        std::cout << "Do you want to continue? (y/n)" << std::endl;
        char choice;
        std::cin>> choice;
        if(choice == 'n'){
            return 0;
        }
    }
}
