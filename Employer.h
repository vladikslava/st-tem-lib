#pragma once

#include <iostream>
#include<vector>
#include<map>
#include <iterator>

struct Worker {
	int id;
	std::string name;
	std::string post;
	double salary;
};

class Employer
{
private:
	std::vector<Worker> workers;
	std::map<int, std::vector<Worker>> workersById;

public:
	Employer() {

	}
	~Employer() {

	}
	void addWorker(Worker worker);
	
	void removeWorker(int workerId);

	Worker* findWorker(int workerId);

	int countWorkers();
	
};

