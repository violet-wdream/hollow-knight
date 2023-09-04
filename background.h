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
	int cx = GetSystemMetrics(SM_CXSCREEN);            /* ��Ļ��� ���� */
	int cy = GetSystemMetrics(SM_CYSCREEN);            /* ��Ļ�߶� ���� */
	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);   /* ��ȡ������Ϣ */
	/* ���ô�����Ϣ ��� ȡ�����������߿� */
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
	string beginning = "\n\n\n\n\n	\t\t\t\t\t\t'�k����Ԩ�ĳ�����������ʱ�������԰�֮������������ͬ���ն���ʿ�뿪��Ԩ��'\n\n	\t\t\t\t\t\t'��Ԩ����ڱ���ӡ�����kҲ׹����Ԩ��'\n\n	\t\t\t\t\t\t'����֮���һ��ʱ�����Ȼ��Ԩ����ڱ��رգ����ǵk��һЩͬ�����ǳɹ���������Ԩ��'\n\n	\t\t\t\t\t[�߽硭���ε�����ͣ��������ȴ�����ɳ�������ѭ�������⡭���ն���ʿ�����ٻ������ص�����ʥ����]\n\n";
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
	string newGameMenu = "       1.�µ���Ϸ  2.��ȡ�浵  3.�˳���Ϸ";
	tab(8); for (int i = 0; i < newGameMenu.length(); i++) {
		Sleep(0);
		cout << newGameMenu[i];
	}
	cout << endl;



	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	newGameMenu = "\t\t\t\t\t\t\t\t\t����ʲô���۶�������ϧ��\n\t\t\t\t\t\t\t\t\tû�п���˼�������ǡ�\n\t\t\t\t\t\t\t\t\tû�п������ӵ���־��\n\t\t\t\t\t\t\t\t\tû��Ϊ���ѿ�����������\n\t\t\t\t\t\t\t\t\t�����������֮�֡�\n\t\t\t\t\t\t\t\t\t��ط�ӡ����������ɢ�����ߵ���Ŀ֮�⡣\n\t\t\t\t\t\t\t\t\t����������\n\t\t\t\t\t\t\t\t\t���ǿն���ʿ����\n";
	for (int i = 0; i < newGameMenu.length(); i++) {
		Sleep(0);
		cout << newGameMenu[i];
	}
	cout << endl;
	tab(8); cout << "��ѡ��";
}

