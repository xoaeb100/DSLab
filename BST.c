//program to implement Binary Search Tree#include<stdio.h>
#include<stdlib.h>

typedef struct bst{
	int data;
	struct bst*left,*right;
}node;

void insert(node **r,int num){
	node *temp,*ptr;
	temp=*r;
	
	
	if(temp==NULL)
	*r=ptr;
	else{
		if(num > temp->data)
		{
			if(temp->right==NULL){
			ptr=(node*)malloc(sizeof(node));
	         ptr->data=num;
	         ptr->left=NULL;
	         ptr->right=NULL;
	         temp->left=ptr;
			  temp=temp->right;
		     insert(&temp,num);
		 }
		  else{
                if(temp->left!=NULL){			  
		        temp=temp->left;
			    insert(&temp,num);
		  }
		}
			 ptr=(node*)malloc(sizeof(node));
		else{
		    ptr=(node*)malloc(sizeof(node));
	         ptr->data=num;
	         ptr->left=NULL;
	         ptr->right=NULL;
	         temp->left=ptr;
	         return
	}
}
 search_node(&x,temp,&parent,num,&f)
 if(f==0){
	 printf("\n the element of %d not found",num);
	 return;
 }
 if(x->left==NULL && x->right==NULL)
 {
	 if(x->data > parent->data)
	 parent->right=x->right;
	 else
	 parent->left=x->right;
	 free(x);
	 }
	 
	 else if(x->left=!NULL && X->)
	 
void search_node(node **x, node *root,node **parent,
int num, int *f){
	node *temp;
	temp=root;
	if(temp==NULL)
	return;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			*f=1;
			*x=temp;
			return;
			}
			*parent=temp;
			if(num > temp -> data)
			temp=temp->right;
			else
			temp=temp->left;
}}
