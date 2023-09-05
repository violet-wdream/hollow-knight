//第93行增加enemy简介显示函数
#include <iostream>
#include<fstream>
#include <Windows.h>
#include <mmsystem.h>
#include "Bag.h"
#include "Enemy.h"
#include "Fight.h"
#include "Goods.h"
#include "Map.h"
#include "Npc.h"
#include "Role.h"
#include "Skill.h"
#include "Store.h"
#include"Save.h"
#include"Task.h"
#include"background.h"
#include"examinateInput.h"
#pragma comment (lib,"winmm.lib")


using namespace std;




void newGame(Role player, Map map) {

	Goods goods[24] = { 0, 1, 2, 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 };
	Store store;
	int chatNum = 0;// ?
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	background(1);



menu:
	Sleep(1);
	system("cls");
	player.showRole();
	cout << endl << "你的位置 :" << map.getName() << endl;
	map.initNpc(map.getPosition(), map.n);
	map.showNpc(map.n);                   //show the npc
	cout << endl;




	cout << "Enemy:" << endl;            //show the enemy
	if (map.isThereFight()) 
	{
		Enemy_Boss  boss(map.getPosition());
		cout << boss.getName();
	}




												//show the info of you
	cout << "\n\n1.交谈 2.战斗 3.地图 4.状态 5.商店  6.保存并退出" << endl;
	int choice = 1;
	cin >> choice;
	choice = examinateInput(1, 6, choice);

	switch (choice)
	{
	case 1:
	{
		cout << endl << "可对话的人物:" << endl;
		map.showNpc(map.n);
		cout << "\n请输入要对话的人物(序号):  "<<endl;
		int npcNum = 0;
		cin >> npcNum;
		npcNum = examinateInput(0, 2, npcNum);
		map.n[map.getPosition()].chat(map.getPosition(), npcNum);
		Sleep(1000);
		break;
	}
	//---------------------------------------------------------------------------------------------------------------------------------
	case 2:
	{
		if (map.isThereFight())
		{
			Enemy_Boss  boss(map.getPosition());
			Enemy_Small smallEnemy;
			boss.showEnemy();
			Fight fight(player, boss);
			system("cls");
			cout << "正在进入战斗......." << endl;
			while (!fight.isFightEnd())
			{
				Sleep(3000);
				system("cls");
				boss.showinfor(map.getPosition());		//增加enemy简介显示函数
				if (fight.fightRound() == true)
				{
					player = fight.runEndFight();
					goto menu;
				}
			}
			player = fight.endFight();		//战斗正常结束，获得增益
			smallEnemy.~Enemy_Small();
		}
		break;
	}
	//----------------------------------------------------------------------------------------------------------------------------------
	case 3:
	{
		while (true)
		{
			map.ShowMap();
			cout << "使用w a s d来移动 按1进入地图" << endl;
			char order;
			cin >> order;
			if (order == '1') {
				system("cls");
				background(map.getPosition());
				break;
			}

			else {
				map.Move(order);
				chatNum = 0;
				player.setMapId(map.getPosition());
			}

		}
		break;


	}
	//----------------------------------------------------------------------------------------------------------------------------------
	case 4:
	{
		cout << "1.背包 2.技能 3.装备 4.任务 5.返回" << endl;
		int ch1=1;
		ch1 = examinateInput(1, 5, ch1);
		switch (ch1)                                                                //ch1
		{
			//-------------------------------------------------------------------------------
			case 1:
			{
				player.showBag();		//显示背包
				player.useDrug();		//是否使用药品
				break;
			}
			//-------------------------------------------------------------------------------
			case 2:
			{
				player.showSkill();
				break;
			}
			//-------------------------------------------------------------------------------
			case 3:
			{

				player.showEquip();
				cout << "1.更换装备		2.取下装备		3.退出" << endl;
				int ch2 = 1;
				cin >> ch2;
				ch2 = examinateInput(1, 3, ch2);               //ch2
				//--------------------------------
				if (ch2 == 1)
				{
					player.showBag();

					cout << "请选择要换上的装备" << endl;
					int equipId = 1;
					cin >> equipId;
					equipId = examinateInput(1, 24, equipId);
					player.wearEquip(equipId);
					player.getBag().reduceGoods(equipId, 1);
				}
				//-------------------------------
				else if (ch2 == 2)
				{
					cout << "请输入要换下的装备" << endl;
					cout << "1." << goods[player.getWeapon()].getName() << endl;
					cout << "2." << goods[player.getClothes()].getName() << endl;
					int chEquip;
					cin >> chEquip;
					chEquip = examinateInput(1, 2, chEquip);
					if (chEquip == 1)
					{
						player.removeEquip(player.getWeapon());
						player.getBag().addGoods(player.getWeapon(), 1);
					}
					else
					{
						player.removeEquip(player.getClothes());
						player.getBag().addGoods(player.getClothes(), 1);
					}
				}
				//------------------------------
				else if (ch2 == 3)
				{
					goto menu;
				}


				break;
			}
			//------------------------------------------------------------------------------
			case 4:
			{
				cout << "任务" << player.getTaskId() << '\t' << player.getTaskName() << '\t' << player.getTaskDesc() << endl << endl;
				break;
			}
			//------------------------------------------------------------------------------
			case 5:
			{
				goto menu;
				break;
			}
			//-----------------------------------------------------------------------------
			}

		break;
	}

	//----------------------------------------------------------------------------------------------------------------------------------
	case 5:
	{
		cout << "1.购买物品		2.售出物品		3.退出" << endl;
		int choiceStore;
		cin >> choiceStore;
		choiceStore = examinateInput(1, 3, choiceStore);
		if (choiceStore == 1)
		{
			store.showStores();
			player = store.storeToPlayer(player);
		}
		if (choiceStore == 2)
		{
			player.showBag();
			player = store.playerToStore(player);
		}
		if (choiceStore == 3)
		{
			goto menu;
		}

		break;

	}

	//---------------------------------------------------------------------------------------------------------------------------------
	
	case 6:
	{
		Save::setToFile(player);
		exit(0);
		break;
	}
	//---------------------------------------------------------------------------------------------------------------------------------


	}
	goto menu;
}





