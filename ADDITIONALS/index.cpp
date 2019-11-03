#include <iostream>
#include "Functions.h"
using namespace std;


int main()
{
	bool keepgoing = true;
	while(keepgoing){
		double i;
		double j;
		int answer;
		cout << "Inser the first number" << endl;
		cin >> i;
		cout << "Inser the second number" << endl;
		cin >> j;
		for(int loop;loop<10;loop++){
			cout << "Count " << loop << " loop" << endl;
		}
		if(i < j){
			cout << "The number " << i << " is smaller than the number " << j << endl;
		}
		if(i > j){
			cout << "The number " << i << " is bigger than the number " << j << endl;
		}
		if(i == j){
			cout << "The number " << i << " is equal than the number " << j << endl;
		}
		auto sum = add(i,j);
		bool res = test(true);
		cout << "The sum is " << sum << endl;
		cout << "Test is " << res << endl;
		cout << "Compare another, 0 for no: ";
		cin >> answer;
		if(answer == 0){
			keepgoing = false;
		}
		test();
	}
	return 0;
}
