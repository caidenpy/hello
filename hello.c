//hello in C


#include <stdio.h>

int sayHello();
int sayBonjour();

int main() {

    sayHello();
    sayBonjour();

    return 0;
}

int sayHello(){

    const char* message = "Hello!";
    printf("%s\n", message);

    return 0;
}

int sayBonjour(){

    const char* message_fr = "Bonjour";
    printf("%s\n", message_fr);

    return 0;
}

// Output: Hello!
// Output: Bonjour

// End of code