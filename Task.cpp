
#include"Task.h"

Task::Task(int id):goods(24) {
	isEnd = false;
	if (id == 1) {
		taskId = 1;
		name = "������޻�";
		desc = "���޻��ǽ�����������Ұ�����ݵĵ��̣������������䲻��ض�ȡ������������꣬���ڶ���������ħ���ػ���";
	}
	else if (id == 2) {
		taskId = 2;
		name = "��ô�����ȸ";
		desc = "������ȸ�����������ɣ�������������ȸװ�εĻ��׵���������������Ʒ�����ڵع���ʯ�׳��ػ���";
	}
	else if (id == 3) {
		taskId = 3;
		name = "������������";
		desc = "����������Ǵ�˵��������������ɫ��Ƭ��Ƕ���ɵ�ս�ף���ͷ�������ܰ���������ʮ���±����������ػ���";
	}
}

Task::~Task() {

}

int Task::getTaskId() {
	return taskId;
}

string Task::getName() {
	return name;
}

string Task::getDesc() {
	return desc;
}

Goods Task::getGoods() {
	return goods;
}

void Task::setGoods(Goods newGoods){
	goods = newGoods;
}

bool Task::getIsEnd() {
	return isEnd;
}

void Task::setIsTaskEnd() {
	isEnd = true;
}