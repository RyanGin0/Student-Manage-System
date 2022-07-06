#pragma once
#include"图形类.h"
#include"人员类.h"
#include"课程类.h"

class Student :virtual public People, public Course
{
public:
	virtual void Visit();
	virtual void Access();
	void Complaint();
	void stu_UI();
private:
	string my_classname;
	string my_date;
	string my_Sec;
	string my_reason;
	int my_classtype;
};

void Student::Visit()
{
	Inputbox();
	if (Match(Name, Password))
	{
		my_classname = classname;
		my_date = date;
		my_Sec = Sec;
		my_reason = reason;
		my_classtype = classtype;
	}
}

void Student::Access()
{
	ifstream fin;
	fin.open("file1.txt", ios::in || ios::binary);
	fin >> my_classname; cout << "缺课课程名为：" << my_classname << "  ";
	fin >> my_date; cout << "缺课日期为：" << my_date << "  ";
	fin >> my_Sec; cout << "缺课节次为：" << my_Sec << "  ";
	fin >> my_classtype; cout << "课程类型为：" << my_classtype << "  ";
	fin >> my_reason; cout << "缺课原因为：" << my_reason << "  ";
	fin.close();
	cout << endl;
}

void Student::Complaint()
{

}

void Student::stu_UI()
{

}