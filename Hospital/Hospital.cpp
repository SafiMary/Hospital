#include "Hospital.h"
#include <iostream>
#include <string>
#include <map>


Hospital::Hospital() : _idpatients(0), _counterOperation(0){}
Hospital::~Hospital() {}

void Hospital::addPatients(const std::string& name) {
	_idpatients++;
	_patients.insert(make_pair(_idpatients, name));
}
void Hospital::removePatients(int key) {
	_patients.erase(key);
}
void Hospital::PrintAllPatients() {
	for (const auto [key, value] : _patients) {
		std::cout << key << " " << value << '\n';
	}
}
const std::string& Hospital::getPatients(int key)const {
	const auto it = _patients.find(key);
	return it->second;
}

 void Hospital::Operation_P(const std::string& name, int key) {
	 _counterOperation++;
	 std::cout << "\nПроведена операция в отношении " << name;
	 std::cout << "\nПациент выписан " << _patients.erase(key) << '\b';

}
 
 void Hospital::OperationCounter() {
	 std::cout << "\nКоличество операций составило " << _counterOperation << '\n';
 }