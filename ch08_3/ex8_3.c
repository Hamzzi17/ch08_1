#include <stdio.h>
#include "DFS.h"

int main(void) {
	int i;
	graphType* G9;
	G9 = (graphType*)malloc(sizeof(graphType));
	createGraph(G9);
	// �׷��� G9 ���� : ���� u�� ���� ����(u, v)�� ���Լ����� v�� ū �ͺ���.
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
	printf("\n G9�� ���� ����Ʈ ");
	print_adjList(G9);	// G9�� ���� ����Ʈ�� Ȯ�ο����� ���

	printf("\n\n///////////////\n\n���� �켱 Ž�� >> ");
	DFS_adjList(G9, 0);		// 0�� ������ ���� A���� ���� �켱 Ž�� ����

	getchar();	return 0;
}