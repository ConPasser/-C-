#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<iostream>
#include<string>
using namespace std;

#define maxn 1000
//�����ϵ�˽ṹ��
struct Person{
	string name;//����
	int age;//����
	string sex;//�Ա�
	string Phone;//�绰
	string Adress;//סַ
};

//���ͨѶ¼�ṹ��
struct AddressBooks {
	struct Person p[maxn];//ͨѶ¼�б�����ϵ������
	int size;//ͨѶ¼�е�ǰ��¼��ϵ�˵ĸ���
};

//1.�����ϵ��
void addPerson(AddressBooks* abs) {
	//���ж�ͨѶ¼�Ƿ���
	if (abs->size == maxn) {
		cout << "ͨѶ¼�Ѿ����ˣ��޷�������ӣ�����";
		return;
	}
	else {
		//��Ӿ�����ϵ��
		string add_name;
		//string  add_sex;
		char add_sex[20] = { 0 };
		int add_age;
		string add_phone;
		string add_address;
		cout << "��������ϵ��������" << endl;
		cin >> add_name;
		abs->p[abs->size].name = add_name;

		while (1) {
			cout << "��������ϵ���Ա�(��/Ů)��" << endl;
			cin >> add_sex;
			if (strcmp(add_sex, "��")==0 || strcmp(add_sex, "Ů")==0 ) {
				abs->p[abs->size].sex = add_sex;
				break;
			}
			else {
				cout << "�����������������룡" << endl;
			}
		}

		cout << "��������ϵ�����䣺" << endl;
		cin >> add_age;
		abs->p[abs->size].age = add_age;

		cout << "��������ϵ�˵绰��" << endl;
		cin >> add_phone;
		abs->p[abs->size].Phone = add_phone;

		cout << "��������ϵ��סַ��" << endl;
		cin >> add_address;
		abs->p[abs->size].Adress = add_address;

		abs->size++;
		//cout << abs->size << endl;
		cout << "o(*�����*)o  ��ӳɹ���" << endl;
		system("pause");
		system("cls");
	}
}
//2.��ʾ��ϵ��
void showPerson(AddressBooks* abs) {
	if (abs->size == 0) {
		cout << "��ǰͨѶ¼Ϊ�գ�" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			cout << "��ǰ��ϵ����ţ�" << i + 1 << "\t" << "������" << abs->p[i].name << "\t" << "�Ա�" << abs->p[i].sex << "\t" << "���䣺" << abs->p[i].age << "\t" << " �绰��" << abs->p[i].Phone << "\t" << "סַ��" << abs->p[i].Adress << endl;
			//	cout << "������" << abs->p->name << endl;
			//	cout << "�Ա�" << abs->p->sex << endl;
			//	cout << "���䣺" << abs->p->age << endl;
			//	cout << "�绰��" << abs->p->Phone << endl;
			//	cout << "סַ��" << abs->p->Adress << endl;
			//	cout << endl;
		}
		cout << "o(*�����*)o  ��ʾ�ɹ���" << endl;
		//system("cls");
	}
	system("pause");
	system("cls");
}
//3.ɾ����ϵ��
void deletePerson(AddressBooks* abs, string name) {
	bool flag = 0;
	if (abs->size == 0) {
		cout << "��ǰͨѶ¼Ϊ�գ��޷�ɾ����" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			if (abs->p[i].name == name) {
				flag = 1;
				cout << "��⵽������ϵ�ˣ���ѡ��ɾ����ϵ�˵���ţ�" << endl;
				cout << "��ǰ��ϵ����ţ�" << i + 1 << "\t" << "������" << abs->p[i].name << "\t" << "�Ա�" << abs->p[i].sex << "\t" << "���䣺" << abs->p[i].age << "\t" << " �绰��" << abs->p[i].Phone << "\t" << "סַ��" << abs->p[i].Adress << endl;
			}
		}
		if (!flag) {
			cout << "���޴��ˣ�ɾ��ʧ�ܣ���" << endl;
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
			cout << "ɾ���ɹ�������" << endl;
		}
	}
	system("pause");
	system("cls");
}
//4 ������ϵ�ˣ�������ϵ��������ѯ��
void  findPerson(AddressBooks* abs, string name) {
	bool flag = 0;
	if (abs->size == 0) {
		cout << "���޴��ˣ�" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			if (abs->p[i].name == name) {
				flag = 1;
				cout << "o(*�����*)o ���ҳɹ�������" << endl;
				cout << "��ǰ��ϵ����ţ�" << i + 1 << "\t" << "������" << abs->p[i].name << "\t" << "�Ա�" << abs->p[i].sex << "\t" << "���䣺" << abs->p[i].age << "\t" << " �绰��" << abs->p[i].Phone << "\t" << "סַ��" << abs->p[i].Adress << endl;
				//break; ������ʾ��������Ϊ
			}
		}
	}
	if (!flag) cout << "���޴��ˣ�����" << endl;
	system("pause");
	system("cls");
}
//5.�޸���ϵ��
void rewritePerson(AddressBooks* abs, string name) {
	bool flag = 0;
	if (abs->size == 0) {
		cout << "��ǰͨѶ¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->size; i++) {
			if (abs->p[i].name == name) {
				flag = 1;
				cout << "��⵽������ϵ�ˣ���ѡ��Ҫ�޸���ϵ�˵���ţ�" << endl;
				cout << "��ǰ��ϵ����ţ�" << i + 1 << "\t" << "������" << abs->p[i].name << "\t" << "�Ա�" << abs->p[i].sex << "\t" << "���䣺" << abs->p[i].age << "\t" << " �绰��" << abs->p[i].Phone << "\t" << "סַ��" << abs->p[i].Adress << endl;
			}
		}
		if (!flag) {
			cout << "���޴��ˣ��޸�ʧ�ܣ���" << endl;
		}
		else {
			int l;
			cin >> l;
			string ss;
			//�޸�����
			cout << "������Ҫ�޸ĵ���ϵ�˵�������";
			cin >> ss;
			abs->p[l - 1].name = ss;
			//�޸��Ա�
			while (1) {
				cout << "������Ҫ�޸ĵ���ϵ���Ա�(��/Ů)��" << endl;
				cin >> ss;
				if (ss == "��" || ss == "Ů") {
					abs->p[l - 1].sex = ss;
					break;
				}
				else {
					cout << "�����������������룡" << endl;
				}
			}
			//�޸�����
			int n;
			cout << "������Ҫ�޸ĵ���ϵ�˵����䣺";
			cin >> n;
			abs->p[l - 1].age = n;

			//�޸ĵ绰
			cout << "������Ҫ�޸ĵ���ϵ�˵绰��";
			cin >> ss;
			abs->p[l - 1].Phone = ss;

			//�޸ĵ�ַ
			cout << "������Ҫ�޸���ϵ�˵�סַ��";
			cin >> ss;
			abs->p[l - 1].Adress = ss;
			cout << "�޸ĳɹ�������" << endl;
		}
	}
	system("pause");
	system("cls");
}
//6.�����ϵ��
void clearPerson(AddressBooks* abs) {
	abs->size = 0;
	cout << "ͨѶ¼�ѿգ�" << endl;
	system("pause");
	system("cls");
}

