#include"main.h"

class Student 
{
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	Student()
	{
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	~Student()
	{
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
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

	cout << st.surname << endl;
	cout << st.name << endl;
	cout << st.age << endl;
	cout << st.avg_mark << endl;



	return 0;
}