#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// Task A
TEST_CASE("n is divisible by d when they equal each other:"){
  CHECK(isDivisibleBy(3,3) == true);
}
TEST_CASE("n is NOT divisible by d when d is not a factor of n:"){
  CHECK(isDivisibleBy(3,7) == false);
  CHECK(isDivisibleBy(3,6) == false);
  CHECK(isDivisibleBy(3,0) == false);
}
TEST_CASE("n is divisible by d when d is a factor of n:"){
  CHECK(isDivisibleBy(12,4) == true);
  CHECK(isDivisibleBy(8,2) == true);
  CHECK(isDivisibleBy(6,3) == true);
}
TEST_CASE("n is a negative number:"){
  CHECK(isDivisibleBy(-4, 2) == true);
  CHECK(isDivisibleBy(-2, -2) == true);
  CHECK(isDivisibleBy(-7,1) == true);
}
//Task B
TEST_CASE("num is a prime number:"){
  CHECK(isPrime(7) == true);
  CHECK(isPrime(47) == true);
  CHECK(isPrime(2) == true);
}
TEST_CASE("num is not a prime number:"){
  CHECK(isPrime(6) == false);
  CHECK(isPrime(4) == false);
  CHECK(isPrime(15) == false);
  CHECK(isPrime(0) == false);
  CHECK(isPrime(1) == false);
  CHECK(isPrime(-5) == false);
}
//Task C
TEST_CASE("next prime number:"){
  CHECK(nextPrime(2) == 3);
  CHECK(nextPrime(4) == 5);
  CHECK(nextPrime(15) == 17);
  CHECK(nextPrime(0) == 2);
  CHECK(nextPrime(1) == 2);
  CHECK(nextPrime(-5) == 2);
}

//Task D
TEST_CASE("counts number of primes in the range:"){
  CHECK(countPrimes(9,24) == 5);
  CHECK(countPrimes(4,15) == 4);
  CHECK(countPrimes(0,20) == 8);
  CHECK(countPrimes(1, 8) == 4);

}

TEST_CASE("counts number of primes in the range with no primes:"){
  CHECK(countPrimes(-5, 1) == 0);
}

TEST_CASE("counts number of primes in the range starting and ending with a prime:"){
  CHECK(countPrimes(2,7) == 4);
}

//Task E
TEST_CASE("Is a twin prime:"){
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(5) == true);
  CHECK(isTwinPrime(13) == true);

}

TEST_CASE("Is not a prime but has a prime 2 numbers away:"){
  CHECK(isTwinPrime(4) == false);
}

TEST_CASE("Is a prime but not a twin prime:"){
  CHECK(isTwinPrime(2) == false);
  CHECK(isTwinPrime(23) == false);
}

//Task F
TEST_CASE("first twin prime there is: "){
  CHECK(nextTwinPrime(-3) == 3);
  CHECK(nextTwinPrime(0) == 3);
  CHECK(nextTwinPrime(1) == 3);
  CHECK(nextTwinPrime(2) == 3);

}

TEST_CASE("The next twin prime of a twin prime number: "){
 CHECK(nextTwinPrime(3) == 5);
 CHECK(nextTwinPrime(5) == 7);
 CHECK(nextTwinPrime(7) == 11);
 CHECK(nextTwinPrime(11) == 13);
}

TEST_CASE("The next twin prime of a non prime number: "){
 CHECK(nextTwinPrime(4) == 5);
 CHECK(nextTwinPrime(6) == 7);
 CHECK(nextTwinPrime(8) == 11);
 CHECK(nextTwinPrime(12) == 13);
}


//Task G
TEST_CASE("There are no twin primes in this range: "){
 CHECK(largestTwinPrime(-5,1) == -1);
 CHECK(largestTwinPrime(14,16) == -1);
 CHECK(largestTwinPrime(20,28) == -1);
}
TEST_CASE("The largest twin prime is the largest value in the interval: "){
 CHECK(largestTwinPrime(-5,3) == 3);
 CHECK(largestTwinPrime(3,7) == 7);
}
TEST_CASE("The largest twin prime is the smallest value in the interval: "){
 CHECK(largestTwinPrime(3,4) == 3);
 CHECK(largestTwinPrime(19,28) == 19);
}
TEST_CASE("The largest twin prime is the middle of the interval: "){
 CHECK(largestTwinPrime(20,30) == 29);
 CHECK(largestTwinPrime(1,58) == 43);
}
