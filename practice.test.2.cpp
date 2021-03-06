/** This program includes examples of static and dynamic arrays and illustrates some of their principal differences.*/
/** More comments can be found at the end of the code.*/
/** HAPPY LEARNING! */

/*************** CODE ************************/
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>
class Person {
protected:
	string name;
	int age;
public:
	Person() {
		cout << "New person created." << endl;
		name = "NULL";
		age = 0;
	}
	Person(string n, int a) {
		cout << "New person created." << endl;
		name = n;
		age = a;
	}
	void sayHello() {
		cout << "Hello! My name is " << name << " and I am a " << age << " years old person." << endl;
	}
	~Person() {
		cout << "Person destroyed." << endl;
	}
};
class Student : public Person {
private:
	double gpa;
public:
	Student() {
		Person();
		gpa = 0.0;
	}
	Student(string n, int a, double g) {
		cout << "New student created" << endl;
		name = n;
		age = a;
		gpa = g;
	}
	using Person::sayHello;
	void sayHello(string mood)  {
		
		cout << "Hello! My name is " << name << " and I am a " << age << " years old student with a GPA of " << gpa << endl;
		cout << "I am " << mood << "."<< endl;
	}
	~Student() { cout << "Student destroyed."<< endl; }
	void getInfo() {
		cout << name << " is a " << age << " years old student with a GPA of " << gpa << endl;
	}
};

int main() {
	Student st1("Bob",23,3.79);
	Student st2;
	st1.getInfo();
	st2.getInfo();
	st1.sayHello("sad");
	st1.sayHello();
	return 0;
}

/*************** COMMENTS ********************/
/* 1. arrayOne is a typical static array. The size of the array has to be available at compile time. In fact if we remove const from sizeOne declaration the program will not compile. Try it!!! */
/* 2. Use a loop to assign values to each array element */
/* 3. This is a dynamically allocated array. We use the new operator to assign to pointer arrayTwo the address of the first element of the array. The difference with a static array is that we can determine the size of the array during runtime. In fact we do not need sizeTwo to be constant. */
/* 4. We can use the same pointer to point at a new array of a different size.*/

