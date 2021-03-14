#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main()
{

   // **********************************************
   // *              프로그래밍 연습                *
   // **********************************************
	//1.
	//struct Student {
	//	string firstName;
	//	string lastName;
	//	char wGrade;
	//	int age;
 //  };
	//Student student;
	//cout << "영문 퍼스트 네임(이름) : ";
	//getline(cin, student.firstName);
	//cout << "영문 라스트 네임(성) : ";
	//getline(cin, student.lastName);
	//cout << "원하는 학점 : ";
	//cin >> student.wGrade;
	//student.wGrade += 1;
	//cout << "나이 : ";
	//cin >> student.age;

	//cout << "성명 : " << student.lastName << ", " << student.firstName << endl;
	//cout << "학점 : " << student.wGrade << endl;
	//cout << "나이 : " << student.age << endl;

	//3.
	//char first[20];
	//char last[20];
	//char full[20];
	//cout << "이름 : ";
	//cin.getline(first, 20);
	//cout << "성 : ";
	//cin.getline(last, 20);
	//strcpy(full, last);	// full에 last 값 복사
	//strcat(full, ", "); // full에 , 추가
	//strcat(full, first); // full에 first 추가
	//cout << "하나의 문자열 : " << full << endl;

	//4.
	//string first;
	//string last;
	//string fullName;
	//cout << "이름 : ";
	//getline(cin, first);
	//cout << "성 : ";
	//getline(cin, last);
	//cout << "하나의 문자열 : " << last << ", " << first;

	//5.
	struct CandyBar
	{
		string candyName;
		double weight;
		int kcal;
	};

	//CandyBar candyBar = { "Mocha Munch", 2.3, 350 };
	//cout << "이름 : " << candyBar.candyName << endl;
	//cout << "중량 : " << candyBar.weight << endl;
	//cout << "칼로리 : " << candyBar.kcal << endl << endl;

	////6.
	//CandyBar candies[3] = { {"A", 1.0, 100} , {"B", 2.3, 250} , {"C", 4.2, 400} };
	//for (int i = 0; i < size(candies); i++) {
	//	cout << i << "번 째 요소 정보 " << endl;
	//	cout << candies[i].candyName << endl;
	//	cout << candies[i].weight << endl;
	//	cout << candies[i].kcal << endl;
	//}

	//7.
	/*struct TCLdata {*/
	//	string BrandName;
	//	double diameter;
	//	double weight;
	//};
	//TCLdata pizza;
	//cout << "회사이름 입력 : ";
	//getline(cin, pizza.BrandName);
	//cout << "지름 입력 : ";
	//cin >> pizza.diameter;
	//cout << "중량 입력 : ";
	//cin >> pizza.weight;
	//cout << pizza.BrandName << endl
	//	 << pizza.diameter << endl
	//	 << pizza.weight << endl;

	//8.
	/*TCLdata* piz = new TCLdata;
	cout << "지름 입력 : ";
	cin >> piz->diameter; cin.get();
	cout << "회사이름 입력 : ";
	getline(cin, piz->BrandName);
	cout << "중량 입력 : ";
	cin >> piz->weight;
	cout << piz->BrandName << endl
		<< piz->diameter << endl
		<< piz->weight << endl;*/

	// 9.
	//CandyBar* dcandies = new CandyBar[3];

	//dcandies[0].candyName = "a";
	//dcandies[0].kcal = 120.3;
	//dcandies[0].weight = 203.2;

	//10.


   // **********************************************
   // *                  연습문제                   *
   // **********************************************
   // //1.
   // char actors[30];
   // short betsie[100];
   // float chuck[13];
   // long double dipsea[64];

   // //2.
   // //array<char, 30> actors2;

   // //3. 
   // int examNum[5] = { 1,3,5,7,9 };

   // //4.
   // int even = examNum[0] + examNum[4];

   // //5.
   // float ideas[10]{};
   // cout << ideas[1] << endl;

   // //6.
   // char output[20] = "cheerseburger";
   // cout << output << endl;

   // //7.
   // string str = "Waldorf Salad";

   // //8.
   // struct Fish
   // {
   //     string kind; // char[] kind;
   //     double weight;
   //     double length;
   // };

   // //9.
   // Fish Flounder{"fish", 10.3, 120};

   // //10.
   // enum Response{Yes = 1, No = 0, Maybe = 2};

   // //11.
   // double ted = 180.0;
   // double* pted = &ted;
   // cout << pted << endl;

   // //12.
   ///* float pf = treacle;
   // cout << pf[0] << endl;
   // cout << pf[9] << endl;*/

   // //13.
   // unsigned int num = 0;
   // cout << "양의 정수를 하나 입력 : ";
   // cin >> num;
   // int* Num1 = new int[num];
   // vector<int> Num2(num);
   // 

   // //14.
   // // 올바르다 ! 문자열 상수이기 때문에 문장의 첫 주소번지가 출력될 것이다

   // //15.
   // Fish* fish14 = new Fish();
   // cout << "kind : ";
   // cin >> fish14->kind;
   // cout << "weight : ";
   // cin >> fish14->weight;
   // cout << "length : ";
   // cin >> fish14->length;

   // //16. 

   // //17.
   // const vector<string> ex17s(10);
   // const array<string, 10> ex17a;
}


