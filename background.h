#ifndef BACKGROUND_H
#define BACKGROUND_H
#include<iostream>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment (lib,"winmm.lib")
using namespace std;


void tab(int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << "\t";
	}
}

void FullScreen()
{
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);            /* 屏幕宽度 像素 */
	int cy = GetSystemMetrics(SM_CYSCREEN);            /* 屏幕高度 像素 */
	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);   /* 获取窗口信息 */
	/* 设置窗口信息 最大化 取消标题栏及边框 */
	SetWindowLong(hwnd, GWL_STYLE, (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}


void welcomePage()  //welcompage
{
	if (0 == PlaySound(TEXT("enter.wav"), NULL, SND_FILENAME | SND_ASYNC))
	{
		printf("playsound false");
	}

	FullScreen();
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM@@@@@@@@@@@@@EXl]]]]ll]]]1i~`'RMN@@@@@@@@@@@@@@@@MMMMMMMMMMMMMMMMMMMMMMM@NMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMM@@@@M@@@@@@@@@@@@@@@@@@@NN@NEXl}]]]]]]]}/>`:*@NNNNNNN@@@@@@@@@@@@@MMMMMMMMMNMMMMMMMMM%$MMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMM@@@@@@@@@@@@@@@@@NNNNNNNNNNNNNNNN$F]}}}]]]]}/>'.1@NNNNNNNNNNNNN@@@@@@@@@MMMMMM@MMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMM%K$MMMMMM@@@@@@@@@@@@@@@NNNNNNNNNNNNN%%%%%%%%%N$I}}}}]]}}/>'.1N%%%%NNNNNNNNNNN@@@@@@@@@MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMM$Ii'!NMMM@@@@@@@@@@@@@NNNNNNNNNNN%%%%%%%%%WWWWWWW%%F}}}}]}}}/';.]NW%%%%%%NNNNNNNNNNN@@@@@@@@MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMRXK#F]+!;+MM@@@@@@@@@@@@NNNNNNNNNN%%%%%%WWWWWWWW$$$$$$$$%F1}}}}}}}+!,:YNWWWW%%%%%%NNNNNNNNNN@@@@@@@@MMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMME]*ll*}i~;RM@@@@@@@@@@NNNNNNNNN%%%%%WWWWWWW$$E$$$EEE#EEEEEWY1}1}}}}1>'`;#W$WWWWW%%%%%%%NNNNNNNN@@@@@@@@@MMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMI***Il/';iM@@@@@@@@@NNNNNNN%%%%%WWWWWW$$$$EEEEEE##########EE}111}}11i~,./%$$$$WWWWW%%%%%%%NNNNNNN%N@@@@@@@MMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMW]****]i~,*M@@@@@@@@NNNNNN%%%%%WWWWW$$$EEEEE######R#RRRRRRRR$I1111111/~,:`R$E$$$$$WWWWWW%%%%%NNNNNNNNN@@@@@@@MMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMME]**ll}>',RM@@@@@@NNNNNN%%%%WWWWW$$$EEEE######RRRR#RRRRRRRRREF1111111/!,`.]WEEE$$$E$WWWWWW%%%%%%NNNNNNN@@@@@@@@MMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMM#]***]1i;`#M@@@@@NNNNNN%%%WWWW$$$EEE#####RRRRRRRRKFRKKKKKRRKEF/1111111',`.>$#EEEEEE$$$WWWWWWW%%%%%NNNNNNNN@@@@@@MMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMME]***]}i;:KMN@@@NNNNN%%%WWWW$$$EE####RRRRRRRRRKKKKFRFlKKKKKKE*11111111',`.~E###EEEEE$$$$WWWWWWW%%%%%NNNNNNN@@@@@@@MMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMW]***]}/;./MN@@NNNNN%%%WWW$$$EE####RRR#RKKK&KKKKKKKKRRRR##RRX/1111111/'``.~E######EEEE$$$$$#EWWW%%%%WWNNNNNNN@@@@@@MMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMM@lll*l1}'`:FMNNNNNN%%%WWW$$EE###RRRRKK]XKKRR####RK&&XY*l]}*&111111111/!,`.>ER#######EEEE$$RY&$WWWWW%E$N%NNNNNN@@@@@@MMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMX}ll*]}1!`:I@@NNN%%%WWW$$EE##RRRKRR##FKR&X*1i'~;,``::::``+]111111111+~,`.]ERRRR######EEE$EE$$$WWWWW%%%%%%NNNNNN@@@@@MMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMW}llll]]1';:i#M@N%WWWW$$EE##R##EER&Y]+!;`..::,;'!>i+/11}}}1111111111i'`::&#RRRRRR####EEEEE$$$$$WWWWW%%%%%%NNN@@N@@@@@MMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMF}llll]]1>~,,+&N@N%W$$EEEE$#*X]>'`::`;~'i+/1}}}]]]}}}}}}11}}111111/!;`.iEKRRRRRRR###IY#EEEEE$$$$WWWW%%%%%NNN%W%@@@@@@MMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMM@I}llll]]}+'~,:~}&$N%WWWE&l>,``;~'i|1}}}}}}}}}}}}}}}}}}}}}}}}}1111+~;:,RRKRRRRRRRRRRF&##EEEEE$$$$WWWWW%%%%$E$%NN@@@@@MMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMNI1]ll]]]]1+>!,::`!l#&1'''!i+11}}]]]]]]]]]}]]]]]]]]]}}}}}}}}}}111'',.I#KKRRRRRRRRRK#E####EEE$$$$$WWWW$$#R#WNNNNN@@@@@MMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMM@&}}lll]]]]}1+""i/+>!'i/}]]]]]]]]]]]]]]]]]]]]]]]]]]]}}}}}}}}}}}+~'.]W&RKKKR&&RRRRRRR#####EE#&#$$$E#RKKK#%NNNNNN@@@@@@MMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMM@@M$Y}}]ll]]]]}*Yl/+1}]]]]]]]ll]]]]ll]ll]]]]]]]]]]]]]]]]]}}}}}}}i~,~1FEKKKKRRRRRRRRRRR#R###E#F#ERK&F&&K$%%%%NNNNN@@@@@MMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMM@@MM$Fl}}}l]l&''/]l]]lll]]llllllllllllllllllll]]l]]]]]]]]]}}]}}>';'.`RRKKKKKRRRRKRRRRRR##EE#R&XXXFFFRW%W%%%NNNNNN@@@@@MMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMM@@@@@@MN$&Y*IK}+]llllllllllllllllllllllllllllll]lllllll]]]]]]]]}'''::.'$KKKKKKRRKFRRRRR###KXI**IIYYFEWWWWW%%%NNNNN@@@@@MMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMM@@@@@@@@@M@NW1/llllllllllllllllllllllllll*lllll]lllllll]]]]]]]]}>''`.:.lEKKKRKR&&RKR##R&Yl}1}]ll**&$W#EWWW%%%%NNNN@@@@@@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMM@@@@@@@@@NM'|llllllllllllllllllllllllll*llllll]lllllll]]]]]l]]]+'',...`#RKKKRRKKR##&X]//11ll]]]X#$$$$WWWWW%%%NNNNN@@@@@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMM@@@@@@@@ME+]llllllllllllllllllllllll***lllllllllllllllll]l]]]]1!',:.:.}$KRKKR##&*+"">i+++/1}]XE$EE$$WWWWW%%%%NNNN@@@@@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMM@@@MF/lllllllllllllllllllllllllll*lllllllllllllllllll]]]]]>';:...,EKKR#KI+!'~!!!!"">>'lEEEEEE$$EEWWWW%%%NNNN@@@@@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMI1llllllllllllllllllllll****l*lll**lllll*llllllll]]]]l/';`:.:.YWRX1!;'~~~~!!'''!iXE###EEE$$$EWWWW%%NNNNN@@@@@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMM*]lllllllllll*llllllllll*******l]]l***l]]lllllllll]]]]}~;,:...+F!';'~~~~~~~~~!~1RERR###EEE$$WWWWW%%%NNNNN@@@@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMI]llllllllllllllll*llllll*****llFE%@@@N$Fll*llllll]l]]]>;;`...!*,~''~~';'~!""!lR&&RRR#EEEEE$$$WWWW%%%NNNN@@@@@MMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMK1llll**lllllllllllllllll****lFNMMMMMMMMMWX]lllllllll]l+';`:..;Y;~~';'!+1]]lllYYF&R#RRKKEE$$$WWW%%%%%NNNNN@@@@MMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMM%}llll]]]llllllllllllll*ll**lFMMMMMMMMMMMMM#]llllllll]]1~',:..`l'';~>1l***IYXXYFFIl*l]lXFFF&&KKRRR#E%%NNNNN@@@MMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMY}lllF&Yl]lllllllllllllll**Y%@MMMMMMMMMMMMM#]**lllll]]}!;,::.;I`~/'II****l]}11',+1/1}}}}]]l**IYX&R$%%%NNNN@@@@MMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMW1l]RMMMNR*]lllllllllllll*lENMMMMMMMMMMMMMMMFl**lllll]]'',`:.+X1YY*]]]l]}111}]11YFF&KKRRRR#E$$WW%WWW%%%NNNN@M@@MMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMM&}lEMMMMM@K]lllllllllll*lI%NMMMMMMMMMMMMMMM@*l*lllll]l>'`.`~XF*}}l*I**l*YFKRRRR&FXXYIIIIIYXXXFK#$WW%%%NN@MN$@MMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMM*]&NMMMMMM$ll**lllll*l*lY%NMMMMMMMMMMMMMMMM&l*lllll]l!,~/'*]]*FFYIIXK##R&Y*l]]lll******IIYX&#E$WW%%N@@NWRY$M@MMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMM%]IENM@MMMM%*l**lllll**lY%%MMMMMMMMMMMMMMMM$l**llll]1+IKXYXKFIEKREE#&Yl]]l*IYYXXXFF&&&K&F&KEWW%%%WEERFYllEM@MMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMM$}&W@@@MMMM%ll*lllll**l*$$NMMMMMMMMMMMMMMM@*l*ll*]]XRK&R$%%W$$$#&Y**IYF&KRRRR########RR&KK&&FFXY*l]]]lF%M@@MMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMR]#WMN@MMMME]**llll*l*lF$W@MMMMMMMMMMMMMMMIl***lY#RREW%N%W$#K&FF&KR#E$$$$E#RK&&FFFXXXYYI**ll]]]l*IY&W@M@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMRl#WMN@MMMM&]**lll*lll*#$NN@MMMMMMMMMMMM@Il**lK$EEW%N%W$E##$X]$WW$ERK&FFFFFF&KRR##RRK&FXII*ll*YFFR@@@@@MMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMR*#W@N%MMMNlllllllllllIE$NNN@MMMMMMMMMM%**lIEW$$%N%W$$$WW%%W$WERRR#EW%N@@@MMMM@@@NN%W$$$$$$$W$$$WN@@@MMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMEIRWNN%%@MXlllllllll*lY#$%%%%NNNNNN@M@FllFWWW%NN%WWW%%N%%%WW$W%N@MM@@NN%%WW$E##RK&&&FXYYYXFK#NMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMM%X&$%NN%NFllllllllll*l*&#$W%%%%%%N%EXlX$NW%NN%W%NNNNNN%%N@@MM@NN%%%%WWWW%%%WWWWWW$$$EE#RKFXXFKE%@MMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMM#XKEWNW*l*lllllllll**lIX&R####KFI*X$MMNNNNNN@NNNNNN@@M@@NNNNNNNNNNNN%%%%WWWWWWWWWWWW$WW%%W$$EE$%MMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNRXI*]]ll***********I**l***ll*XR%MMM@NN@@@@NN@@@@@@NNNN@@@@@@NNNNNNN%%%%WW$$$EEEEEE$@MMM$%MMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM@$&X*l]]]]]]]]]llllll*IYFR$@MMMMM@N@MM@@MMMM@@@@@@@@@NNN%%%%%%%%WWW$$$EEE####RRRRR#$%N@M@@@MMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN%$E#RKK&&&&KR#$%@MMMMMMMMMMMMMMMMMMMMMMMMMMMMM@@@@@@@@@@@@@@@@@@NN%%W$EE##RRRKKR#E$%@MMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM@@@@@NNNNNNNN@@MMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN&XWN%WWW%%$N@&F@@WW$%WMNXKM%$%%WW%%N$XR@MMMMM@@@@@@@@@@@@@MMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM@*+l]I&1/l1i*R11KX' i}'&K1}Rli}*+1XIll+YMMMMMMMMMMMM@@MM@MMMMMM@NNN%%%%%N@@MMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMM@E#%M%#$@MNR&K@MNEE@M@E#%N%@WKI&@WFXK#&K$#YK#WEX*F#Y&WRW%MW&R$#E@M@R&F#@%#E@NERWR&RRKKNMMMMM@@@@@@MMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMM]:EME`}@RiX&/~R%~'N@@/;WMMX+&&>>E1`$M+}M#'#MMMF`KX'#W,+N@$'IW,/@RiYKI'R$,+@@}:K/'!`*>EMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMI`#%E,l$,*MM@!;$!i@MM]'N@K:RMMW`/&.XR:,$*+M@MM&`1+WM$~.'WN~Y%;/W;lMMMW%N;+%%l`$@M/;%NNNN@@MMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMI:}l]:lX.K@M@*.R!i@@M}'%@}`WMM@i;$'+1+,l>XMMMM&..KM@W~*;~#!Y%;1&.K@@#FE%'~**>,$@@/;%MMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMI`$@$,lK.IMMM],$!iMMM}'NMY.#MMM!>N]`!R+,'WMMMM&`!`KMW~K$''~Y%'1#.]MMF.F%;/@@*`$@@/'%@MMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMl.E@W:}N/`&%R~YN''$FR/:#&Y!~#%X~E@#./NK.1@MMMMF.F1.*#,X@W'.YW`+N]:*$X.K%`+@@l.E@@i`%MMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMF1#M$}IN@Y1**KM%*1*]#Y/']RN*]IY%MMM*EMNl$M@MMMK1KM&}F]&MM@*EW}lN@&1]l*%E}*%@X1#M@I}$MMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM%l]I@WMMMMKYX@NW$RR&XFR#EF*]YYX&FY*lYF#E#XFFRR#NNNFI&MMM@$MI}lNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNl1*FiIRRR*i>]R#K}i!i]}I+1i+}iFRFi]++1/I}]i!i}K#R]'i*RRRI+Fl]lNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNW$E#EW%NW##MMMEX1+#W1il/>+}YKY]+i1li1W#+1X$MMMR#WN%$E#E$W%MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN%MM%E$RYl/1+1/'YR$E%M@%NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "\t\t\t\tMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM@K+i+R@MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	
	system("pause");
	system("cls");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	string beginning = "\n\n\n\n\n	\t\t\t\t\t\t'祂从深渊的出生地爬出来时，看到苍白之王正带着它的同胞空洞骑士离开深渊。'\n\n	\t\t\t\t\t\t'深渊的入口被封印，而祂也坠回深渊。'\n\n	\t\t\t\t\t\t'在这之后的一段时间里，虽然深渊的入口被关闭，但是祂与一些同胞还是成功逃离了深渊。'\n\n	\t\t\t\t\t[边界……游荡……停留……忘却……成长……遵循……辐光……空洞骑士……召唤……回到……圣巢。]\n\n";
	for (int i = 0; i < beginning.length(); i++) {
		Sleep(0);
		cout << beginning[i];
	}
	cout << endl << endl;
	system("pause");
	system("cls");



	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED); 

	tab(4); cout << '\t' << '\t' << " 0      0    0000000      0          0        00000000   0              0             0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0 00    0    00         00       0 00     0   0            0 0           0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0  0    0     0          0       0  0     0    0          0   0         0" << endl;
	tab(4); cout << '\t' << '\t' << " 00000000   0   0   0     0          0       0   0    0     0       0      0       0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0   0   0     0          0       0    0   0      0     0        0     0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0    0  0     0          0       0     0  0       0   0          0   0" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0   0    00 0     0          0       0     00 0        0 0            0 0	" << endl;
	tab(4); cout << '\t' << '\t' << " 0      0    0000000      0000000    0000000  00000000          0              0	" << endl << endl << endl;

	tab(4); cout << '\t' << '\t' << "	0    00      0      0   0000000    000000    0	    0    000000000     " << endl;
	tab(4); cout << '\t' << '\t' << "	0   0        0 0    0      0	  0    0     0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0  0         0  0   0      0	  0          0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	00           0   0  0      0	  0   00000  00000000        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0  0         0    0 0      0	  0     0 0  0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0    0       0     00      0	  0    0  0  0	    0        0" << endl;
	tab(4); cout << '\t' << '\t' << "	0     00     0      0   0000000    0000      0	    0        0	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	tab(8); cout << "	- WELCOME TO THE HOLLOW KNIGHT -" << endl;
	tab(8); cout << "	********************************" << endl;
	string newGameMenu = "       1.新的游戏  2.读取存档  3.退出游戏";
	tab(8); for (int i = 0; i < newGameMenu.length(); i++) {
		Sleep(0);
		cout << newGameMenu[i];
	}
	cout << endl;



	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	newGameMenu = "\t\t\t\t\t\t\t\t\t不论什么代价都在所不惜。\n\t\t\t\t\t\t\t\t\t没有可以思考的心智。\n\t\t\t\t\t\t\t\t\t没有可以屈从的意志。\n\t\t\t\t\t\t\t\t\t没有为苦难哭泣的声音。\n\t\t\t\t\t\t\t\t\t生于神与虚空之手。\n\t\t\t\t\t\t\t\t\t你必封印在众人梦中散布瘟疫的障目之光。\n\t\t\t\t\t\t\t\t\t你是容器。\n\t\t\t\t\t\t\t\t\t你是空洞骑士……\n";
	for (int i = 0; i < newGameMenu.length(); i++) {
		Sleep(0);
		cout << newGameMenu[i];
	}
	cout << endl;
	tab(8); cout << "请选择：";
}

