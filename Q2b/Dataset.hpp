#ifndef DATASET_HPP_
#define DATASET_HPP_

#include <string>
#include <vector>
#include "Named.hpp"

class Dataset : public Named {
public:
	Dataset(const std::string & name) : Named(name) {; }

	~Dataset(){}

	void AddData(double x) { data.push_back(x); }
	void ClearData(){ for (int i = 0; i<10; ++i) { data.pop_back(); } }
	std::vector<double> GetData(){ return data; }


private:
	std::vector<double> data;


};


#endif /* DATASET_HPP_ */