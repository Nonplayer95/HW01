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
//�Ű�����=�Լ����� �Ѱ��ִ°�
//����,�Ķ����, �Ű����� 3�� �� ������


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
	int* arr = new int[number]; //new -heap����

	 // �����Ҵ�-����ð� ���߿� ���α׷��Ӱ� �ʿ��Ѹ�ŭ �Ҵ�޴°�
	cout << "���� 5���� �Է��Ͻʽÿ�" << endl;
	for (int i = 0; i < number; i++)
	{
		cin >> arr[i];
	}
	
	

	

	cout << "�հ�" << sum(arr,number) << endl;
	cout << "���" << average(arr,number) << endl;



	return 0;
}