//----------------------------------------------------------------------------------------------------------
void background1()   //Dirtmouth 
{
	if (0 == PlaySound(TEXT("dirtmouth.wav"), NULL, SND_FILENAME | SND_LOOP |SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	system("cls");

	
	tab(6); cout << "				德特茅斯" << endl;
	string background = "\t\t\t\t\t\t精致的石雕，永不停歇的大雨。栅栏缠着藤草，车站铃铛虽然老旧却依然富有光泽。\n\n \t\t\t\t\t\t你坐在椅子上默默查看地图，旁边是一位永不停歇的老者。 \n\n\t\t\t\t\t\t雨声混杂— 他诉说着曾经的繁荣，耐心的向你介绍着这站台以及这片区域悠久的历史。 \n\n\t\t\t\t\t\t当你跳上它所背的座椅，它将带你去往下一段路程... 又一处歇脚，又一段故事。\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------
void background2() //Crossroads
{
	if (0 == PlaySound(TEXT("crossroads.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	system("cls");

	tab(6); cout << "				遗忘十字路" << endl;
	string background = "\t\t\t\t\t\t遗忘十字路交错的公路曾熙熙攘攘，生机勃勃。旅者和商人们在这个区域来来往往，它是联通圣巢其他区域的枢纽。\n\n\t\t\t\t\t\t由于感染和时间流逝，十字路的交通已经停止了。\n\n\t\t\t\t\t\t现在它空空荡荡，被野兽占领，游荡着过去圣巢居民的行尸走肉。\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
	
}
//--------------------------------------------------------------------------------------------------------------
void background4()  //	Queengarden
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	system("cls");

	if (0 == PlaySound(TEXT("queengarden.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}
	tab(6); cout << "				王后花园" << endl;
	string background = "\t\t\t\t\t\t王后花园曾属于乌恩和她的苔藓部落。\n\t\t\t\t\t\t之后，被圣巢规划建设为了白色夫人静居的寓所，戒备相当森严，但还有一些乌恩形象的柱子和雕像分散在花园中。\n\n\t\t\t\t\t\t白色夫人是容器们的母亲。出于对自己制造出容器的愧疚，她将自己束缚在王后花园以免制造出更多后代。\n\n瘟疫卷土重来，长期没有维护的花园最终乱七八糟地长满了植物。\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}
	
//-------------------------------------------------------------------------------------------------------------------
void background6()  //PalePalace
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	system("cls");

	if (0 == PlaySound(TEXT("palepalace.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}
	tab(6); cout << "				苍白宫廷" << endl;
	string background = "\t\t\t\t\t\t白色宫殿曾坐落于古老盆地的宫殿广场，苍白之王于此统治圣巢。\n\n\t\t\t\t\t\t国王的仆从们，皇室家臣在这里服侍与工作着，而国王在他的工坊里使用虚空制成的国王傀儡守卫着这里。\n\n\t\t\t\t\t\t空洞骑士被封印在黑卵圣殿前，在这里被养育成长。\n\n\t\t\t\t\t\t瘟疫卷土重来，圣巢化为废墟，苍白之王隐匿了起来。白色宫殿从原先的位置消失了，似乎苍白之王以某种方式与他的宫殿一起逃走了。\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	background = "\n\n\t\t\t\t\t\t辐光几乎完全被遗忘了。她想让虫子们重新记起她的存在，瘟疫随之降临。\n\n\t\t\t\t\t\t为了解决瘟疫，苍白之王打算利用容器封印辐光。\n\n\t\t\t\t\t\t所谓容器，是指苍白之王和白色夫人结合所生出的后代，它们出生于深渊，内部充满了虚空。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	background = "被选中的容器是空洞骑士。\n\t\t\t\t\t\t然而，苍白之王和白色夫人的判断出现了差错，容器出现了污点，因此它无法彻底地封印辐光。\n\n\t\t\t\t\t\t空洞骑士之所以出现污点，可能是因为苍白之王在养育它时与它产生了羁绊。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}

	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}

//-------------------------------------------------------------------------------------------------------------
void background7()  //BlackEggPalace
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	system("cls");

	if (0 == PlaySound(TEXT("hollowknight.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}
	tab(6); cout << "				黑卵圣殿" << endl;
	string background = "\t\t\t\t\t\t为了阻止瘟疫蔓延，空洞骑士封印辐光后，被封印在这里。过去，一些虫子会进入圣殿祈祷，但一段时间后，它们不再来这里了。\n\n\t\t\t\t\t\t起初因为封印的存在，暂时无法从外界进入黑卵。杀死三位守梦者后，封印便被破坏，入口自此开放。\n\n\t\t\t\t\t\t然而，空洞骑士被错误判断了，它并不纯粹，被灌输的念头使它有了污点。\n\n\t\t\t\t\t\t也许是由于与苍白之王的亲情，也许是从一开始就并非纯粹。\n\n\t\t\t\t\t\t最终，它封印了辐光：辐光被封印在它体内，而它又被封印在黑卵圣殿内，被锁链束缚着，被期望着能够永远地封印感染。\n\n\t\t\t\t\t\t因为它已经不再纯粹，所以辐光仍能继续在众人梦中散布瘟疫。\n\n\t\t\t\t\t\t最终，瘟疫复苏，王国覆灭，只留下一片废墟。圣巢的老国王啊……他一定是太想拯救自己那摇摇欲坠的小世界了。\n\n\t\t\t\t\t\t他强加给他人的牺牲……结果都徒劳无功\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}

//------------------------------------------------------------------------------------------------------------
void background0()   //Spring
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");

	if (0 == PlaySound(TEXT("reflection.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}
	tab(6); cout << "				温泉" << endl;
	string background = "\t\t\t\t\t\t热气腾腾的水潭，分布在圣巢各处。站在其中，小骑士会恢复灵魂，血量也会缓慢回复。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------
void background5()       //CrystaPeak
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	system("cls");

	if (0 == PlaySound(TEXT("crystalpeak.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}
	tab(6); cout << "				水晶山峰" << endl;
	string background = "\t\t\t\t\t\t在圣巢的全盛时期，水晶山峰向王国的城市持续供应着水晶。\n\n\t\t\t\t\t\t除了使用鹤嘴锄挖矿的一般虫子矿工，像是晶刺螨和亮背虫这样的生物也被用于运送推车与器械。\n\n\t\t\t\t\t\t瘟疫来袭后，许多矿工死去了，之后又因感染复苏。\n\n\t\t\t\t\t\t这些躯壳仍怀有强烈的使命感，因此即使在死后，也不断地在挖矿。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}
//--------------------------------------------------------------------------------------------------------------
void background3()       //mantistown
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	system("cls");

	if (0 == PlaySound(TEXT("mantistown.wav"), NULL, SND_FILENAME |  SND_ASYNC)) //播放音乐
	{
		printf("playsound false");
	}
	tab(6); cout << "				螳螂村" << endl;
	string background = "\t\t\t\t\t\t螳螂村是螳螂部落，一群能够抵抗感染的螳螂的家园。它们有着厚重的历史，文化起源远在圣巢王国诞生前。\n\n\t\t\t\t\t\t村庄外围有许多顶上插着野兽的头部的杆，用来威慑所有漫游者。\n\n\t\t\t\t\t\t螳螂拒绝了苍白之王带来的技术，它们用骨与筋腱构建房屋与机关，技术高超。";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	cout << endl;
	system("pause");
	system("cls");
	cout << endl;
}




void background(int position)
{
	switch (position)
	{
	case 0: background0(); break;    //Spring
	case 1: background1(); break;    //dirtmouth
	case 2: background2(); break;    //crossroads
	case 3: background3(); break;    //mantistown 
	case 4: background4(); break;    //queengarden
	case 5: background5(); break;    //crystalpeak
	case 6: background6(); break;    //palepalace
	case 7: background7(); break;    //blackeggpalace
	}
}






#endif