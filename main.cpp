#include <iostream>

int main() {
     char op;
     double num1;
     double num2;
     double result;

     std::cout << "********** CALCULATOR **********\n";
     std::cout << "********************************\n";

     std::cout << "Enter either (+, -, *, /)";

     std::cin >> op;

     std::cout << "Enter number one: ";
     std::cin >> num1;

     std::cout << "Enter number two: ";
     std::cin >> num2;

     switch (op){
          case '+':
               result = num1 + num2;
               break;
          case '-':
               result = num1 - num2;
               break;
          case '*':
               result = num1 * num2;
               break;
          case '/':
               result = num1 / num2;
               break;
          }

     std::cout << "Result is: "<< result <<std::endl;

     return  0;
}
