#pragma once
#include<iostream>
#include<string>
#include"图形类.h"
using namespace std;

class People:public Picture
{
public:
	bool Match(string,string);
	People(string s1, string s2, int i);
	void Inputbox();
	string Trans_reason(int);
	string Trans_classtype(int);
protected:
	string Name;
	int Number;
	string Password;
};

People::People(string s1,string s2, int i)
{
	Name = s1; Password = s2; Number = i;
}

bool People::Match(string x,string y)
{
	for (int m = 0; m < 3; m++)
	{
		if (pl[m].Name == x && pl[m].Password == y)
			return 1;
	}
	return 0;
}

void People::Inputbox()
{
	char s1[10], s2[10];
	// 初始化绘图窗口
	initgraph(640, 480);

	// 定义字符串缓冲区，并接收用户输入
	InputBox(s1, 10, "请输入姓名：");
	InputBox(s2, 10, "请输入密码：");

	Name = s1; Password = s2;
}

string People::Trans_classtype(int x)
{
	if (x == 1) return"专业核心课";
	else if (x == 2) return"数理基础课";
	else if (x == 3) return"选修课";
	else if (x == 4) return"自主发展课";
	else return"兴趣课";
}

string People::Trans_reason(int x)
{
	if (x == 1) return"迟到";
	else if (x == 2)return"请假——病假";
	else if (x == 3)return"请假——其他";
	else return"无故旷课";
}

People pl[3] = { People("teacher1","111",001),People("teacher2","222",002),People("student","333",003) };