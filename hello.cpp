//hello in c++

#include <iostream>

int sayHello();
int sayBonjour();

int main(){

    sayHello();
    sayBonjour();

    return 0;
}

int sayHello(){

    std::string message = "Hello!";
    std::cout << message << std::endl;

    return 0;
}

int sayBonjour(){

    std::string message_fr = "Bonjour";
    std::cout << message_fr << std::endl;

    return 0;
}

// Output: Hello!
// Output: Bonjour

// End of code

