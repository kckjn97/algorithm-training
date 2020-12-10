#include <iostream>
#include <vector>

using namespace std;

void push(vector<int>& stack, int n){
	stack.push_back(n);
}

int pop(vector<int>& stack){
	if(stack.size() == 0)
		return -1;
	int res = stack.back();
	stack.pop_back();
	return res;
}

int top(vector<int>& stack){
	if(stack.size() == 0)
		return -1;
	return stack.back();
}

int size(vector<int>& stack){
	return stack.size();
}

int empty(vector<int>& stack){
	return stack.size() == 0;
}

int main() {
	vector<int> stack;
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		string cmd;
		cin >> cmd;
		if(cmd == "push"){
			int n;
			cin >> n;
			push(stack, n);
		}else if(cmd == "top"){
			cout << top(stack) << endl;
		}else if(cmd == "size"){
			cout << size(stack) << endl;
		}else if(cmd == "empty"){
			cout << empty(stack) << endl;
		}else if(cmd == "pop"){
			cout << pop(stack) << endl;
		}
	}
}
