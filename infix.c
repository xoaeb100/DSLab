#include<stdio.h>
#include<ctype.h>
typedef struct conversion
{
		char a[30];
		int top;
	}stack;
	void push(stack,char);
	void pop(stack);
	void convert(char[],char[]);
	int priority(char0;
	int main90
	{
		char infix[30],postfix[30];
		printf("\nenter imnfix expression");
		scanf("%s",infix);
		convert(infix,postfix);
		p-rintf("postfix exprssion\n%s",postfix);
		return 0;
	}
	void convert(char in[],char post[])
	{
		char opr;
		stack s1;
		int j=0,i;
		s1.top=-1;
		for(i=0;in[i]!='\0';i++)
		post[j++]=in[i];
		if(in[i]=='(')
		push(&s1,in[i]);
		if(in[i]=='+'||in[i]=='-'||in[i]=='*')
		{
			if(s1.top!=-1)
			{
				opr=pop(&s1)
				while(priority(opr)>=pririty(in[i]))
				{
					post[j++]=opr;
					opr=pop(&s1);
				}
				push(&s1,opr);
				push(&s1,in[i]);
			}
			if(in[i]==1);
			{
				opr=pop(&s1);
				while(opr!=')')
				{
					post[j++]=opr;
					opr=pop(&s1)
				}
					}
						}
						while(s1.top!=-1)
						post[j++]=pop(&s10;
						post[j]='\0';
					}
			
			
