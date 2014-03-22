#ifndef NAMED_HPP_
#define NAMED_HPP_

#include <string>

class Named {
public:
	Named(const std::string & name = "dummy") : name(name){ ; }
	~Named(){ }

	void setName(const std::string & newname){ name = newname; }
	std::string getName(){ return name; }




private:
	std::string name;


};


#endif /* NAMED_HPP_ */