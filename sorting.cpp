#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x, int y){
	return x > y;
}

int main(){

	vector<int> A = {11, 2, 3, 14};


	//sort A in ascending O(NlogN)
	sort(A.begin(), A.end());

	//sort A in descending O(NlogN)
	sort(A.begin(), A.end(), f);

	//print a vector
	vector<int>::iterator it3;
	for (it3 = A.begin(); it3 != A.end(); it3++)
	{
		cout << *it3 << " ";
	}
	cout << endl;

	//print a vector 2nd method
	for (int x: A){
		cout << x << " ";
	}
	cout << endl;

	return 0;
}