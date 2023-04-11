#include"main.h"

class Student 
{
public:
	string name;
	string surname;
	int age;
	float avg_mark;


	//default constructor
	Student()
	{
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	// constructor with arguments
	Student(string nm, string surnm, int a, float avg_mk)
	{
		name = nm;
		surname = surnm;
		age = a;
		avg_mark = avg_mk;
	}

	Student(string nam, string surnam)
	{
		name = nam;
		surname = surnam;
	}

	~Student()
	{
		cout << " destructor ";
	}

	void clear()
	{
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}

	string convert()
	{
		string msg = "";
		msg += name;
		msg += " " + surname;
		msg += " ( age = " + to_string(age);
		msg += ", average mark = " + to_string(avg_mark) + " )";
		return msg;
	}

	string convert1()
	{
		string msg = "";
		msg += name;
		msg += " " + surname;
		return msg;
	}
};

int main()
{
	Student st;
	Student st1("Danya", "Yaroshenko", 14, 10);
	Student st2("Tema", "Zabolodsky");

	cout << st.convert() << endl;
	cout << st1.convert() << endl;
	cout << st2.convert1() << endl;



	return 0;
}