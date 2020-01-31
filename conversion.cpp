# include <iostream>
using namespace std;

/*
Write a program that will:

1. read in a length in feet and inches
2. output the equivalent length in meters and centimeters

Use at least three functions:
    one for user input
    one or more for calculating
    one for output(console).

Include a loop that lets the user repeat this computation for new input values
until the user says he or she wants to end the program (user has to type exit).

0.3048 meters in a foot
100 centimeters in a meter
12 inches in a foot.
*/


void print(float Meter){
    // needed for individual meter and cm
    int m, cm;

    // was going to find the decimal and break it in 2 parts into m and cm but typecasting seem easier
    m = int(Meter);
    // used % to find cm since 100 cm makes 1 m
    cm = int(Meter * 100) % 100;

    // output meter and cm
    cout << "The length is " << Meter << " meters." << endl;
    cout << "The length is " << m << " meters and " << cm << " cm." << endl;
}

// does the initial converstion
float FtInToMCm(float feet, float inches){
    float m, finalM;

    m = inches / 12;
    m *= 0.3048;
    finalM = (feet * 0.3048) + m;

    return finalM;
}

// ask for user input and calls on FtInToMCm()
float userHeight(){
    float userFeet, userInches;

    cout << "How many foot?" << endl;
    cin >> userFeet;
    cout << "How many inches?" << endl;
    cin >> userInches;

    FtInToMCm(userFeet, userInches);
}



int main (){
    float height;
    // keep the loop going
    string input = "on";

    while (input == "on"){
        // start by calling userHeight() to get user input
        height = userHeight();

        // print information to screen
        print(height);

        // ask if user wants to continue
        cout << "To exit, type \"exit\", to continue press anything and enter." << endl;
        cin >> input;

        // turn loop off when needed
        if (input == "exit"){
            input = "off";
        }
        else {
            input = "on";
        }
    }

    return 0;
}
