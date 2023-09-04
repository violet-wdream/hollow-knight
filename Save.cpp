#ifndef SAVE_CPP
#define SAVE_CPP
#include"Save.h"
#include<fstream>
#include<iostream>
using namespace std;


void Save::setToFile(Role player) {
	ofstream fileRole("SaveRole.dat", ios_base::binary);
	ofstream fileBag("SaveBag.dat", ios_base::binary);
	ofstream fileSkill("SaveSkill.dat", ios_base::binary);
	ofstream fileTask("SaveTask.dat", ios_base::binary);
	if (!fileRole || !fileBag || !fileSkill || !fileTask) {
		cout << "�޷��򿪱����ļ���" << endl;
		cout << "����ʧ�ܣ�" << endl;
	}
	else 
	{
		fileRole << player.getName() << ' '
			<< player.getType() << ' '
			<< player.getHealth_max() << ' '
			<< player.getHealth() << ' '
			<< player.getMagic() << ' '
			<< player.getMagic_max() << ' '
			<< player.getAttack() << ' '
			<< player.getExp() << ' '
			<< player.getLevel() << ' '
			<< player.getDefend() << ' '
			<< player.getMoney() << ' '
			<< player.getMapId() << ' '
			<< player.getStory() << ' '
			<< player.getWeapon() << ' '
			<< player.getClothes();
		;
		fileSkill.write(reinterpret_cast<char *>(&player.getSkill()), sizeof(Skill));
		fileTask.write(reinterpret_cast<char *>(&player.getTask()), sizeof(Task));
		for (const auto &i : player.getBag().getMapBags()) {
			fileBag << i.first<<' ' << i.second<< ' ';
		}
		cout << "����ɹ���" << endl;
	}
	fileRole.close();
	fileBag.close();
	fileSkill.close();

}

#endif


