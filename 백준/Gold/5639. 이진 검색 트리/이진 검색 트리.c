#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *left;
	struct node *right;
}node;

void f(node *f_now)
{
	if(f_now -> left != NULL) f(f_now -> left);
	if(f_now -> right != NULL) f(f_now -> right);
		
	printf("%d\n", f_now->value);
}
int main()
{
	int N;
	node *now;
	node *new_node;
	
	scanf("%d", &N);
	node *first = (node*)malloc(sizeof(node));
	first-> value = N;
	first-> left = NULL;
	first-> right = NULL;
	while(scanf("%d", &N) != EOF){
		now = first;
		while(1){
			if(N < now -> value){//left
				if(now -> left == NULL){
					new_node = (node*)malloc(sizeof(node));
					now -> left = new_node;
					new_node->value = N;
					new_node->left = NULL;
					new_node->right = NULL;
					break;
				}
				else{
					now = now -> left;
				}
			}
			else{
				if(now -> right == NULL){
					new_node = (node*)malloc(sizeof(node));
					now -> right = new_node;
					new_node->value = N;
					new_node->left = NULL;
					new_node->right = NULL;
					break;
				}
				else{
					now = now -> right;
				}
			}
		}
	}
	
	f(first);
	return 0;
}