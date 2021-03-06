#include <iostream>

using namespace std;

void tell1();
void tell2();
void currentTime(int hours, int min);

int main() {
	//exam1
	//cout << "내 이름 YoonMoo\n";
	//cout << "경기도와 부산";

	//exam2
	//double distance;

	//cout << "거리를 입력하세요 : ";
	//cin >> distance;
	//cout << "킬로미터 : " << distance * 1.60934 << endl;

	//exam3
	//tell1();
	//tell1();
	//tell2();
	//tell2();

	//exam4
	//string name;
	//int age;

	//cout << "이름 입력 : ";
	//cin >> name;
	//cout << "나이 입력 : ";
	//cin >> age;

	//int monthAge = age * 12;
	//cout << "Enter your age : " << age << endl;;
	//cout << "당신의 나이를 월수로 나타내면 " << monthAge << endl;

	//exam5
	double sTem; //섭씨온도
	/*cout << "섭씨온도 입력 후 엔터 : ";
	cin >> sTem;
	cout << "섭씨 " << sTem << "은 화씨로 " << sTem * 1.8 + 32.0 << "도입니다." << endl;*/
	int hours;
	int min;
	cout << "시 입력 : ";
	cin >> hours;
	cout << "분 입력 : ";
	cin >> min;
	currentTime(hours, min);
}

void tell1() {
	cout << "Three blind mice\n";
}

void tell2() {
	cout << "See how they run\n";
}

void currentTime(int hours, int min) {
	cout << "시각 : " << hours << ":" << min << endl;
}