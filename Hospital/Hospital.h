#pragma once
#include <iostream>
#include <string>
#include <map>

class Hospital
{
public:
	Hospital();
	~Hospital();
	void addPatients(const std::string& name);
	void removePatients(int key);
	void PrintAllPatients();
	const std::string& getPatients(int key)const;
	void Operation_P(const std::string& name, int key);
	void OperationCounter();
private:
	std::map<int, std::string> _patients ;
	int _idpatients;
	int _counterOperation;
};

