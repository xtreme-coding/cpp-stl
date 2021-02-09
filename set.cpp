#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){

	set<int> S;

	//insert no in set
	//set maintains ascending order
	//operation in O(logN)
	S.insert(1);
	S.insert(5);
	S.insert(-2);

	//printing a set
	for(int i : S){
		cout << i << " ";
	}
	cout << endl;

	//find if no is present in set
	auto it = S.find(1);
	if (it == S.end())
	{
		cout << "not present" << endl;
	} else {
		cout << "present" << endl;
		cout << *it << endl;
	}

	//find index of no
	auto it2 = S.lower_bound(1);//>=
	auto it3 = S.upper_bound(1);//>
	cout << *it2 << " " << *it3 << endl;

	//erase an element in O(logN)
	S.erase(1);


	return 0;
}