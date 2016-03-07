
#include <cstdlib>
#include <iostream>
#include <vector>
#include <stack>
#include <string> 
#include "mystack.h"
#include "myminstack.h"
#include "myqueue.h"
#include <fstream>
using namespace std;


int main(int argc, const char * argv[])
{

	if (argc < 2){
		cout << "Usage: " << argv[0] << " <filename> \n" << endl;
		return 0;
	}

	ifstream infile(argv[1]);
	if (!infile.is_open()) {
		cout << "cannot open file \n" << endl;
		return 0;
	}

	vector<int> x;
	int inputinteger;
	while (infile >> inputinteger) {
		x.push_back(inputinteger);
	}
        
//    mystack<int> test_stack(3);
//    test_stack.push(4);
//    test_stack.push(3);
//    test_stack.push(5);
//    test_stack.push(7);
//    test_stack.push(11);
//        
//    test_stack.display();
        
//    vector<int> x;
//    x.push_back(6);
//    x.push_back(3);
//    x.push_back(4);
//    x.push_back(5);
//    x.push_back(10);
//    x.push_back(1);
    
	minstack<int> getminstack;
	for (int i = 0; i < x.size(); i++){
		getminstack.push(x[i]);
                getminstack.display();
                
	}
	cout << "\n******************The first part : min stack implementation ******************\n";
        getminstack.display();
	cout << "The current minium number is: " <<getminstack.getMin() << endl;
	cout << "Pop the current top element: " << getminstack.gettop() << endl;
	getminstack.pop();
	cout << "The current minium number is: "<< getminstack.getMin() << endl;

//
//	myqueue<int> queuebystack;
//	for (int i = 0; i < x.size(); i++){
//		queuebystack.push(x[i]);
//	}
//
//	cout << "\n******************The second part : Queue implementation ******************\n";
//
//	cout << "pop all elements in queue" << endl;
//	for (int i = 0; i < x.size(); i++){
//		cout << queuebystack.gettop() << endl;;
//		queuebystack.pop();
//	}
//
//	cout << "Is the queue empty right now?\n" << ((queuebystack.empty()) ? "Yes" : "No")<< endl;


	return 0;

}