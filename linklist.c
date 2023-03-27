#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *link;//thois is a comment
}node;

void display(node *tem);
node *create();
node *find(node *h,int k);

node *insert(node *h);
node *b4h(node *h,int k);
void af_t(node *h,int k);
void b4_given(node *h,int k);
void af_given(node *h,int k); 

node *del(node *h);
node *del_h(node *h);
void del_t(node *h);
void del_af_ref(node *h,int ref);
void del_b4_ref(node *h,int ref);

void main()
{
	node *header;
	header=create();
	int menu=1;
	while(menu!=5){
	printf("\nMain_menu : \n1.Display\n2.Insert\n3.Delete\n4.Search\n5.quit\n");
	scanf("%d",&menu);
	switch(menu){
		case 1 : display(header);
			             break;
		case 2 : if (header!=NULL)
		               {        header=insert(header);}
		               else
		               {        printf("\nempty list!!!");}
		                break;
		case 3 : if (header!=NULL)
		               {        header=del(header);}
		               else
		               {        printf("\nempty list!!!");}
		                break;
		case 4 : if (header!=NULL)
		               {        int k;printf("\nenter element to find : ");scanf("%d",&k);
		                         node *A=find(header,k);
		                         if(A==NULL)
		                         {			printf("\nelement NOT FOUND!!!");}
		                         else
		                         {			printf("found at address\t%ld",(int)A);}
		               }
		               else
		               {        printf("\nempty list!!!");}
		                 break;
		case 5 :  break;  
		default : printf("\nplease selct any given option only\n"); 
	        }
	}
}

node *create()
{
	int var;
	node *h=(node *)malloc(sizeof(node));
	printf("\nenter header : ");scanf("%d",&h->data);
	h->link=NULL;
	node *t=(node *)malloc(sizeof(node));
	t=h;
	printf("\nenter 1 to continue any other to quit : ");scanf("%d",&var);
	while(var==1)
	{	
		node *n=(node *)malloc(sizeof(node));
		printf("\nenter element : ");scanf("%d",&n->data);
		n->link=NULL;
		t->link=n;
		t=t->link;
		printf("\nenter 1 to continue, any other to quit :");scanf("%d",&var);
	}
	return h;
}

node *find(node *h,int k)
{
             node temp=h;
             for(temp;temp!=NULL;temp=temp->link)
             {
             	if(temp->data==k)
             	{}
             	else if(temp->link==NULL&&temp->data!=k)
             	{return NULL;}
             }
}

void display(node *tem)
{	
	node *temp=tem;
	for(temp;temp!=NULL;temp=temp->link)
	{	printf("  %d      %ld\n",temp->data,(long int)temp->link);}
}

node *insert(node *h)
{
        int m=1;
        do{
                int menu,key;
                printf("\n1.before header\n2.after tail\n3.before an element\n4.after an element\n");scanf("%d",&menu);
                printf("\nenter element to insert : ");scanf("%d",&key);
                switch(menu){
                        case 1 : h=b4h(h,key);                   
                                        break;
                        case 2 : af_t(h,key);
                                        break;
                        case 3 : b4_given(h,key);
                                        break;
                        case 4 : af_given(h,key);
                                        break;
                }
                printf("\nPress \'1\' to re-insert, \'0\' to go back to main menu  ");
                scanf("%d",&m);
        }while(m==1);
        return h;
}
node *b4h(node *h,int k)
{

}
void af_t(node *h,int k)
{

}
void b4_given(node *h,int k)
{

}
void af_given(node *h,int k)
{

}

node *del(node *h)
{
        int m=1;
        do{
                int menu,key;
                printf("\nDELETION : \n1.header\n2.tail\n3.before an element\n4.after an element\n");scanf("%d",&menu);
                if((menu==3)||(menu==4))
                {       printf("\nenter element to delete : ");scanf("%d",&key);}
                switch(menu){
                        case 1 : h=del_h(h);                   
                                        break;
                        case 2 : del_t(h);
                                        break;
                        case 3 : del_af_ref(h,key);
                                        break;
                        case 4 : del_b4_ref(h,key);
                                        break;
                }
                printf("\nPress \'1\' to re-delete, \'0\' to go back to main menu  ");
                scanf("%d",&m);
        }while(m==1);
        return h;
}
node *del_h(node *h)
{

}
void del_t(node *h)
{

}
void del_af_ref(node *h,int ref)
{

}
void del_b4_ref(node *h,int ref)
{

}

