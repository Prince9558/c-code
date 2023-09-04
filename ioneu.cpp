#include <iostream>
#include <string>

int main() {
    std::string username, password;

    // Prompt the user to enter a username and password
    std::cout << "" , "";
    std::cin >> username,password;
    
    //std::cout << "";
    //std::cin >> password;

    // Display the entered username and password
    std::cout << "name: " << username << std::endl;
    std::cout << "password: " << password << std::endl;
}
