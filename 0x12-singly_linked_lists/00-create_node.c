#include <stdio.h>
#include <stdlib.h>

/**
  *struct ode - contains data and link of node
  *@data: data contained in node
  *@link: link to the next node
  *return: 0 on success
  */

struct node
{
	int data;
	struct node *link;
};

/**
  *main - creates a node in C
  *return: 0 on success
  */

int main(void)
{
	struct node *head = NULL;

	head = (struct node *)malloc(size of(struct node));

	head->data = 45;
	head->link = NULL;

	printf("%d", head->data);
	return (0);
}
