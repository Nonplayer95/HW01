#include <iostream>
using namespace std;

double sum(int arr[],int number)
{
	double sum = 0;
	for (int i = 0; i < number; i++)
	{
		sum += arr[i];
	}

	return sum;
}
//매개변수=함수에게 넘겨주는값
//인자,파라미터, 매개변수 3개 다 같은것


double average(int arr[],int number)
{
	double average = sum(arr,number) / number;
	
	return average;
}


int main()
{
	int number;
	{
		cin >> number;
	}
	int* arr = new int[number]; //new -heap영역

	 // 동적할당-실행시간 도중에 프로그래머가 필요한만큼 할당받는것
	cout << "숫자 5개를 입력하십시오" << endl;
	for (int i = 0; i < number; i++)
	{
		cin >> arr[i];
	}
	
	

	

	cout << "합계" << sum(arr,number) << endl;
	cout << "평균" << average(arr,number) << endl;



	return 0;
}