#include "Hospital.h"
#include <iostream>
#include <string>
#include <map>
#include <windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Hospital a;
	a.addPatients("Tom");//�������� ������ ��������
	a.addPatients("Lolla");//�������� ������� ��������
	a.addPatients("Donald");//�������� ������� ��������
	a.addPatients("Rog");//�������� ������� ��������

	a.PrintAllPatients(); //������ �� ����� 1Tom  2Lolla 3Donald 4Rog
	std::cout << "\n_____________________\n";
	a.removePatients(1); //������� �������� 1 �� �����
	a.PrintAllPatients(); 
	a.getPatients(2);
	a.Operation_P("Lolla",2); //������� �������� ��� ��������� � ��������
	a.Operation_P("Donald", 3); //������� �������� ��� ��������� � ��������
	
	a.OperationCounter(); //������ ���-�� ����������� �������� � ��������
	a.PrintAllPatients(); //������ ���������� ��������� �� �����

}