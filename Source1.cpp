#include<iostream>
using namespace std;
#define size 5
class quue {
	int top;
	int array[size];
public:
	quue() {
		top = -1;
		for (int i = 0; i < size; i++) {
			array[i]=0;

		}
	}
	void push(int x) {
		if ((size-1) == top) {
			cout << "stack is full";
		}
		else {

			++top;
			array[top] = x;
		}
	}
void pop() {
		if (top==-1) {
			cout << "stack is empty";
			
		}
		else {
		array[top--]=0;
		
		}
	}
	void disp() {
		for (int i = size-1; i >=0;i--) {
			cout <<"value at "<<i<<" is:" <<array[i]<< endl;

		}
	}
};
int main() {
	quue q;
	q.push(1);
	q.push(3);
	q.push(7);
	q.push(10);
	q.pop();
	q.disp();
q.pop();
cout << endl;
	q.disp();
	return 0;
}