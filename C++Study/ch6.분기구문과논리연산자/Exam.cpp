#include "iostream"
#include "cctype"
#include <array>

using namespace std;


int main() {

	//** 프로그래밍 연습문제 **

	//1
	//char ch;
	//do
	//{
	//	cout << "문자 입력 : ";
	//	cin >> ch;
	//	if (islower(ch))
	//		ch = toupper(ch);
	//	else if (isupper(ch))
	//		ch = tolower(ch);
	//	cout << ch << endl;
	//} while (ch != '@');

	// 2
	/*double donation[10];
	double sum = 0.0;
	double aver;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "기부금 입력 #" << i + 1 << " :";
		if (!(cin >> donation[i]))
			exit(EXIT_FAILURE);
		sum += donation[i];
	}
	aver = sum / 10;
	for (int i = 0; i < 10; i++)
	{
		if (donation[i] > aver)
			count++;
	}
	cout << "기부금들의 평균 : " << aver << endl << "평균보다 큰 기부금의 수 : " << count << endl;*/

	// 3

	/*char choiceNum = 'c';
	string word;

	cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q) : \n";

	cout << "c) camaera\n";
	cout << "p) pianist\n";
	cout << "t) tree\n";
	cout << "g) game\n";


	while (choiceNum != 'q') {
		
		cin >> choiceNum;

		switch (choiceNum)
		{
		case 'c':
			cout << "카메라\n";
			break;
		case 'p':
			cout << "피아니스트\n";
			break;
		case 't':
			cout << "나무\n";
			break;
		case 'g':
			cout << "게임\n";
			break;
		case 'q':
			break;
		default:
			cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)";
		}
	}*/
	const int strsize = 100;
	// 4
	/*struct bop {
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int preference;
	};

	char ch = 'a';
	bop list[5] = {
		{"Wimp Macho","aaa","bbb",0},
		{"Raki Rhodes","Junior Programmer","ccc",1},
		{"Celia Laiter","ddd","MIPS",2},
		{"Hoopy Hipman","Analyst Trainee","eee",1},
		{"Pat Hand","fff","LOOPY",2}
	};
	cout << "Benevolent Order of Programmers\n"
		<< "a. 실명으로 열람             b. 직함으로 열람\n"
		<< "c. BOP 아이디로 열람         d. 회원이 지정한 것으로 열람\n"
		<< "q. 종료\n";

	while(ch != 'q') {
		cout << "원하는 것을 선택하십시오 : ";
		cin >> ch;
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 5; i++)
				cout << list[i].fullname << endl;
			break;
		case 'b':
			for (int i = 0; i < 5; i++)
				cout << list[i].title << endl;
			break;
		case 'c':
			for (int i = 0; i < 5; i++)
				cout << list[i].bopname << endl;
			break;
		case 'd':
			for (int i = 0; i < 5; i++)
			{
				if (list[i].preference == 0)
					cout << list[i].fullname << endl;
				else if (list[i].preference == 1)
					cout << list[i].title << endl;
				else
					cout << list[i].bopname << endl;
			}
			break;
		case 'q':
			break;
		}
	}*/
	/*do --> ch가 초기화되지않았을 떄, do로 먼저 한번 값받기
	{
		cout << "원하는 것을 선택하십시오 : ";
		cin >> ch;
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 5; i++)
				cout << list[i].fullname << endl;
			break;
		case 'b':
			for (int i = 0; i < 5; i++)
				cout << list[i].title << endl;
			break;
		case 'c':
			for (int i = 0; i < 5; i++)
				cout << list[i].bopname << endl;
			break;
		case 'd':
			for (int i = 0; i < 5; i++)
			{
				if (list[i].preference == 0)
					cout << list[i].fullname << endl;
				else if (list[i].preference == 1)
					cout << list[i].title << endl;
				else
					cout << list[i].bopname << endl;
			}
			break;
		case 'q':
			break;
		}
	} while (ch != 'q');*/
	cout << "프로그램을 종료합니다." << endl;
}
	