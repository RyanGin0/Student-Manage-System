#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Course
{
public:
	virtual void Visit() = 0;
	virtual void Access() = 0;	
	int classtype;//课程类型
	string classname;//课程名字
protected:
	string date;//缺课日期
	string Sec;//缺课节次
	string stu_name;//缺课学生姓名
	int reason;//缺课原因
};