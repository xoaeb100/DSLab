
Conversation opened. 3 messages. 1 message unread.

Skip to content
Using Gmail with screen readers
This version of Chrome is no longer supported. Please upgrade to asupported browser. Dismiss
Search



Gmail
COMPOSE
Labels
Inbox (900)
Starred
Sent Mail
Drafts
More 
Hangouts

 
 
  More 
1 of 1,175  
 
Expand all Print all In new window
Doubly LL 
Inbox
x 

Xoaeb 100 <shoaib100aib@gmail.com>
2:43 PM (1 hour ago)

to yunuspthn 
#include<stdio.h>
#include<stdlib.h>

typedef struct dlinked_list{
	int data;
	struct dlinked_list *next;
	struct dlinked_list *prev;
}node;

void print(node *q)  
{

	node *ptr;
	ptr=q;
	printf("\n");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}

void insbeg(node **q,int no)
{
	node *temp,*ptr;
	temp=*q;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	ptr->prev=NULL;
	if(temp==NULL)
		ptr->next=NULL;
	else
	{
		ptr->next=temp;
		temp->prev=ptr;
	}
	*q=ptr;
	printf("\nELEMENTS OF LINKLIST AFTER INSERTION\n");
	print(*q);
}

void insend(node **q,int no)
{
	node *ptr,*temp;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	ptr->next=NULL;
	temp=*q;
	if(temp==NULL){
		*q=ptr;
		ptr->prev=NULL;
	}
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=ptr;
		ptr->prev=temp;
	}
	printf("\nELEMENTS OF LINKLIST AFTER INSERTION\n");
	print(*q);
}
void insafter(node *q,int no)
{
	int loc,k;
	node *temp,*ptr;
	temp=q;
	ptr=(node*)malloc(sizeof(node*));
	ptr->data=no;
	printf("ENTER LOCATION WHERE THE NO.IS TO BE INSERTED: ");
	scanf("%d",&loc);
	if(loc==1)
	{
	printf("\nPlease use the Insert at the begin option" );
	return;
    }
	for(k=1;k<loc;k++)
	{
		if(temp==NULL)
			printf("\nELEMENTS ARE LESS THAN PROVIDED LOCATION\n");
		else
		{
			temp=temp->next;
		}
	}
	if(temp->next==NULL)
	{
	  printf("\nPlease use the Insert at the begin option" );
	return;
   }
	temp->prev->next=ptr;
	temp->prev=ptr;
	ptr->prev=temp->prev;
	ptr->next=temp;
	printf("\nELEMENTS OF LINKLIST AFTER INSERTION\n");
	print(q);
}
void del(node **q,int no)
{
	int f=0;
	node *temp;
	temp=*q;
	
	while(temp!=NULL)
	{
		if(temp->data==no)
		{
			f=1;
			if(temp==*q){
				*q=temp->next;
				if(temp->next!=NULL)
				    temp->next->prev=NULL;
			}
			else{	
				temp->prev->next=temp->next;
				if(temp->next!=NULL)
				     temp->next->prev=temp->prev;
			}
			free(temp);
			break;
		}
		else
		{
			temp=temp->next;
		}
	}
	
	if(f==0)
		printf("\nTHE GIVEN NUMBER IS NOT FOUND\n");
	
	printf("\nELEMENTS OF dLINKLIST AFTER DELETION\n");
	print(*q);
}
void traverse(node *q)
{
	printf("\nTRAVERSING LINKLIST\n\n");
	print(q);
	printf("\n\nEND OF LINKLIST\n");
}
int main()
{
	node *start,*ptr,*temp;
	int i,n,j,no,c;
	printf("ENTER NUMBER OF NODES: ");
	scanf("%d",&n);
	printf("\nENTER NODE NUMBER 1: ");
	start=(node*)malloc(sizeof(node));
	scanf("%d",&start->data);
	temp=start;
	for(i=1;i<n;i++)
	{
		ptr=(node*)malloc(sizeof(node));
		printf("\nENTER NODE NUMBER %d: ",i+1);
		scanf("%d",&ptr->data);
		temp->next=ptr;
		temp=ptr;
	}
	temp->next=NULL;
	do{
		printf("\nENTER YOUR CHOICE\n");
		printf("\n1-INSERTION\n2-DELETION\n3-TRAVERSE\n4-Exit\n\n");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
				printf("\nENTER THE NUMBER TO BE INSERTED: ");
				scanf("%d",&no);
				printf("\nENTER 1 TO INSERT AT THE BEGINING\n");
				printf("ENTER 2 TO INSERT AT THE END\n");
				printf("ENTER 3 TO INSERT AT A SPECIFIED LOCATION\n");
				scanf("%d",&c);
				switch(c)
				{
					case 1:
						insbeg(&start,no);
						break;
					case 2:
						insend(&start,no);
						break;
					case 3:
						insafter(start,no);
						break;
					default:
						printf("\nInvalid Choice.");
						break;
				}
				break;
			case 2:
				printf("\nENTER THE NUMBER TO BE DELETED: ");
				scanf("%d",&no);
				del(&start,no);
				break;
			case 3:
				traverse(start);
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvalid Input.");
				break;		
			}
		}while(1);	
	return 0;
}

Xoaeb 100		2:48 PM (1 hour ago)
---------- Forwarded message ---------- From: Xoaeb 100 <shoaib100aib@gmail.c...

Faizan Shaikh
Attachments3:51 PM (0 minutes ago)

to me 

Attachments area
	
Click here to Reply or Forward
1.21 GB (8%) of 15 GB used
Manage
Terms - Privacy
Last account activity: 1 hour ago
Details

+#include<stdio.h>
+#include<ctype.h>
+#define MAX 100
+
+typedef struct stack
+{
+	int a[MAX];
+	int top;
+}stack;
+
+void push(struct stack *ps,char n)
+{
+	if(ps->top!=MAX-1)
+	{
+		ps->top++;
+		ps->a[ps->top]=n;
+	}
+	else
+		printf("\nSTACK IS FULL");
+}
+
+int pop(struct stack *ps)
+{
+	return(ps->a[ps->top--]);
+}
+
+int operation(int n1,int n2,char opr)
+{
+	int ans;
+	switch(opr)
+	{
+		case '+':
+			ans=n1+n2;
+			break;
+		case '*':
+			ans=n1*n2;
+			break;
+		case '-':
+			ans=n1-n2;
+			break;
+		case '/':
+			ans=n1/n2;
+		break;
+	}
+	return(ans);
+}
+
+int evaluate(char post[])
+{
+	stack s1;
+	int i,num1,num2,eval;
+	s1.top=-1;
+	for(i=0;post[i]!='\0';i++)
+	{
+		if(isdigit(post[i])){
+			push(&s1,post[i]-'0');
+			printf("\n%c-%c",post[i]-'0',post[i]);
+		}
+		else
+		{
+			num2=pop(&s1);
+			num1=pop(&s1);
+			eval=operation(num1,num2,post[i]);
+			push(&s1,eval);
+		}
+	}
+	return pop(&s1);
+}
+
+int main()
+{
+	char postfix[30];
+	int result;
+	printf("ENTER THE POSTFIX EXPRESSION\n");
+	scanf("%s",postfix);
+	result=evaluate(postfix);
+	printf("\nANS= %d",result);
+	return 0;
+}
eval.c
Open with
Displaying eval.c.
