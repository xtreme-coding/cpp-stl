#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	vector<int> A = {11, 2, 3, 14};

	//access 2nd element
	cout << A[1] << endl;

	//binary-search value i.e 3 in O(logN)
	bool present = binary_searc(A.begin(), A.end(), 3);

	//add elements at end
	//100 - value to be pushed
	A.push_back(100);

	//return iterator pointing to 1st occurence of value
	//vector<int>::iterator can be replaced with auto
	vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100)

	//return iterator pointing just more than value
	vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100)

	return 0;
}