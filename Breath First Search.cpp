//탐색을 할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘.
//'맹목적인 탐색'
//장점: '최단 경로', '최단 길이'를 보장 함. 


#include <iostream>
#include <queue>
#include <vector> //메모리 할당을 위하여.

using namespace std;

int number = 7;
int c[7];//방문 처리를 위함.
vector<int> a[8]; //자유로운 메모리 할당. 


int bfs(int start) {
    queue<int> q;
	q.push(start);
	c[start] = true;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d",x);
		for(int i = 0; i < a[x].size(); i++) {//a[i].size()는 a와 연결된 노드의 수.
		    int y = a[x][i];//a[x][i]는 그 start와 연결되어 있는 수.//0부터 시작하는이유는 컴퓨터에서는 숫자를 셀떄 0부터 시작. 
		    if(!c[y]) {//그 a[x][i]를 방문하지 않았다면. 
			    q.push(y);
				c[y] = true; 
		    }
	    }	
    }
}

int main(void){
	a[1].push_back(2);
	a[2].push_back(1);
	
	a[1].push_back(3);
	a[3].push_back(1);
	
	a[2].push_back(3);
	a[3].push_back(2);
	
	a[2].push_back(4);
	a[4].push_back(2);
	
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[5].push_back(4);
	a[4].push_back(5);
	
	a[3].push_back(6);
	a[6].push_back(3);
	
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[6].push_back(7);
	a[7].push_back(6);

	bfs(1);
	
	return 0; 
	
}
	
