#pragma once
#ifndef TASK_H
#define TASK_H
#include"Goods.h"
#include<string>

class Task {
public:
	Task(int id);
	~Task();

	int getTaskId();
	string getName();
	string getDesc();
	bool getIsEnd();
	Goods getGoods();
	void setGoods(Goods newGoods);
	void setIsTaskEnd();

private:
	int taskId;		//����ID
	string name;	//��������
	string desc;	//��������
	bool isEnd;		//������ɱ��
	Goods goods;	//��������������Ʒ,��ʼ��Ϊ�յ�


};




#endif