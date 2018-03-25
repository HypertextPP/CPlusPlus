#include <iostream>

int FizzBuzz() {
    for(int i = 1; i <= 100; i++) {
        std::string out;

        out += (i % 3 == 0) ? "Fizz" : "";
        out += (i % 5 == 0) ? "Buzz" : "";

        std::cout << (out.length() == 0 ? std::to_string(i) : out) << std::endl;
    }

    return 0;
}

int main() {
    return FizzBuzz();
}