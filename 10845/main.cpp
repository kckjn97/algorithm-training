#include <iostream>
#include <deque>

using namespace std;

void push(deque<int>& queue, int n){
	queue.push_back(n);
}

int pop(deque<int>& queue){
	if(queue.size() == 0)
		return -1;
	int res = queue.front();
	queue.pop_front();
	return res;
}

int front(deque<int>& queue){
	if(queue.size() == 0)
		return -1;
	return queue.front();
}

int back(deque<int>& queue){
	if(queue.size() == 0)
		return -1;
	return queue.back();
}

int size(deque<int>& queue){
	return queue.size();
}

int empty(deque<int>& queue){
	return queue.size() == 0;
}

int main() {
	deque<int> queue;
	int T;
	cin >> T;
	for(int test_case=0; test_case<T; test_case++){
		string cmd;
		cin >> cmd;
		if(cmd == "push"){
			int n;
			cin >> n;
			push(queue, n);
		}else if(cmd == "front"){
			cout << front(queue) << endl;
		}else if(cmd == "back"){
			cout << back(queue) << endl;
		}else if(cmd == "size"){
			cout << size(queue) << endl;
		}else if(cmd == "empty"){
			cout << empty(queue) << endl;
		}else if(cmd == "pop"){
			cout << pop(queue) << endl;
		}
	}
}
