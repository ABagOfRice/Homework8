#ifndef MYCLASS_HPP_
#define MYCLASS_HPP_

#include <vector> // needed for vectors , file was missing

class MyClass {
	

	public: // public declaration missing. This means that the constructor destructor and other functions are all private. Problem when trying to create an instance of the class.
    
    //MyClass(int n) : size(size) { data = new double[size]; }
	MyClass(int n) : size(n) { data = new double[size]; } // constructor needs to take a value "n" and apply it to the private data member "size" , not make size == size
	
	~MyClass() { delete[] data; }
	MyClass(const MyClass & c) {
		size = c.size;
		data = new double[size];
		for (int i = 0; i<size; ++i) {
			data[i] = c.data[i];
		}
	}
	void Resize(int n) {
		delete[] data; // we use delete[] to clear out an array of objects , where as we use delete to clear out a single object
		size = n;
		data = new double[n];
		
	}

	void Fill(const std::vector<double> & vec) {
		int n = vec.size();
		if (size<n) {
			//Reallocate(n);
			Resize(n); //no function called Reallocate , Resize was needed
		}
		for (int i = 0; i<n; ++i) {
			data[i] = vec[i];
		}
	}
	

	MyClass & operator+=(const MyClass & c) {
		int sizeTmp = size + c.size;
		double * dataTmp = new double[sizeTmp];
		
		for (int i = 0; i < size; i++){ dataTmp[i] = data[i]; }
		for (int i = 0; i < c.size; i++){ dataTmp[size+i]=c.data[i]; }

		size = sizeTmp;
		data = dataTmp;
		return *this;
	}
//private:
	double * data;
	int size;
};


#endif /* MYCLASS_HPP_ */