//读取游戏
void readFile() {
	ifstream fileRole("SaveRole.dat", ios_base::in | ios_base::binary);
	ifstream fileBag("SaveBag.dat", ios_base::in | ios_base::binary);
	ifstream fileSkill("SaveSkill.dat");
	ifstream fileTask("SaveTask.dat");
	if (!fileRole) {
		cout << "没有保存的游戏！" << endl;
		cout << "请重新选择:" << endl;
	}
	else {
		string name;
		int type, health_max, health, magic_max, magic, attack, exp, level, defend, money, mapId, story, weapon, clothes;
		fileRole >> name >> type >> health_max >> health >> magic >> magic_max >> attack >> exp >> level >> defend >> money >> mapId >> story >> weapon >> clothes;

		Role player(type);
		player.setHealth_max(health_max);
		player.setHealth(health);
		player.setMagic_max(magic_max);
		player.setMagic(magic);
		player.setAttack(attack);
		player.setExpSave(exp);
		player.setLevelSave(level);
		player.setDefend(defend);
		player.setMoney(money);
		player.setMapId(mapId);
		player.setStory(story);
		player.setWeapon(weapon);
		player.setClothes(clothes);

		Skill skill;
		fileSkill.read(reinterpret_cast<char *>(&skill), sizeof(Skill));
		Skill &newSkill = skill;
		player.setSkill(newSkill);

		Task task(0);
		fileTask.read(reinterpret_cast<char *>(&task), sizeof(Task));
		player.setTask(task);


		for (int key2 = 24;!fileBag.eof();) {
			
			int key;
			int value;
			fileBag >> key >> value;
			if (key2 == key)
				break;
			player.addSaveGoodsToBag(key, value);
			key2 = key;

		}
		fileRole.close();
		fileBag.close();
		fileSkill.close();
		Map newMap(player.getMapId());

		cout << "读入成功！" << endl;
		newGame(player,newMap);
	}
}

//程序入口
int main(){
	welcomePage();

	


	int choice;
	while (true) 
	{
		cin >> choice;
		if (choice != 1 && choice != 2 && choice != 3)
				cout << "选择错误，请重新选择。" << endl;
			else break;
	}

		if (choice == 3)
			exit(0);
		//游戏创建


		if (choice == 1) 
		{
			Role player(1);
			system("cls");
			Map map;
			newGame(player,map);
		}


		if (choice == 2) 
		{
			readFile();
		}
	return 0;
}



