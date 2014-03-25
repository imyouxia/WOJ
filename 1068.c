#include <stdio.h>
#include <stdlib.h>

struct llist
{
	int val;
	struct llist *next;
};

typedef struct llist node;
typedef node *llink;

int main()
{
	int op,idx,val;
	llink head;
	head = (llink)malloc(sizeof(node));
	head->next = NULL;

	while(scanf("%d %d %d",&op,&idx,&val) == 3)
	{
		if(op == 1)
		{
			int i = 0;
			llink p = head;
			while((i!=idx) && (p!=NULL))
			{
				p = p->next;
				i++;
			}
			if(p!=NULL)
			{
				llink value;
			   	value = (llink)malloc(sizeof(node));
				value->next = p->next;
			   	value->val = val;
				p->next = value;	
			}
		}

		if(op == 2)
		{
			int i = 0;
			llink p = head;
			while((i!=idx) && (p!=NULL))
			{
				p = p->next;
				i++;
			}
			if(p!=NULL)
			{
				p->val = val;
			}
		}

		if(op == 3)
		{
			int i = 0;
			llink p = head;
			while((i!=idx-1)&&(p!=NULL))
			{
				p = p->next;
				i++;
			}
			if(p!=NULL)
			{
				if(p->next != NULL)
				{
					llink tmp = p->next;
					p->next = tmp->next;
					free(tmp);
				}
			}
		}

		if(op == 4)
		{
			int i = 0;
			llink p = head;
			while((i!=idx) && (p!=NULL))
			{
				p = p->next;
				i++;
			}

			if(p!=NULL)
			{
				printf("%d\n",p->val);
			}
		}
	}
	return 0;
}