void showMenu() {
	cout << "************ͨѶ¼����ϵͳ************" << endl;
	cout << "******       1.�����ϵ��       ******" << endl;
	cout << "******       2.��ʾ��ϵ��       ******" << endl;
	cout << "******       3.ɾ����ϵ��       ******" << endl;
	cout << "******       4.������ϵ��       ******" << endl;
	cout << "******       5.�޸���ϵ��       ******" << endl;
	cout << "******       6.�����ϵ��       ******" << endl;
	cout << "******       0.�˳�ͨѶ¼       ******" << endl;
	cout << "**************************************" << endl;
	cout << "****�밴��������ʾ����0~6���в���!****" << endl;
}

int main() {
	AddressBooks abs;//����ͨѶ¼�ṹ�����
	abs.size = 0;//��ʼ��ͨѶ¼����Ϊ0
	string s;
	//�˵��ĵ���
	while (1) {
		showMenu();
		int select = 0;
		cin >> select;
		switch (select) {
		case 1://�����ϵ��
			addPerson(&abs);//���õ�ַ���ݿ�������
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			cout << "������Ҫɾ����ϵ��������";
			cin >> s;
			deletePerson(&abs, s);
			break;
		case 4://������ϵ��
			cout << "������Ҫ���ҵ���ϵ��������";
			cin >> s;
			findPerson(&abs, s);
			break;
		case 5://�޸���ϵ��
			cout << "������Ҫ�޸ĵ���ϵ�˵�������";
			cin >> s;
			rewritePerson(&abs, s);
			break;
		case 6://�����ϵ��
			clearPerson(&abs);
			break;
		case 0://���ͨѶ¼
			cout << "��ӭ�´�ʹ��!!!" << endl;
			system("pause");
			return 0;
			break;

		}
	}
	return 0;
}
