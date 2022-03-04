#include <iostream>


#include "funcs.h"

int main()
{
//Task A
int n = 3;
int d = 6;
std::cout << "Task A: Using inputs of 3 and 6; since 3 is not divisible by 6 it outputs No: " << std::endl;
isDivisibleBy(n, d);
std::cout << "\n" << "Task B: Determines if a number is prime, example: input of 7 yields true since it is a prime number: " << std::endl;

//Task B
int num = 7;
isPrime(num);


//Task C
int number = 2;
std::cout << "\n" << "Task C: Using input of 2, yields the next prime number which is: " << std::endl;
nextPrime(number);

//Task D
int a = 2;
int b = 10;
std::cout << "\n" << "Task D: Counts the number of prime numbers between 2 and 10: " << std::endl;
countPrimes(a,b);

//Task E
int c = 5;
std::cout << "\n" << "Task E: Determines if a number is a twin prime; in this case 5 is a twin prime: " << std::endl;
isTwinPrime(c);
c = 4;
std::cout << "\n" << "Task E: Determines if a number is a twin prime; in this case 4 is not a twin prime: " << std::endl;
isTwinPrime(c);

//Task F
int e = 2;
std::cout << "\n" << "Task F: Determines the next twin prime; in this case the next twin prime after 2 is 3: " << std::endl;
nextTwinPrime(e);
e = 7;
std::cout << "\n" << "Task F: Determines the next twin prime; in this case the next twin prime after 7 is 11: " << std::endl;
nextTwinPrime(e);

//Task G
int x = -5;
int y = 2;
std::cout << "\n" << "Task G: Determines the largest twin prime in the interval; in this case there are NO twin primes in the range -5 to 2 so the output is -1: " << std::endl;
largestTwinPrime(x,y);
x = -5;
y = 3;
std::cout << "\n" << "Task G: the largest twin prime in the interval of -5 to 3 is 3: " << std::endl;
largestTwinPrime(x,y);
x = 3;
y = 4;
std::cout << "\n" << "Task G: the largest twin prime in the interval of 3 to 4 is 3: " << std::endl;
largestTwinPrime(x,y);
x = -100;
y = 58;
std::cout << "\n" << "Task G: the largest twin prime in the interval of -100 to 58 is 43: " << std::endl;
largestTwinPrime(x,y);




  return 0;
}
