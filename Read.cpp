#include"Read.h"
#include<iostream>
#include<fstream>
using namespace std;

Read::Read(int roleType) :player(roleType) {}

Role Read::getRole() {			//��ȡ��������

	ifstream file;
	file.open("Save.dat");
	if (!file) {
		cout << "û�б������Ϸ��" << endl;
		return player;
	}
	else if (file.read(reinterpret_cast<char *>(&player), sizeof(Role))) {
		cout << "����ɹ���" << endl;
		return player;
	}
	else {
		cout << "����ʧ�ܣ�" << endl;
		return player;
	}
	file.close();
}