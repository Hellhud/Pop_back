#include <iostream>
#include <vector>
using namespace std;

void vector<int>::pop_back() {
	vector<float>* A = new vector<float>(5);
	A->at(0) = 2.88f;
	A->at(1) = 3.8f;
	A->at(2) = 4.4f;
	A->at(3) = 4.9f;
	A->at(4) = 5.5f;
	for (int i = 0; i < A->size(); i++)
		cout << A->at(i) << " ";
	A->pop_back();
	int count = A->size();
}
vector<int>::iterator erase(vector<int>::const_iterator First, vector<int>::const_iterator Last) {

}
int main()
{


	return 0;
}