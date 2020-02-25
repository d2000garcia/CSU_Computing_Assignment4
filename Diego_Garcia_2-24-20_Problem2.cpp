//This is a problem from project Euler where the goal of this program is to find the 10001th prime number
#include <iostream>
#include <bits/stdc++.h>

int main(){
  // initializing the tracker for the numbers we want to check if they are prime, the is_prime which we will use as booleen to keep track of if its prime, and the vector to store the prime numbers
  int tracker = 3;
  int is_prime = 1;
  std::vector<int> prime;
  //We can skip the first two primes, 1 and 2 since we will only check odds since any evens are not primes and 1 goes into everything integer
  prime.push_back(3);

  //Only to vector size of 9999 since we are not storing 1 and 2
  while (prime.size() < 9999){
    tracker += 2;
    is_prime = 1;//Assuming the integer is prime to make calculations quicker

    //Checking using modular arithmatic and stops checking if we see and element of the primes is a factor of the current number being checked
    for (int x : prime){
      if (is_prime == 1){
	if ((tracker % x) == 0){
	  is_prime = 0;}
      }
    }
    
    //if it made it through the checker then its prime and we add it to the list
    if (is_prime == 1){
      prime.push_back(tracker);
    }
  }

  //returning the calculated value
  std::cout << "The 10001th prime number is " << prime.back() << std::endl;
  return 99;
}
