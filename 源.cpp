#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<iostream>
#include<string>
using namespace std;

#define maxn 1000
//设计联系人结构体
struct Person{
	string name;//名字
	int age;//年龄
	string sex;//性别
	string Phone;//电话
	string Adress;//住址
};

//设计通讯录结构体
struct AddressBooks {
	struct Person p[maxn];//通讯录中保存联系人数组
	int size;//通讯录中当前记录联系人的个数
};

//1.添加联系人
void addPerson(AddressBooks* abs) {
	//先判断通讯录是否满
	if (abs->size == maxn) {
		cout << "通讯录已经满了，无法继续添加！！！";
		return;
	}
	else {
		//添加具体联系人
		string add_name;
		//string  add_sex;
		char add_sex[20] = { 0 };
		int add_age;
		string add_phone;
		string add_address;
		cout << "请输入联系人姓名：" << endl;
		cin >> add_name;
		abs->p[abs->size].name = add_name;

		while (1) {
			cout << "请输入联系人性别(男/女)：" << endl;
			cin >> add_sex;
			if (strcmp(add_sex, "男")==0 || strcmp(add_sex, "女")==0 ) {
				abs->p[abs->size].sex = add_sex;
				break;
			}
			else {
				cout << "输入有误！请重新输入！" << endl;
			}
		}

		cout << "请输入联系人年龄：" << endl;
		cin >> add_age;
		abs->p[abs->size].age = add_age;

		cout << "请输入联系人电话：" << endl;
		cin >> add_phone;
		abs->p[abs->size].Phone = add_phone;

		cout << "请输入联系人住址：" << endl;
		cin >> add_address;
		abs->p[abs->size].Adress = add_address;

		abs->size++;
		//cout << abs->size << endl;
		cout << "o(*￣︶￣*)o  添加成功！" << endl;
		system("pause");
		system("cls");
	}
}
//2.显示联系人
void showPerson(AddressBooks* abs) {
	if (abs->size == 0) {
		cout << "当前通讯录为空！" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			cout << "当前联系人序号：" << i + 1 << "\t" << "姓名：" << abs->p[i].name << "\t" << "性别：" << abs->p[i].sex << "\t" << "年龄：" << abs->p[i].age << "\t" << " 电话：" << abs->p[i].Phone << "\t" << "住址：" << abs->p[i].Adress << endl;
			//	cout << "姓名：" << abs->p->name << endl;
			//	cout << "性别：" << abs->p->sex << endl;
			//	cout << "年龄：" << abs->p->age << endl;
			//	cout << "电话：" << abs->p->Phone << endl;
			//	cout << "住址：" << abs->p->Adress << endl;
			//	cout << endl;
		}
		cout << "o(*￣︶￣*)o  显示成功！" << endl;
		//system("cls");
	}
	system("pause");
	system("cls");
}
//3.删除联系人
void deletePerson(AddressBooks* abs, string name) {
	bool flag = 0;
	if (abs->size == 0) {
		cout << "当前通讯录为空，无法删除！" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			if (abs->p[i].name == name) {
				flag = 1;
				cout << "检测到如下联系人，请选择删除联系人的序号：" << endl;
				cout << "当前联系人序号：" << i + 1 << "\t" << "姓名：" << abs->p[i].name << "\t" << "性别：" << abs->p[i].sex << "\t" << "年龄：" << abs->p[i].age << "\t" << " 电话：" << abs->p[i].Phone << "\t" << "住址：" << abs->p[i].Adress << endl;
			}
		}
		if (!flag) {
			cout << "查无此人，删除失败！！" << endl;
		}
		else {
			int l;
			cin >> l;
			for (int i = l; i < abs->size; i++) {
				abs->p[i - 1].name = abs->p[i].name;
				abs->p[i - 1].sex = abs->p[i].sex;
				abs->p[i - 1].age = abs->p[i].age;
				abs->p[i - 1].Phone = abs->p[i].Phone;
				abs->p[i - 1].Adress = abs->p[i].Adress;
			}
			abs->size--;
			cout << "删除成功！！！" << endl;
		}
	}
	system("pause");
	system("cls");
}
//4 查找联系人（根据联系人姓名查询）
void  findPerson(AddressBooks* abs, string name) {
	bool flag = 0;
	if (abs->size == 0) {
		cout << "查无此人！" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			if (abs->p[i].name == name) {
				flag = 1;
				cout << "o(*￣︶￣*)o 查找成功！！！" << endl;
				cout << "当前联系人序号：" << i + 1 << "\t" << "姓名：" << abs->p[i].name << "\t" << "性别：" << abs->p[i].sex << "\t" << "年龄：" << abs->p[i].age << "\t" << " 电话：" << abs->p[i].Phone << "\t" << "住址：" << abs->p[i].Adress << endl;
				//break; 这里显示所有名字为
			}
		}
	}
	if (!flag) cout << "查无此人！！！" << endl;
	system("pause");
	system("cls");
}
//5.修改联系人
void rewritePerson(AddressBooks* abs, string name) {
	bool flag = 0;
	if (abs->size == 0) {
		cout << "当前通讯录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			if (abs->p[i].name == name) {
				flag = 1;
				cout << "检测到如下联系人，请选择要修改联系人的序号：" << endl;
				cout << "当前联系人序号：" << i + 1 << "\t" << "姓名：" << abs->p[i].name << "\t" << "性别：" << abs->p[i].sex << "\t" << "年龄：" << abs->p[i].age << "\t" << " 电话：" << abs->p[i].Phone << "\t" << "住址：" << abs->p[i].Adress << endl;
			}
		}
		if (!flag) {
			cout << "查无此人，修改失败！！" << endl;
		}
		else {
			int l;
			cin >> l;
			string ss;
			//修改姓名
			cout << "请输入要修改的联系人的姓名：";
			cin >> ss;
			abs->p[l - 1].name = ss;
			//修改性别
			while (1) {
				cout << "请输入要修改的联系人性别(男/女)：" << endl;
				cin >> ss;
				if (ss == "男" || ss == "女") {
					abs->p[l - 1].sex = ss;
					break;
				}
				else {
					cout << "输入有误！请重新输入！" << endl;
				}
			}
			//修改年龄
			int n;
			cout << "请输入要修改的联系人的年龄：";
			cin >> n;
			abs->p[l - 1].age = n;

			//修改电话
			cout << "请输入要修改的联系人电话：";
			cin >> ss;
			abs->p[l - 1].Phone = ss;

			//修改地址
			cout << "请输入要修改联系人的住址：";
			cin >> ss;
			abs->p[l - 1].Adress = ss;
			cout << "修改成功！！！" << endl;
		}
	}
	system("pause");
	system("cls");
}
//6.清空联系人
void clearPerson(AddressBooks* abs) {
	abs->size = 0;
	cout << "通讯录已空！" << endl;
	system("pause");
	system("cls");
}

