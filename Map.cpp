#include <iostream>
#include "Map.h"

using namespace std;

Map::Map()  
{
	position = 1;
	dx = 1;
	dy = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			pos[i][j] = ' ';
		}
	}
	pos[dx][dy] = 'Y';
}

Map::Map(int p) 
{
	position = p;
	if (p == 0) 
	{
		dx = 0;
		dy = 0;
	}
	if (p == 1) 
	{
		dx = 1;
		dy = 0;
	}
	if (p == 2) 
	{
		dx = 1;
		dy = 1;
	}
	if (p == 3) 
	{
		dx = 0;
		dy = 1;
	}
	if (p == 4) 
	{
		dx = 0;
		dy = 2;
	}
	if (p == 5) 
	{
		dx = 2;
		dy = 1;
	}
	if (p == 6) 
	{
		dx = 2;
		dy = 2;
	}
	if (p == 7) 
	{
		dx = 1;
		dy = 2;
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			pos[i][j] = ' ';
		}
	}
	pos[dx][dy] = 'Y';
}


void Map::Move(char order)
{
	pos[dx][dy] = ' ';
	switch (order)
	{
	case 'w': {
		if (position == 1 || position == 3 || position == 5) {
			dy++;
			position++;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	case 'a': {
		if (position == 3 || position == 7) {
			dx++;
			position--;
		}
		else if (position == 0)
		{
			dx++;
			position = 1;
		}
		else if (position == 2)
		{
			dx++;
			position = 5;
		}
		else if (position == 4)
		{
			dx++;
			position = 7;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	case 's': {
		if (position == 2 || position == 4 || position == 6) {
			dy--;
			position--;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	case 'd': {
		if (position == 2 || position == 6) {
			dx--;
			position++;
		}
		else if (position == 1)
		{
			dx--;
			position = 0;
		}
		else if (position == 5)
		{
			dx--;
			position = 2;
		}
		else if (position == 7)
		{
			dx--;
			position = 4;
		}
		else
		{
			cout << "移动失败" << endl;
		}
		break;
	}
	default:
		break;
	}
	pos[dx][dy] = 'Y';
}

//-----------------------------------------------------------------------------------------------------------
void Map::ShowMap()
{
	system("cls");
	cout << "地图:" << endl;
	
	cout << " __________	   __________	     __________ " << endl;
	cout << "|          |	  |          |	    |          |" << endl;
	//cout<<"|          |          |          |          |"<<endl;
	cout << "| 苍白宫廷 |———| 黑卵圣殿 |———| 王后花园 |" << endl;
	cout << "|     " << pos[2][2] << "    |	  |     " << pos[1][2] << "    |	    |    " << pos[0][2] << "     |" << endl;
	//cout<<"|          |       |   |          |          |"<<endl;
	cout << "|__________|	  |__________|	    |__________|" << endl;
	cout << "      |                                   |            " << endl;
	cout << "      |                                   |            " << endl;
	cout << "      |                                   |            " << endl;
	cout << " _____|____	   __________	     _____|____ " << endl;
	cout << "|          |	  |          |	    |          |" << endl;
	//cout<<"|          |          |          |          |"<<endl;
	cout << "| 水晶山峰 |———|遗忘十字路|———|  螳螂村  |" << endl;
	cout << "|     " << pos[2][1] << "    |	  |     " << pos[1][1] << "    |	    |    " << pos[0][1] << "     |" << endl;
	//cout<<"|          |       |   |          |          |"<<endl;
	cout << "|__________|	  |__________|	    |__________|" << endl;
	cout << "                        |                             " << endl;
	cout << "                        |                             " << endl;
	cout << "                        |                             " << endl;
	cout << "           	   _____|____	     __________ " << endl;
	cout << "            	  |          |	    |          |" << endl;
	//cout<<"|          |          |          |          |"<<endl;
	cout << "                  | 德特茅斯 |———|   温泉   |" << endl;
	cout << "             	  |     " << pos[1][0] << "    |	    |    " << pos[0][0] << "     |" << endl;
	//cout<<"|          |       |   |          |          |"<<endl;
	cout << "            	  |__________|	    |__________|" << endl;

	
	cout << "您的位置: " << mapName[position] << endl;
}
//----------------------------------------------------------------------------------------------------




void Map::initNpc(int position, Npc npc[3])      //initiate the npc
{
	switch (position)
	{
		case 0:npc[0].name = "0.奎若"; npc[1].name = "1.泡温泉的小虫子"; npc[2].name = " ";//spring
			break;
		case 1:npc[0].name = "0.虫长者"; npc[1].name = "1.伟大的佐特"; npc[2].name = " "; //dirtmouth
			break;
		case 2:npc[0].name = "0.米拉"; npc[1].name = " "; npc[2].name = " ";      //crossroads
			break;
		case 3:npc[0].name = "0.奎若"; npc[1].name = " ";  npc[2].name = " ";     //mantistown
			break;
		case 4:npc[0].name = "0.白色夫人";  npc[1].name = " "; npc[2].name = " ";//queengarden
			break;
		case 5:npc[0].name = "0.奎若"; npc[1].name = "1.猎人";   npc[2].name = " ";//crystalpeak
			break;
		case 6:npc[0].name = "0.苍白之王沃姆的尸体";  npc[1].name = " "; npc[2].name = " ";//palepalace
			break;
		case 7:npc[0].name = "0.黄蜂女";  npc[1].name = " "; npc[2].name = " "; //blackeggpalace 
			break;
		default:
			break;
	}
}
void Map::showNpc(Npc npc[3])
{
	cout << "Npc:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << npc[i].name << "  ";
	}
}
//-------------------------------------------------------------------------------------------------------
/*void Map::initEnemy(int position, Enemy enemy[3])
{
	switch (position)
	{
	case 0:npc[0].name = "0.奎若"; npc[1].name = "1.泡温泉的小虫子"; npc[2].name = " ";//spring
		break;
	case 1:npc[0].name = "0.虫长者"; npc[1].name = "1.伟大的佐特"; npc[2].name = " "; //dirtmouth
		break;
	case 2:npc[0].name = "0.米拉"; npc[1].name = " "; npc[2].name = " ";      //crossroads
		break;
	case 3:npc[0].name = "0.奎若"; npc[1].name = " ";  npc[2].name = " ";     //mantistown
		break;
	case 4:npc[0].name = "0.白色夫人";  npc[1].name = " "; npc[2].name = " ";//queengarden
		break;
	case 5:npc[0].name = "0.奎若"; npc[1].name = "1.柯尼法";   npc[2].name = " ";//crystalpeak
		break;
	case 6:npc[0].name = "0.苍白之王沃姆的尸体";  npc[1].name = " "; npc[2].name = " ";//palepalace
		break;
	case 7:npc[0].name = "0.黄蜂女";  npc[1].name = " "; npc[2].name = " "; //blackeggpalace 
		break;
	default:
		break;
	}
}
*/




bool Map::isThereFight()
{
	if (position == 1 || position == 3 || position == 4 || position == 5 || position == 6 || position == 7 || position == 8 || position == 9)
		return true;
	else return false;
}

//  ==



int Map::getPosition()
{
	return position;
}


int Map::getNpcGoodsId() {
	return npc.getGoodsId();
}



int Map::getNpcGoodsNum() {
	return npc.getGoodsNum();
}



string Map::getName(){
	return mapName[position];
}




