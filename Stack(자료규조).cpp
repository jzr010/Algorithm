#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	stack<int> s;//스택의 자료형이랑 이름 정함.
	s.push(7);//스택공간 안에 7을 넣는다. 
	s.push(5);
	s.push(4);
	s.pop();//스택공간에서 제일 위에 있는 자료를 뺸다.
	s.push(6);
	s.pop();
	while(!s.empty()) {//스택의 공간이 빌 떄 까지. 
		cout << s.top() << ' ';//스택 위에서 부터 뺸다. 
		s.pop();//그거 없엔다. 
	}
	return 0;
	
}