//----------------------------------------------------------------------------------------------------------
void background1()   //Dirtmouth 
{
	if (0 == PlaySound(TEXT("dirtmouth.wav"), NULL, SND_FILENAME | SND_LOOP |SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	system("cls");

	
	tab(6); cout << "				����é˹" << endl;
	string background = "\t\t\t\t\t\t���µ�ʯ������ͣЪ�Ĵ��ꡣդ�������ٲݣ���վ������Ȼ�Ͼ�ȴ��Ȼ���й���\n\n \t\t\t\t\t\t������������ĬĬ�鿴��ͼ���Ա���һλ����ͣЪ�����ߡ� \n\n\t\t\t\t\t\t�������ӡ� ����˵�������ķ��٣����ĵ������������վ̨�Լ���Ƭ�����ƾõ���ʷ�� \n\n\t\t\t\t\t\t�������������������Σ���������ȥ����һ��·��... ��һ��Ъ�ţ���һ�ι��¡�\n";
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
	if (0 == PlaySound(TEXT("crossroads.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	system("cls");

	tab(6); cout << "				����ʮ��·" << endl;
	string background = "\t\t\t\t\t\t����ʮ��·����Ĺ�·�������������������������ߺ��������������������������������ͨʥ�������������Ŧ��\n\n\t\t\t\t\t\t���ڸ�Ⱦ��ʱ�����ţ�ʮ��·�Ľ�ͨ�Ѿ�ֹͣ�ˡ�\n\n\t\t\t\t\t\t�������տյ�������Ұ��ռ�죬�ε��Ź�ȥʥ���������ʬ���⡣\n";
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

	if (0 == PlaySound(TEXT("queengarden.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				����԰" << endl;
	string background = "\t\t\t\t\t\t����԰�������ڶ�������̦޺���䡣\n\t\t\t\t\t\t֮�󣬱�ʥ���滮����Ϊ�˰�ɫ���˾��ӵ�Ԣ�����䱸�൱ɭ�ϣ�������һЩ�ڶ���������Ӻ͵����ɢ�ڻ�԰�С�\n\n\t\t\t\t\t\t��ɫ�����������ǵ�ĸ�ס����ڶ��Լ���������������Σ������Լ�����������԰�����������������\n\n���߾�������������û��ά���Ļ�԰�������߰���س�����ֲ�\n";
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

	if (0 == PlaySound(TEXT("palepalace.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				�԰׹�͢" << endl;
	string background = "\t\t\t\t\t\t��ɫ�����������ڹ�����صĹ���㳡���԰�֮���ڴ�ͳ��ʥ����\n\n\t\t\t\t\t\t�������ʹ��ǣ����Ҽҳ�����������빤���ţ������������Ĺ�����ʹ������ƳɵĹ����������������\n\n\t\t\t\t\t\t�ն���ʿ����ӡ�ں���ʥ��ǰ�������ﱻ�����ɳ���\n\n\t\t\t\t\t\t���߾���������ʥ����Ϊ���棬�԰�֮����������������ɫ�����ԭ�ȵ�λ����ʧ�ˣ��ƺ��԰�֮����ĳ�ַ�ʽ�����Ĺ���һ�������ˡ�\n";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	background = "\n\n\t\t\t\t\t\t���⼸����ȫ�������ˡ������ó��������¼������Ĵ��ڣ�������֮���١�\n\n\t\t\t\t\t\tΪ�˽�����ߣ��԰�֮����������������ӡ���⡣\n\n\t\t\t\t\t\t��ν��������ָ�԰�֮���Ͱ�ɫ���˽���������ĺ�������ǳ�������Ԩ���ڲ���������ա�";
	for (int i = 0; i < background.length(); i++) {
		Sleep(0);
		cout << background[i];
	}
	background = "��ѡ�е������ǿն���ʿ��\n\t\t\t\t\t\tȻ�����԰�֮���Ͱ�ɫ���˵��жϳ����˲�������������۵㣬������޷����׵ط�ӡ���⡣\n\n\t\t\t\t\t\t�ն���ʿ֮���Գ����۵㣬��������Ϊ�԰�֮����������ʱ�����������";
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

	if (0 == PlaySound(TEXT("hollowknight.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				����ʥ��" << endl;
	string background = "\t\t\t\t\t\tΪ����ֹ�������ӣ��ն���ʿ��ӡ����󣬱���ӡ�������ȥ��һЩ���ӻ����ʥ��������һ��ʱ������ǲ����������ˡ�\n\n\t\t\t\t\t\t�����Ϊ��ӡ�Ĵ��ڣ���ʱ�޷�����������ѡ�ɱ����λ�����ߺ󣬷�ӡ�㱻�ƻ�������Դ˿��š�\n\n\t\t\t\t\t\tȻ�����ն���ʿ�������ж��ˣ����������⣬���������ͷʹ�������۵㡣\n\n\t\t\t\t\t\tҲ����������԰�֮�������飬Ҳ���Ǵ�һ��ʼ�Ͳ��Ǵ��⡣\n\n\t\t\t\t\t\t���գ�����ӡ�˷��⣺���ⱻ��ӡ�������ڣ������ֱ���ӡ�ں���ʥ���ڣ������������ţ����������ܹ���Զ�ط�ӡ��Ⱦ��\n\n\t\t\t\t\t\t��Ϊ���Ѿ����ٴ��⣬���Է������ܼ�������������ɢ�����ߡ�\n\n\t\t\t\t\t\t���գ����߸��գ���������ֻ����һƬ���档ʥ�����Ϲ�����������һ����̫�������Լ���ҡҡ��׹��С�����ˡ�\n\n\t\t\t\t\t\t��ǿ�Ӹ����˵��������������ͽ���޹�\n";
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

	if (0 == PlaySound(TEXT("reflection.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				��Ȫ" << endl;
	string background = "\t\t\t\t\t\t�������ڵ�ˮ̶���ֲ���ʥ��������վ�����У�С��ʿ��ָ���꣬Ѫ��Ҳ�Ỻ���ظ���";
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

	if (0 == PlaySound(TEXT("crystalpeak.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				ˮ��ɽ��" << endl;
	string background = "\t\t\t\t\t\t��ʥ����ȫʢʱ�ڣ�ˮ��ɽ���������ĳ��г�����Ӧ��ˮ����\n\n\t\t\t\t\t\t����ʹ�ú�����ڿ��һ����ӿ󹤣����Ǿ�����������������������Ҳ�����������Ƴ�����е��\n\n\t\t\t\t\t\t������Ϯ��������ȥ�ˣ�֮�������Ⱦ���ա�\n\n\t\t\t\t\t\t��Щ�����Ի���ǿ�ҵ�ʹ���У���˼�ʹ������Ҳ���ϵ����ڿ�";
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

	if (0 == PlaySound(TEXT("mantistown.wav"), NULL, SND_FILENAME |  SND_ASYNC)) //��������
	{
		printf("playsound false");
	}
	tab(6); cout << "				����" << endl;
	string background = "\t\t\t\t\t\t��������벿�䣬һȺ�ܹ��ֿ���Ⱦ�����ļ�԰���������ź��ص���ʷ���Ļ���ԴԶ��ʥ����������ǰ��\n\n\t\t\t\t\t\t��ׯ��Χ����ඥ�ϲ���Ұ�޵�ͷ���ĸˣ������������������ߡ�\n\n\t\t\t\t\t\t���ܾ��˲԰�֮�������ļ����������ù�����칹����������أ������߳���";
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