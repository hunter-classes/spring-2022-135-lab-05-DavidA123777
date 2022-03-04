#include <iostream>
#include "funcs.h"
#include <cmath>

bool isDivisibleBy(int n, int d){



  if (d == 0){
    std::cout << "false" << std::endl;
    return false;}
  else if (n == 0){
    std::cout << "false" << std::endl;
    return false;
  }
  else if( n % d == 0){
    std::cout << "Yes" << std::endl;
    return true;
  }

  else{
    std::cout << "No" << std::endl;
    return false;
  }

}

bool isPrime(int n){
  if (n == 1 || n == 0 || n < 0){
    std::cout << "Not Prime" << std::endl;
    return false;
  }
  else if (n == 2){
    std::cout << "Is Prime" << std::endl;
    return true;
  }
   for (int i = 2; i < n; i++){
     if (n % i == 0){
       std::cout << "Not Prime" << std::endl;
       return false;

     }
   }
     std::cout << "Is Prime" << std::endl;

     return true;
   }

bool Prime(int n){
if (n == 1 || n == 0 || n < 0){

  return false;
       }
  else if (n == 2){

    return true;
       }
  for (int i = 2; i < n; i++){
      if (n % i == 0){

          return false;

          }
   }
   return true;
}

int nextPrime(int n){
  if (n == 1 || n == 0 || n < 0){
    std::cout << 2 << std::endl;
    return 2;
  }
  n += 1;

  while(Prime(n) == false){

    n = n + 1;

  }
  std::cout << n << std::endl;
  return n;



}

int countPrimes(int a, int b){
  int x = 0;
    for (int i = a; i <= b; i++){
      if (Prime(i) == true){
        x = x + 1;
    }

  }
  std::cout << x << std::endl;
  return x;}

bool isTwinPrime(int n){
  int a, b;
  a = n - 2;
  b = n + 2;
  if ((Prime(n) == true) && ((Prime(a) == true) || (Prime(b) == true))){
    std::cout << "Twin Prime" << std::endl;
    return true;
  }
  else{
    std::cout << " Not a Twin Prime" << std::endl;
    return false;
  }

}




bool TwinPrime(int n){
  int a, b;
  a = n - 2;
  b = n + 2;
  if ((Prime(n) == true) && ((Prime(a) == true) || (Prime(b) == true))){

    return true;
  }
  else{

    return false;
  }

}







int nextTwinPrime(int n){
  n = n + 1;
while (TwinPrime(n) == false){
  n = n +1;

}
std::cout << n << std::endl;
return n;


}




int largestTwinPrime(int a, int b){
for(int i = b; i >= a; i--){
  if (TwinPrime(i) == true){
    std::cout << i << std::endl;
    return i;
  }
}
std::cout << "No Twin Primes in the range " << a << ":" << b << std::endl;
return -1;


}
