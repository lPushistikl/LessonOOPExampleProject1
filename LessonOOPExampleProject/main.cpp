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

	~Student()
	{
		cout << "destructor";
	}

	void clear()
	{
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}
};

int main()
{
	Student st;
	Student st1("Danya", "Yaroshenko", 14, 10);

	cout << st.surname << endl;
	cout << st.name << endl;
	cout << st.age << endl;
	cout << st.avg_mark << endl;



	return 0;
}