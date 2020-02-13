#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr{ 1, 2, 3, 4, 5, 6 };
	try{
		arr.at(6);
	}
	catch (out_of_range& e){
		std::cout << "³öÏÖÊý×éÔ½½ç" << std::endl;
	}
	return 0;
}