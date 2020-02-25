//This is a problem from project Euler where the goal of this program is to find the sum of all the even terms in the Fibinacchi sequence less than 4 million
#include <iostream>

using namespace std;

int main(){
  //Initializing the variables to keep track of terms of Fibinacchi sequence where a= n-2 and b=n-1 terms in the current sequence
  int a = 1;
  int b = 2;
  int sum = 2;

  //Loop runs for numbers under  million and checks next two numbers in the sequence per loop 
  while((a + b) < 4000000){
    a += b;
    b += a;

    //If the terms in the sequence are even they are then added to the running sum
    if((a % 2) == 0){
      sum += a;
    }
    if((b % 2) == 0){
      sum += b;
    }
  }

  //Returning the calculated sum after the loop ends
  cout << "Sum of Even Numbers: " << sum << endl;
}
