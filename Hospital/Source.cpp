#include "Hospital.h"
#include <iostream>
#include <string>
#include <map>
#include <windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Hospital a;
	a.addPatients("Tom");//добавили одного пациента
	a.addPatients("Lolla");//добавили второго пациента
	a.addPatients("Donald");//добавили второго пациента
	a.addPatients("Rog");//добавили второго пациента

	a.PrintAllPatients(); //вывели на экран 1Tom  2Lolla 3Donald 4Rog
	std::cout << "\n_____________________\n";
	a.removePatients(1); //удалили пациента 1 по ключу
	a.PrintAllPatients(); 
	a.getPatients(2);
	a.Operation_P("Lolla",2); //провели операцию над пациентов и выписали
	a.Operation_P("Donald", 3); //провели операцию над пациентов и выписали
	
	a.OperationCounter(); //узнали кол-во проведенных операций в больнице
	a.PrintAllPatients(); //вывели оставшихся пациентов на экран

}