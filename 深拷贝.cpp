#include <iostream>

class school{
	friend void start();
	friend class hospital;
	std::string schoolName;
public:
	school(){
		std::cout << "�޲ι�����" << std::endl;
	}
	school(const school &p) :schoolName(p.schoolName){
		std::cout << "����������" << std::endl;
	}
	~school()
	{
		std::cout << "������" << std::endl;
	}
};
