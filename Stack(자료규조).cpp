#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	stack<int> s;//������ �ڷ����̶� �̸� ����.
	s.push(7);//���ð��� �ȿ� 7�� �ִ´�. 
	s.push(5);
	s.push(4);
	s.pop();//���ð������� ���� ���� �ִ� �ڷḦ �A��.
	s.push(6);
	s.pop();
	while(!s.empty()) {//������ ������ �� �� ����. 
		cout << s.top() << ' ';//���� ������ ���� �A��. 
		s.pop();//�װ� ������. 
	}
	return 0;
	
}
