#include <stdio.h>
#include <stdlib.h>

// DataStruct define
typedef struct link_node
{
    int data;
    struct link_node *next;
}Node;
// Method define
static Node * current_node;
static int item;
static int length;
int link_init( Node *link_table,int data){
    length = 1;
    if(link_table == NULL){
        link_table  = malloc(sizeof(Node));
    }
    link_table -> data = data;
    link_table -> next = NULL;
    return 0;
}

int link_node_add(Node *link_table ,int data){
    current_node= link_table;
    for (int item = length; item > 0; item--)
    {   
        if(current_node -> next == NULL){
            current_node ->next = malloc(sizeof(Node));
            current_node = current_node->next;
            current_node -> data = data;
            current_node -> next =NULL;
            length++;
            return 0;
        }
        current_node = current_node->next;
    }
    return -1;
}
int link_node_delete(Node *link_table,int data)
{
    current_node = link_table;
    Node * father_node = malloc(sizeof(Node));
    
    for(int item = length;item > 0;item--){
        if(current_node -> data != data){
           father_node = current_node;
        }
        else
        {
            father_node -> next = current_node ->next;
            free(current_node);
            length--;
        }
        
        current_node = current_node -> next;
    }
    return 0;
}
int link_node_change(Node *link_table, int data,int change)
{
    current_node = link_table;
    // Node *father_node = malloc(sizeof(Node));

    for (int item = length; item > 0; item--)
    {
        if (current_node->data == data)
        {
            current_node -> data = change;
            return 0;
        }

        current_node = current_node->next;
    }
    return -1;
}
int link_show(Node *link_table){
    current_node = link_table;
    for(int item = length;item > 0;item--){
        printf("\nNode %d 's Value is %d",length - item,current_node -> data);
        current_node = current_node -> next;
    }
    return 0;
}

int link_destory(Node *link_table)
{   
    printf("\nSize :%d",sizeof(link_table -> data));
    free(link_table);
    return 0;
}

int main(void)
{
    Node *fire;
    int init = 0;
    link_init(fire,init);
    for(int item = 1; item < 5;item++){
        link_node_add(fire,item);
    }
    link_node_delete(fire,3);
    link_show(fire);
    link_node_change(fire,4,666);
    link_destory(fire);
    return 0;
}