// firstProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; // to avoid writing std again and again.

int main()
{
    /*std::cout << "Hello World!\n";
    std::cout << "My name is Piyush." << std::endl;
    std::cout << "Today is friday I started learning C++.";*/

    //cout << "Hello World!\n";
    //cout << "My name is Piyush." << endl;
    //cout << "Today is friday I started learning C++." << endl;

    //float annualSalary;
    //cout << "Please enter your annual salary ";
    //cin >> annualSalary;
    //float monthlySalary = annualSalary / 12;
    //cout << "Your monthly salary is " << monthlySalary << endl; 
    //cout << "In 10 years you will earn " << annualSalary * 10;

    /*int number = 1;
    char gender = 'Male';
    bool isOlderThan18 = true;
    float averageGrade = 8.0;
    double balance = 99890898;*/

    //cout << "Size of int is " << sizeof(int) << " bytes\n"; // \n is refer to print in new line after this command;

    //cout << "Int min value is " << INT_MIN << endl;
    //cout << "Int max value is " << INT_MAX << endl;

    //cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    //cout << "UInt max value is " << UINT_MAX << endl;

    //cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    //cout << "Size of char is " << sizeof(char) << " bytes\n";
    //cout << "Size of float is " << sizeof(float) << " bytes\n";
    //cout << "Size of double is " << sizeof(double) << " bytes\n";


    //// ASCII Table
    //cout << (int)'a' << endl;
    //cout << int('a') << endl;
    //cout << char(65) << endl;


    // cipher words into ASCII 

    /*char c1, c2, c3;

    cout << "Enter 3 letters: ";
    cin >> c1 >> c2 >> c3;
    cout << "ACSII message: " << int(c1) << " " << int(c2) << " " << int(c3);*/


    ////if-else statement
    //int number;
    //cout << "please enter whole number: ";
    //cin >> number;
    //if (number % 2 == 0) {
    //    cout << "You have entered even number." << endl;
    //}
    //else {
    //    cout << "You have entered odd number." << endl;
    //}

    //cout << "Thanks. Bye.";


    //// Nested if-else statement
    //float a, b, c;

    //cout << "Please Enter side of triangle a, b, c: ";
    //cin >> a >> b >> c;

    //if (a == b && b == c) 
    //    cout << "Equilateral Triangle";
    //else {
    //    if (a != b && a != c && b != c) 
    //        cout << "Scalene Triangle";
    //    else 
    //        cout << "Isosceles Triangle";
    //}


    //// operators in C++
    //// +, -, *, /, ++, -- Arithmatic operators; highest priority
    //int counter = 5;
    //cout << ++counter << endl;
    //cout << counter++ << endl;
    //cout << --counter << endl;
    //cout << counter-- << endl;

    //// <, >, <=, >=, ==, != Relational operators; 2nd highest priority

    //// && (AND), || (OR), !(NOT) Logical operators; lowest priority

    ////system("cls"); // to clear all system output without erasing the code.

    //// =, +=, -=, *=, /=, %= Assignment operators
    //int x = 5;
    //x += 5; // x = x + 5;
    //cout << x << endl;

    
    ////Swapping the values of two variables with or without third variable;
    //int a = 20;
    //int b = 10;
    //// with using third variable
    ////int temp = a;
    ////a = b;
    ////b = temp;
    ////cout << "a = " << a << " b = " << b << endl;

    ////without using third variable
    //a = a + b; // 30
    //b = a - b; // 20
    //a = a - b; // 10
    //cout << "a = " << a << " b = " << b << endl;

    
    //first program
    /*BMI calculator
    weight(kg) / (height * height(m))
    Underweight < 18.5
    Normal weight 18.5 - 24.9
    Overweight > 25*/

    /*float weight, height, bmi;
    cout << "Weight(kg), height(m): ";
    cin >> weight >> height;
    bmi = weight / (height * height);

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (bmi > 25) {
        cout << "Overweight" << endl;
    }
    else {
        cout << "Normal weight" << endl;
    }

    cout << "Your bmi is " << bmi;*/

    
    //Ternary (conditional) operator

    










    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
