//This is a problem from project Euler where the goal of this program is to find the  difference  between  the  sum  of  the  squares  of  the  first  one  hundred  natural  numbers  and  the square of the sums
#include <iostream>

using namespace std;

// Initializing the values to track the 
int main(){
  int n = 0;
  int sum = 0;
  int sqrd_sum = 0;

  //Loop to get the different sums
  while (n < 100){
    n ++;
    sum += n;
    sqrd_sum += n*n;
  }
  //finding the difference
  int difference = sum * sum - sqrd_sum;

  //Returning out the calculated value
  std::cout << "The  difference  between  the  sum  of  the  squares  of  the  first  one  hundred  natural  numbers  and  the square of the sum is " << difference << std::endl;
}