void showMenu() {
	cout << "************通讯录管理系统************" << endl;
	cout << "******       1.添加联系人       ******" << endl;
	cout << "******       2.显示联系人       ******" << endl;
	cout << "******       3.删除联系人       ******" << endl;
	cout << "******       4.查找联系人       ******" << endl;
	cout << "******       5.修改联系人       ******" << endl;
	cout << "******       6.清空联系人       ******" << endl;
	cout << "******       0.退出通讯录       ******" << endl;
	cout << "**************************************" << endl;
	cout << "****请按照上述提示输入0~6进行操作!****" << endl;
}

int main() {
	AddressBooks abs;//创建通讯录结构体变量
	abs.size = 0;//初始化通讯录人数为0
	string s;
	//菜单的调用
	while (1) {
		showMenu();
		int select = 0;
		cin >> select;
		switch (select) {
		case 1://添加联系人
			addPerson(&abs);//利用地址传递可以修饰
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			cout << "请输入要删除联系人姓名：";
			cin >> s;
			deletePerson(&abs, s);
			break;
		case 4://查找联系人
			cout << "请输入要查找的联系人姓名：";
			cin >> s;
			findPerson(&abs, s);
			break;
		case 5://修改联系人
			cout << "请输入要修改的联系人的姓名：";
			cin >> s;
			rewritePerson(&abs, s);
			break;
		case 6://清空联系人
			clearPerson(&abs);
			break;
		case 0://清空通讯录
			cout << "欢迎下次使用!!!" << endl;
			system("pause");
			return 0;
			break;

		}
	}
	return 0;
}
