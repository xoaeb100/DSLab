#include<stdio.h>
#include<ctype.h> 

typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(stack*,char);

char pop(stack*);

int evaluation(char post[]);
int operation(int n1,int n2,char opr);

	
	



int main()
{
	char postfix[30];
	printf("\nENTER POSTFIX EXPRESSION\n");
	scanf("%s",postfix);
	printf("\n\nPOSTFIX EVALUATION\n%d",evaluation(postfix));
	
	return 0;
}
int operation(int n1,int n2,char opr)
{
	switch(opr)
	{
	case '+':
	return n1+n2;
	case '-':
	return n1-n2;
	case '*':
	return n1*n2;
	case '/':
	return n1/n2;	
	}
}
int evaluation(char post[])
{	
	int n1,n2,result;
	stack s;
	int i=0;
	s.top=-1;
	for(i=0;post[i]!='\0';i++)
	{
		if(isdigit(post[i]))
			push(&s,post[i]);
		else
		{
			n1=pop(&s);
			n2=pop(&s);
		    result=operation(n1,n2,post[i]);
			push(&s,result);
	   }
   }
		return pop(&s);

}

void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}
