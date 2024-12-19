using namespace std;
template<class S>
struct snode{
S val;
snode* next;

};

template<class T>
class stack{
snode<T>* top;
int size;
public:
stack()
{
    top=0;
    size=0;
}
int getsize()
{
    return size;
}
void push(T val)
{
snode<T>* temp=new snode<T>;
temp->val=val;
temp->next=NULL;
if(top==NULL)
{
    top=temp;
    size++;
}
else
{
    temp->next=top;
    top=temp;
    size++;
}
}
T pop()
{
    snode<T>* p=top;
    if(top!=NULL)
    top=top->next;
    T val= p->val;

    if(p!=NULL)
    delete p;
    size--;
    return val;
}
void display()
{
    snode<T>* p=top;
    while(p!=NULL)
    {
        cout<<p->val<<" ";
        p=p->next;
    }
    cout<<endl;
}
T operator[](int index)
{
    snode<T>* p=top;
    for(int i=0;i<index;i++)
    {
        if(p!=NULL)
        p=p->next;
    }
    return p->val;

}

};
