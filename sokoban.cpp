#include <iostream>

void do_something(int a);


int main()
{
    std::cout << "Hello World!\n";
    do_something(42);
}

void do_something(int a) {
    printf("%d", a);
}

