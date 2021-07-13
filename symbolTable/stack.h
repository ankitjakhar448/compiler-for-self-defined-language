struct stack{
    int data;
    struct stack *next;
};
struct name_stack{
    char name[200];
    struct name_stack *next;
};


void push();
int pop();
void top_increment();
void name_push(char name[]);
void name_pop(char name[]);

struct stack *top=NULL;

struct name_stack *name_top=NULL;

void push()
{
    struct stack *temp=(struct stack*)malloc(sizeof(struct stack));
    temp->data=0;
    temp->next=top;
    top=temp;
}

int pop()
{
    int x=top->data;
    top=top->next;
    return x;
}
void top_increment()
{
    if(top==NULL)
    {
        struct stack *temp=(struct stack*)malloc(sizeof(struct stack));
        temp->data=0;
        temp->next=top;
        top=temp;
    }
    top->data=top->data+1;
}

void name_push(char name[])
{
    struct name_stack *temp=(struct name_stack*)malloc(sizeof(struct name_stack));
    strcpy(temp->name,name);
    temp->next=name_top;
    name_top=temp;

}

void name_pop(char name[])
{
    strcpy(name,name_top->name);
    name_top=name_top->next;
    
}