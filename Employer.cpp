#include "Employer.h"

void Employer::addWorker(Worker worker) {
	workers.push_back(worker);
	workersById[worker.id].push_back(worker);
}

void Employer::removeWorker(int workerId) {
	for (auto i = workers.begin(); i != workers.end(); ++i) {
		if (i->id == workerId) {
			workers.erase(i);
			workersById.erase(workerId);
		}
	}
}

Worker* Employer::findWorker(int workerId) {
	for (auto i = workers.begin(); i != workers.end(); ++i) {
		if (i->id == workerId) {
			return &(*i);
		}
	}
	return nullptr;
}

int Employer::countWorkers() {
	return workers.size();
}
