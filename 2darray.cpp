# include <iostream>
using namespace std;

/*
Write code that will fill the array a (declared below) with numbers typed in at
the keyboard.

The numbers will be input five per line, on four lines.

int a[4][5];
*/

 int main (){
     int line = 4;
     int column = 5;
     int a[line][column];
     int userInt;

     // double for loop to iterate through each element in both row and column
     for (int i = 0; i < line; ++i){
         // ask for a number and store in a
         for (int j = 0; j < column; ++j){
             cout << "Enter an integer." << endl;
             cin >> userInt;

             a[i][j] = userInt;
         }
     }

     // double for loop to display what is in a
     for (int i = 0; i < line; ++i){
         for (int j = 0; j < column; ++j){
             cout << a[i][j] << " ";
         }
         cout << endl;
     }

     return 0;
 }
