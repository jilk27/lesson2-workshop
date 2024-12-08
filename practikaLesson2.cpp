#include <iostream>
#include <vector>
#include <stdexcept>
#include <memory>
using namespace std;

int mm(const vector<int>& mas) {
	int imax = mas[0];
	for (int i = 1; i < mas.size(); ++i) {
		if (imax > mas[i]){
			imax = mas[i];
		}
	}
	return imax;
}

int main() {
	int n, ind;
	cin >> n;
	vector<int> mas;
	for (int i = 0; i < n; ++i) {
		cin >> ind;
		mas.push_back(ind);
	}
	cout << mm(mas);
	return 0;
}
