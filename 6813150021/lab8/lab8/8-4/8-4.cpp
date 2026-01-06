// 8-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO
	string id;
	string nickname;
	string lineId;
	string phone;
};
// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
	// TODO
	Student tmp = a;
	a = b;
	b = tmp;
}
// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
	// TODO
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (students[j].id > students[j + 1].id)
			{
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}
void printStudents(Student students[], int size) {
	cout << "Id \t\tNickname \tLineId \tPhone\n";
	for (int i = 0; i < size; i++) {
		// TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}
}
int main() {
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		// TODO: cin >> students[i]...
		cout << "Enter of id ";
		cin >> students[i].id;

		cout << "Enter of nickname ";
		cin >> students[i].nickname;

		cout << "Enter of lineId ";
		cin >> students[i].lineId;

		cout << "Enter of phone ";
		cin >> students[i].phone;
		cout << endl;
	}
	sortByID(students, SIZE);
	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);
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
