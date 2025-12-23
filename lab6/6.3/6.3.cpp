// 6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "\n--- Student Info ---" << endl;
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;
}
int main() {
    const int N = 3; // จำนวนนักเรียน
    const int M = 4; // จำนวนวิชา

    string name[N], id[N];
    double score[N][M]; // Array 2 มิติ [คน][วิชา]
    double total[N];    // เก็บผลรวมคะแนนของแต่ละคน
    char grade[N];

    for (int i = 0; i < N; i++) {
        cout << "\n--- Student " << (i + 1) << " ---" << endl;

        // TODO: วนรับ name/id
        cout << "Enter name: ";
        getline(cin >> ws, name[i]);
        cout << "Enter id: ";
        cin >> id[i];

        // TODO: nested loop รับคะแนน M วิชา + รวม total[i]
        total[i] = 0;
        for (int j = 0; j < M; j++) {
            cout << "Enter score subject " << (j + 1) << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }

        // TODO: calculateGrade โดยใช้คะแนนรวม (total)
        calculateGrade(total[i], grade[i]);
    }

    // TODO: แสดงผล
    cout << "\n\n--- Class Report ---" << endl;
    for (int i = 0; i < N; i++) {

        displayStudentInfo(name[i], id[i], total[i], grade[i]);
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
