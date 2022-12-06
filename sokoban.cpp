#include <iostream>
#include "WelcomeScreen.cpp"

void do_something(int a);


int main()
{
    WelcomeScreen welcomeScreen;
    welcomeScreen.print();
}

void do_something(int a) {
    printf("%d", a);
}

