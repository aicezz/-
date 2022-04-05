#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <cmath>
#include <string>
#include <cstdio>

using namespace std;

const int MAXSIZE = 100;
//线性表的动态建立
typedef struct {
	int *data;
	int length;
} SeqList;

//线性表的静态建立
typedef struct {
	int data[MAXSIZE];
	int length;
} SqList;

//线性表的初始化
bool InitList(SeqList& L) {
	L.data = new int[MAXSIZE];//申请空间
	if (L.data == NULL)	return false;
	L.length = 0;
	return true;
}

//销毁线性表
void DestoryList(SeqList& L) {
	if (!L.data)	delete L.data;//释放内存空间
}

// 求线性表的长度
int GetLength(SeqList L) {
	return L.length;
}

//判断线性表是不是空
bool idEmpty(SeqList L) {
	if (L.length == 0)	return true;
	return false;
}

//顺序表根据位置取值
int GetElem(SeqList L, int i, int& e) {
	if (i < 1 || i > L.length)	return false;//判断位置是不是合理
	e = L.data[i - 1];
	return true;
}

//顺序表的按值查找(顺序查找)
bool LocateElem(SeqList L, int e, int x) {
	for (int i = 0; i < L.length; ++i) {
		if (L.data[i] == e) {
			x = i + 1;//返回位置
			return true;
		}
	}
	return false;
}

//顺序表的插入操作
bool InsertElem(SeqList& L, int i, int e) {
	if (i < 1 || i > L.length + 1)	return false;//判断插入位置是不是合理
	if (L.length == MAXSIZE)	return false;//判断是不是还有空间插入
	//将后面的元素依次向后移动,空出插入位置
	for (int j = L.length; j >= i; --j) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

//顺序表的删除操作
bool DeleteElem(SeqList& L, int i, int& e) {
	if (i < 1 || i > L.length)	return false;
	e = L.data[i - 1];
	for (int j = i - 1; j < L.length - 1; ++j) {
		L.data[j] = L.data[j + 1];
	}
	L.length--;
	return true;
}


int main() {

	
	return 0;
}
