#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//主界面
void zhujianmain();
//卖家界面
void maijiajianmian();
//卖家模块
void Maijiamokuai();
//卖家的增删改查
void Addmaijia();
void shangchumaijia();
void xiugaimaijia();
void chaxunmaijia();
void daying();

//将卖家的信息保存到文件
void save();

//将文件的信息导入系统
void load();

//判断字符串是否合法
int panduan3(char arr[]);

int panduan11(char arr[]);