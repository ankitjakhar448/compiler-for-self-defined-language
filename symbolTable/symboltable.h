#include "stack.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int lineno;
    int endscop;
    char name[32];
    char type[32];
    char value[200];
    struct node *next;
};




struct table
{
    struct node *list;
};
int size = 200;
int stringcmp(char a[], char b[]);
int hash(char *str, int size);
void table_in(struct table arr[], int size);
int insert(struct node *head, int lineno, char name[], char type[]);
int insertvalue(struct node *head, char name[], char val[]);
int table_insert_var(struct table table[], int size, int lineno, char name[], char type[]);
int table_insert_value(struct table table[], int size, char name[], char val[]);
int read_table(struct table table[], int size, char name[], char val[]);
void int_to_string(int num, char str[]);
void float_to_string(float num, char str[]);
int string_to_int(char str[]);
float string_to_float(char str[]);
char *str_to_var(char *str);
int read_var_type(struct table table[], int size, char name[], char type[]);
int update_endscop(struct node *head, char name[],int endscop);
int table_update_endscop(struct table table[], int size, char name[],int endscop);
int end_scop(int lineno);
char* int_to_str(int num);


struct table table[200];

int stringcmp(char a[], char b[])
{
    if (strlen(a) == strlen(b))
    {
        int i;
        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] != b[i])
            {
                return -1;
            }
        }
        return 1;
    }
    return -1;
}
void stringcpy(char *a,char *b)
{
    int i;
    char c[200];
    for(i=0;i<strlen(b);i++)
    {
        c[i]=b[i];
    }
    a=c;
}
int hash(char *str, int size)
{
    int hash = 0;
    int c;

    while (c = *str++)
    {
        hash += c;
        hash = hash % size;
    }

    return (hash % size);
}
void table_in(struct table arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        arr[i].list = NULL;
    }
}

int insert(struct node *head, int lineno, char name[], char type[])
{
    struct node *current = head;
    struct node *prev = NULL;
    while (current != NULL)
    {
        if (current->endscop==-1&&stringcmp(current->name, name) == 1)
        {
            return -1;
        }
        prev = current;
        current = current->next;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->lineno = lineno;
    new_node->endscop=-1;
    new_node->next = NULL;
    strcpy(new_node->name, name);
    strcpy(new_node->type, type);
    strcpy(new_node->value,"");
    prev->next = new_node;
    return 1;
}
int insertvalue(struct node *head, char name[], char val[])
{
    struct node *current = head;
    struct node *head1;
    while (current != NULL)
    {
        head1 = current;
        if (stringcmp(current->name, name) == 1&&head1->endscop==-1)
        {
            strcpy(head1->value, val);
            return 1;
        }
        current = current->next;
    }
    return -1;
}

int table_insert_var(struct table table[], int size, int lineno, char name[], char type[])
{
    int index;
    index = hash(name, size);
    if (table[index].list == NULL)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->lineno = lineno;
        new_node->endscop=-1;
        new_node->next = NULL;
        strcpy(new_node->name, name);
        strcpy(new_node->type, type);
        strcpy(new_node->value,"");
        table[index].list = new_node;
        return 1;
    }
    return insert(table[index].list, lineno, name, type);
}

int table_insert_value(struct table table[], int size, char name[], char val[])
{

    int index = hash(name, size);
    return insertvalue(table[index].list, name, val);
}

int read_table(struct table table[], int size, char name[], char val[])
{
    //str_to_var(name,name);
    int index = hash(name, size);
    struct node *current = table[index].list;
    struct node *head;
    while (current != NULL)
    {
        head = current;
        if (stringcmp(current->name, name) == 1&&head->endscop==-1)
        {
            //strcpy(val,current->value);
            strcpy(val, head->value);
            return 1;
        }
        current = current->next;
    }

    return -1;
}

int read_var_type(struct table table[], int size, char name[], char type[])
{
    //str_to_var(name,name);
    int index = hash(name, size);
    struct node *current = table[index].list;
    struct node *head;
    while (current != NULL)
    {
        head = current;
        if (stringcmp(current->name, name) == 1)
        {
            //strcpy(val,current->value);
            strcpy(type, head->type);
            return 1;
        }
        current = current->next;
    }

    return -1;
}

void int_to_string(int num, char str[])
{
    // char *str;
    sprintf(str, "%d", num);
    // return str;
}


char* int_to_str(int num)
{
    char *str;
    sprintf(str, "%d", num);
    return str;
}


void float_to_string(float num, char str[])
{
    sprintf(str, "%f", num);
}
int string_to_int(char str[])
{
    int x = atoi(str);
    return x;
}

float string_to_float(char str[])
{
    float f = strtof(str, NULL);
    return f;
}

char *str_to_var(char *str)
{
    char *st;
    printf("str_to_var=%s\n", str);
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '=')
        {
            break;
        }

        st[i] = str[i];
        printf("str_to=%s\n", st);
    }
    st[i] = '\0';
    printf("str_to=%s\n", st);
    return st;
}







int update_endscop(struct node *head, char name[],int endscop)
{
    struct node *current = head;
    struct node *head1;
    //printf("insert table value=%s  %s\n",name,val);

    while (current != NULL)
    {

        head1 = current;
        if (stringcmp(current->name, name) == 1)
        {
            head1->endscop=endscop;
            //printf("%s   %d\n",head1->name,head1->value);
            return 1;
        }
        /* if (stringcmp(current->name,name)==1) 
        {
            current->value=val;
            //
            return 1;
        }*/
        // printf("%d%s%s %d\n",current->lineno,current->name,current->type,current->value);
        current = current->next;
    }

    return -1;
}

int table_update_endscop(struct table table[], int size, char name[],int endscop)
{

    int index = hash(name, size);
    //printf("insert value=%s  %d\n",name,val);
    return update_endscop(table[index].list, name,endscop);
    // return 0;
}

int end_scop(int lineno)
{
    int x=pop();
    int i;
    char name[200];
    for(i=0;i<x;i++)
    {
        name_pop(name);
        if(table_update_endscop(table,size,name,lineno)==-1)
        {
            return -1;
        }
    }
    return 1;
}

void print_symbol_table()
{
    int index=0;
    printf("tableIndex\tlineno\tendscop\tname\ttype\t\tvalue\n");
    for(index=0;index<size;index++)
    {
        struct node *current = table[index].list;
        while (current!=NULL)
        {
            printf("%d\t\t%d\t%d\t%s\t%s\t\t%s\n",index,current->lineno,current->endscop,current->name,current->type,current->value);
            current=current->next;
        }
        
    }
}