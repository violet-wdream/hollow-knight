#include <iostream>
#include "Enemy.h"

using namespace std;

Enemy::Enemy(){}
Enemy::~Enemy(){}

string Enemy::getName() {
	return name;
}

void Enemy::setType(int whatType) {
	type = whatType;
}

int Enemy::getType() {
	return type;
}

int Enemy::getHealth_max() {
	return health;
}

void Enemy::setHealth_max(int hp_m) {
	health_max = hp_m;

}

int Enemy::getHealth() {
	return health;
}

void Enemy::setHealth(int hp) {
	health = hp;

}

int Enemy::getMagic_max() {
	return magic_max;
}

void Enemy::setMagic_max(int mp_m) {
	magic_max = mp_m;

}

int Enemy::getMagic() {
	return magic;
}

void Enemy::setMagic(int mp) {
	magic = mp;

}

int Enemy::getAttack() {
	return attack;
}

void Enemy::setAttack(int a) {
	attack = a;

}

int Enemy::getDefend() {
	return defend;
}

void Enemy::setDefend(int d) {
	defend = d;
}

int* Enemy::getGoodsId(){
	return goodsId;
}

int* Enemy::getGoodsNum() {
	return goodsNum;
}

int Enemy::getExp(){
	return exp;
}

int Enemy::getMoney(){
	return money;
}

double Enemy::useSkill(){
	return getAttack() * 1.5;
}

void Enemy::showEnemy() {
	cout <<endl<< "当前怪物属性:" <<'\t';
	cout << "名称:" << name << '\t'<<endl;
	cout << "生命值:" << health << "/" << health_max << '\t';
	cout << "魔法值:" << magic << "/" << magic_max << endl;
	cout << "攻击:" << attack << '\t';
	cout << "防御:" << defend << endl;
}


Enemy_Small::Enemy_Small() {  //小怪统一血量和攻击？
	health = 50;
	attack = 5;
}
Enemy_Small::~Enemy_Small(){}

void Enemy_Boss::showinfor(int whatType) {
	setType(whatType);
	switch (whatType) {
	case 2:
		cout << "\n大型圣巢十字守卫的遗骸，被奇怪的力量复活。仍在本能的驱使下坚守岗位，对抗入侵者。" << endl;
		cout << "比它们的兄弟更大更强，这些虫子仍然被迫从其他生物的遗骸窃取武器。" << endl;
		cout << "它们不漫游，也不狩猎，只是在原地守候，有虫子经过的时候就冲出去攻击。" << endl;
		cout << "							——龙牙哥" << endl;
		break;
	case 3:
		cout << "\n被废黜的螳螂部落领主。背叛了他的姐妹，投入了感染的怀抱。" << endl;
		cout << "							——螳螂领主" << endl;
		break;
	case 4:
		cout << "\n一位阵亡战士的残梦。王后花园的守护者。" << endl;
		cout << "							——马尔穆" << endl;
		break;
	case 5:
		cout << "\n水晶山峰的魁梧矿工，被生长的晶体所吞噬。可以从结晶的肢体射出灼热的光束。" << endl;
		cout << "它从水晶牢狱中向外看时，这个世界对它而言是什么模样？它只能看到光吗？这是它发疯的原因吗？" << endl;
		cout << "							——水晶守卫" << endl;
		break;
	case 6:
		cout << "\n圣巢王宫的卫兵，可以熟练地挥舞弯爪刃。\n它们用沉重的白色盔甲保护脆弱的身体。" << endl;
		cout << "							——国王傀儡" << endl;
		break;
	case 7:
		cout << "\n完全成熟的容器，身体内携带着瘟疫之心。" << endl;
		cout << "							——空洞骑士" << endl;
		break;
	default:break;
	};
}


Enemy_Boss::Enemy_Boss() {};

Enemy_Boss::Enemy_Boss(int whatType) {
	setType(whatType);
	switch (whatType) {
	case 2: {
		name = "龙牙哥";
		type = 0;
		health = 150;
		health_max = 150;
		magic = 100;
		magic_max = 100;
		attack = 20;
		defend = 10;

		goodsNum[0] = 2;		//对应每件物品的数量
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//打死该怪物会掉落的物品
		goodsId[1] = 1;
		goodsId[2] = -1;	//空，代表只有以上两件
		goodsId[3] = -1;

		exp = 8;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 3: {
		name = "螳螂领主";
		type = 2;
		health = 350;
		health_max = 350;
		magic = 120;
		magic_max = 120;
		attack = 30;
		defend = 15;

		goodsNum[0] = 2;			//对应每件物品的数量
		goodsNum[1] = 1;
		goodsNum[2] = 1;
		goodsNum[3] = 0;
		goodsId[0] = 2;	//打死该怪物会掉落的物品
		goodsId[1] = 3;
		goodsId[2] = 4;	
		goodsId[3] = -1;

		exp = 10;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}
	case 4: {
		name = "马尔穆";
		type = 3;
		health = 700;
		health_max = 700;
		magic = 120;
		magic_max = 120;
		attack = 100;
		defend = 50;

		goodsNum[0] = 2;			//对应每件物品的数量
		goodsNum[1] = 2;
		goodsNum[2] = 1;
		goodsNum[3] = 0;
		goodsId[0] = 5;	//打死该怪物会掉落的物品
		goodsId[1] = 6;
		goodsId[2] = 7;
		goodsId[3] = -1;
		

		exp = 10;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}
	case 5: {
		name = "水晶守卫";
		type = 4;
		health = 1000;
		health_max =1000;
		magic = 110;
		magic_max = 110;
		attack = 200;
		defend = 100;

		goodsNum[0] = 2;			//对应每件物品的数量
		goodsNum[1] = 0;
		goodsNum[2] = 1;
		goodsNum[3] = 0;
		goodsId[0] = 8;	//打死该怪物会掉落的物品
		goodsId[1] = -1;
		goodsId[2] = 10;
		goodsId[3] = -1;

		exp = 15;		//打死该怪物得到的经验
		money = 40;		//打死该怪物得到的金钱
		break;
	}

	case 6: {
		name = "国王傀儡";
		type = 5;
		health = 4000;
		health_max = 4000;
		magic = 110;
		magic_max = 110;
		attack = 400;
		defend = 200;

		goodsNum[0] = 2;			//对应每件物品的数量
		goodsNum[1] = 3;
		goodsNum[2] = 2;
		goodsNum[3] = 0;
		goodsId[0] = 11;	//打死该怪物会掉落的物品
		goodsId[1] = 12;
		goodsId[2] = 13;
		goodsId[3] = -1;
		
		exp = 15;		//打死该怪物得到的经验
		money = 40;		//打死该怪物得到的金钱
		break;
	}
	case 7: {
		name = "空洞骑士";
		type = 6;
		health = 4000;
		health_max = 4000;
		magic = 110;
		magic_max = 110;
		attack = 400;
		defend = 200;

		goodsNum[0] = 2;			//对应每件物品的数量
		goodsNum[1] = 3;
		goodsNum[2] = 2;
		goodsNum[3] = 0;
		goodsId[0] = 14;	//打死该怪物会掉落的物品
		goodsId[1] = 15;
		goodsId[2] = 16;
		goodsId[3] = -1;
		
		exp = 15;		//打死该怪物得到的经验
		money = 40;		//打死该怪物得到的金钱
		break;
	}
	default:break;
	}
}
