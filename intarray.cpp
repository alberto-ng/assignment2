# include <iostream>
using namespace std;

/*
Write a program that will read up to ten nonnegative integers into an array called numberArray
then write the integers back to the screen. For this exercise you need not use any functions.
*/

 int main (){
     int length = 10;
     int numberArray[length];
     int userInt;

     // for loop that ask, check, and store userInt in numberArray
     for (int i = 0; i < length; ++i){

         cout << "Enter an non-negative integer." << endl;
         cin >> userInt;

         // while loop to keep userInt positive before storing
         while (userInt < 0){
             cout << "Please enter an non-negative integer.";
             cin >> userInt;
        }

        // storing
         numberArray[i] = userInt;

     }

     // output to screen each element in numberArray
     for (int i = 0; i < length; ++i){
         cout << numberArray[i] << " ";
     }

     cout << endl;

     return 0;
 }
