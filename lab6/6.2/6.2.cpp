// 6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

void calculateGrade(double score, char& grade) {
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
}


void displayStudentInfo(int i, string name, string id, double score, char grade)
{
    cout << "\n--- Student Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
}

int main() {
    const int N = 5;
    string name[N], id[N];
    double score[N];
    char grade[N];

    // TODO: วนรับข้อมูล N คน
    for (int i = 0; i < N;i++)
    {
        cout << "Enter student " << i + 1 << " name: ";
        // Hint: getline(cin &gt;&gt; ws, name[i]); สำหรับชื่อ
        getline(cin >> ws, name[i]);

        cout << "Enter student " << i + 1 << " id: ";
        cin >> id[i];

        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];

        // TODO: calculateGrade(score[i], grade[i]);
        calculateGrade(score[i], grade[i]);
        cout << endl;
        
    } 

    // TODO: ???????? N ?? ???? displayStudentInfo
    cout << "\n--- Displaying All Students ---\n" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Student " << (i + 1) << " Information:" << endl;
        displayStudentInfo(i, name[i], id[i], score[i], grade[i]);
        i++;
    }

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
