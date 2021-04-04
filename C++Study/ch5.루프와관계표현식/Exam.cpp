#include "iostream"
#include<array>
const int ArSize = 101;

using namespace std;

//< 진입조건 / 탈출조건 루프의 차이 >
//* 진입조건
//- 루프 몸체에 들어가기 전, 조건 검사표현식을 평가
//- 조건이 false면, 한번도 실행하지않음
//
//* 탈출조건
//- 실행을 한번하고 나서, 조건 검사표현식 평가

//<cin >> ch / cin.get(ch) 차이
//- cin.get()은 공백, 띄어쓰기 등 모든 문자를 읽어들임

int main() {
	
	//** 프로그래밍 연습문제 **

	//1
	//int num1, num2 = 0;

	//cout << "값 입력 : ";
	//cin >> num1;
	//cout << "값 입력 : ";
	//cin >> num2;

	//int sum = 0;

	//for (int i = num1; num1 <= num2; num1++) {
	//	sum += num1;
	//}
	//cout << "합 : " << sum << endl;

	//2
	//array<long double, ArSize> factorials;
	////long long factorials[ArSize];
	//factorials[1] = factorials[0] = 1L;
	//for (int i = 2; i < ArSize; i++)
	//	factorials[i] = i * factorials[i - 1];
	//for (int i = 0; i < ArSize; i++)
	//	std::cout << i << "! = " << factorials[i] << std::endl;

	//3
	//int num=0;
	//int sum = 0;
	//
	//do {
	//	cout << "정수입력 : ";
	//	cin >> num;
	//	sum += num;
	//} while (num != 0);

	//cout << "입력한 값들의 합 : " << sum << endl;

	//4
	//double A = 100000.0, B = 100000.0;
	//int i = 1;
	//cout.setf(ios_base::fixed, ios_base::floatfield); // 소수점 보여주기
	//for (; A >= B; i++)
	//{
	//	A += 100000 * 0.1;
	//	B += 0.05 * B;
	//	cout << i << "년 후 A 원금 " << A << "\tB 원금 " << B << endl;
	//}
	//cout << i - 1 << "년 후 B의 투자 가치가 A의 투자 가치를 초과함" << endl;
	
	//5
	//string month[12]={
	//	"1월","2월","3월","4월","5월","6월","7월","8월","9월","10월","11월","12월"
	//};

	//int monthSales[12], sum = 0;
	//for (int i = 0; i < 12; i++) {
	//	cout << i + 1 << "월 판매량 입력 : ";
	//	cin >> monthSales[i];
	//	sum += monthSales[i];
	//}
	//cout << "총 판매량 : " << sum << endl;

	//6
	//string month[12] = {
	//"1월","2월","3월","4월","5월","6월","7월","8월","9월","10월","11월","12월"
	//};

	//int monthSales[3][12], sum[3] = {};
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 12; j++) {
	//		cout << i + 1 << "년 쨰 " << j+1 << "월 판매량 입력 : ";
	//		cin >> monthSales[i][j];
	//		sum[i]+= monthSales[i][j];
	//	}
	//	cout << endl;
	//	cout << i + 1 << "년 째 판매량 : " << sum[i] << endl; 
	//	cout << endl;
	//}
	//for (int i = 0; i < 2; i++) {
	//	sum[i + 1] += sum[i];
	//	cout << i + 1 << "년 째 누적 판매량 : " << sum[i + 1] << endl;
	//}
}