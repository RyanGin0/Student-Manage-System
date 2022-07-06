#pragma once
#include"图形类.h"
#include"人员类.h"
#include"课程类.h"

class Teacher :virtual public People, public Course
{
public:
	virtual void Visit();
	virtual void Access();
	void Application();
	void Write_in();
	void Stats();
	void tea_UI();
private:
	string tea_classname;
	string tea_date;
	string tea_Sec;
	string tea_reason;
	int tea_classtype;
};

void Teacher::Visit()
{
	Inputbox();
	if (Match(Name, Password))
	{
		tea_classname = classname;
		tea_date = date;
		tea_Sec = Sec;
		tea_reason = reason;
		tea_classtype = classtype;
	}
}

void Teacher::Access()
{
	ifstream fin;
	fin.open("file1.txt", ios::in || ios::binary);
	fin >> tea_classname; cout << "缺课课程名为：" << tea_classname << "  ";
	fin >> tea_date; cout << "缺课日期为：" << tea_date << "  ";
	fin >> tea_Sec; cout << "缺课节次为：" << tea_Sec << "  ";
	fin >> tea_classtype; cout << "课程类型为：" << tea_classtype << "  ";
	fin >> tea_reason; cout << "缺课原因为：" << tea_reason << "  ";
	fin >> stu_name; cout << "缺课学生姓名为：" << stu_name << "  ";
	fin.close();
	cout << endl;
}

void Teacher::Application()
{

}

void Teacher::Write_in()
{
	ofstream fout;
	fout.open("file1.txt", ios::out || ios::binary || ios::app);
	printf("请输入所缺课的课程名："); cin >> classname;
	printf("请输入缺课日期："); cin >> date;
	printf("请输入缺课节次："); cin >> Sec;
	printf("请输入课程类型："); cin >> classtype;
	printf("请输入缺课原因："); cin >> reason;
	printf("请输入缺课学生的姓名："); cin >> stu_name;
	fout << classname << date << Sec << classtype << reason << stu_name;
	fout.close();
}

void Teacher::Stats()
{

}

void Teacher::tea_UI()
{

}


class Senior_tea :public Teacher
{
	void Visit();
	void Stats_pro();
	void Revise();
	void Senior_tea_UI();
};

void Senior_tea::Visit()
{

}

void Senior_tea::Stats_pro()
{

}

void Senior_tea::Revise()
{

}

void Senior_tea::Senior_tea_UI()
{

}