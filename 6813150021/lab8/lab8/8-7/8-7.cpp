// 8-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;
};

struct Parent {
	string name;
	string relationship;
	Phone contact;
};

struct Student {
	string id;
	string nickname;
	string lineId;
	Phone myContact;
	Parent myParent;
};

void inputStudent(Student& student)
{
	cout << "=== (Input Data) ===" << endl;
	cout << "1. Student Data" << endl;
	cout << "ID: ";
	cin >> student.id;
	cout << "Nickname: ";
	cin >> student.nickname;
	cout << "Line ID: ";
	cin >> student.lineId;

	cout << "\n2. Student's Contact Info" << endl;
	cout << "Mobile Number: ";
	cin >> student.myContact.mobile;
	cout << "Home Number: ";
	cin >> student.myContact.home;

	cout << "\n3. Parent Data" << endl;
	cout << "Parent's Name: ";
	cin >> student.myParent.name;
	cout << "Relationship: ";
	cin >> student.myParent.relationship;

	cout << "\n4. Parent's Contact Info" << endl;
	cout << "Parent's Mobile: ";
	cin >> student.myParent.contact.mobile;
	cout << "Parent's Home: ";
	cin >> student.myParent.contact.home;
}

void printStudent(const Student& student)
{
	cout << "\n---------------------------------" << endl;
	cout << " Student Information " << endl;
	cout << "---------------------------------" << endl;

	cout << "Student ID: " << student.id << endl;
	cout << "Nickname: " << student.nickname << endl;
	cout << "Line ID: " << student.lineId << endl;

	cout << "My Mobile: " << student.myContact.mobile << endl;
	cout << "My Home: " << student.myContact.home << endl;

	cout << "Parent: " << student.myParent.name << " (" << student.myParent.relationship << ")" << endl;

	cout << "Parent Tel: " << student.myParent.contact.mobile << endl;
}

		int main() {
			Student student;
			
			inputStudent(student);
			printStudent(student);
			
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
