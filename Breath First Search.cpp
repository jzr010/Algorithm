#include <iostream>
#include <queue>
#include <vector>//vector 가 array보다 좋은점은 동적할당.크기를 따로 정해주지 않아도 된다/ 

using namespace std;

int number = 7;
int c[8];
vector<int> a[8]; //8개의 백터가 들어갈 배열을 만듬.


void bfs(int start){
	queue<int> q;
	q.push(start);
	c[start]=true;
	while(!q.empty()){
		int x= q.front();
		q.pop();
		printf("%d",x);
		for(int i=0;i<a[x].size();i++){//현재 q에서 꺼낸 인접한 노드. //a[x].size() 뒤에 push.back과 관련있음. 
			int y=a[x][i];
			if(!c[y]){
				q.push(y);
				c[y]=true;
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

