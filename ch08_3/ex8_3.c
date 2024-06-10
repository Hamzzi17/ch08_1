#include <stdio.h>
#include "DFS.h"

int main(void) {
	int i;
	graphType* G9;
	G9 = (graphType*)malloc(sizeof(graphType));
	createGraph(G9);
	// 그래프 G9 구성 : 정점 u에 대한 간선(u, v)의 삽입순서는 v가 큰 것부터.
	for (i = 0; i < 7; i++)
		insertVertex(G9, i);
	insertVertex(G9, 0, 2);
	insertVertex(G9, 0, 1);
	insertVertex(G9, 1, 4);
	insertVertex(G9, 1, 3);
	insertVertex(G9, 1, 0);
	insertVertex(G9, 2, 4);
	insertVertex(G9, 2, 0);
	insertVertex(G9, 3, 6);
	insertVertex(G9, 3, 1);
	insertVertex(G9, 4, 6);
	insertVertex(G9, 4, 2);
	insertVertex(G9, 4, 1);
	insertVertex(G9, 5, 6);
	insertVertex(G9, 6, 5);
	insertVertex(G9, 6, 4);
	insertVertex(G9, 6, 3);
	printf("\n G9의 인접 리스트 ");
	print_adjList(G9);	// G9의 인접 리스트를 확인용으로 출력

	printf("\n\n///////////////\n\n깊이 우선 탐색 >> ");
	DFS_adjList(G9, 0);		// 0번 정점인 정점 A에서 깊이 우선 탐색 시작

	getchar();	return 0;
}