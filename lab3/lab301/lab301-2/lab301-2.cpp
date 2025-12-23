// lab301-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string studentId;
    string name;
    int score;
    char grade;
    cout << "Enter ID:" << endl;
    cin >> studentId;
    cin.ignore();
    cout << "Enter name:" << endl;
    getline (cin, name);
    cout << "Enter score:" << endl;
    cin >> score;
    if (score >= 80) {
        grade= 'A';
    }
    else if (score >= 70) {
        grade = 'B';
    }
    else if (score >= 60) {
        grade = 'C';
    }
    else if (score >= 50) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    cout << "******** Student Report ********" << endl;
    cout << "studentId : " << studentId<< endl;
    cout << "name : " << name << endl;
    cout << "score : " << score << endl;
    cout << "grade : " << grade << endl;
    cout << "********************************" << endl;
    return 0;
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
