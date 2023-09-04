#ifndef NPC_H
#define NPC_H
#include<string>
#include"Role.h"

class Npc{

public:
	Npc(){}
	~Npc(){}
	void chat(int position, int npcNum);
	string getName();
	int getGoodsId();
	int getGoodsNum();
	int getMoney();
	string name = " ";

private:
	int goodtype;
	int goodId;
	int goodNum;
	int money;
	Goods goods[24] = { 0, 1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 };
	
};

#endif