#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin("./map/1.txt");
	
	int height, width;
	
	fin >> height >> width;
	
	cout << height << " " << width << endl;
	return 0;
}
