/*
��� ��� ������� �������. �������� ���������, ������� ������ ������������ ������ ����� �����,
� ����� ���������� ����������� ������� ��� ������ ��������� ������������� ����� �����
(��. ���� �44). ��������������, ��� �����, ������� ������ ������������, ��������
�������������.

���������: ��������� ������ �1 ��� ����������� ����� �� ���������� ������� � ��������, ���
����� ����� �������� ���� ������ ������ (�.�. � �������� �������), ��� ����� ��� ���������
������ ������ ���������� ����� ������ ��������.
*/
#include<iostream>

void recurs(unsigned int num)
{	
	int number{ 0 };
	number = num / 2;
	if (number > 0)
		recurs(number);
	if (number * 2 == num)
		std::cout << 0;
	else
		std::cout << 1;
	
}

void proverka(int n)
{
	if (n == 0)
		std::cout << 0;
	recurs(static_cast<unsigned int> (n));
}

int main()
{
	int num{ -148 };
	
	//std::cout << "Enter to number: ";
	//std::cin >> num;
	proverka(num);

}