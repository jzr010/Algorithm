//여러 개의 노드가  존재할 때 두 두 개의 노드를 선택해서, 현재 이 두 노드가 서로 같은 그래프에 속하는지 판별.!! 


#include <stdio.h>

int getParent(int parent[], int x) {
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent,parent[x]);
}

void unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b) parent[b] = a;
	else parent[a] = b;
}

int findParent(int parent[], int a, int b) {
    a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b) return 1;
	else return 0;	
}

int main() {
	int parent[11];
	for(int i = 1; i <=10; i++) {
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	printf("1과 5는 연결되어 있나요? %d\n", findParent(parent, 1, 5));
	
	
}


