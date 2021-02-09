#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){

	map<int, int> A;
	A[1] = 10;
	A[2] = 12;
	A[5] = 15;

	//no of occurences of a char in a string
	map<char,int> count;
	string x = "soubhagya";

	for (char c : x){
		count[c]++;
	}
	cout << count['s'] << endl;

	//works in O(logN)
	//A.find(key)
	//A.erase(key)
	return 0;
}