using namespace std;
template<class R>
struct qnode
{
R val;
qnode* next;
};

template<class T>
class queue{
qnode<T>* first;
int size;
public:
queue()
{
    first=0;
    size=0;
}
void enque(T val)
{
qnode<T>* temp=new qnode<T>;
temp->val=val;
temp->next=NULL;
if(first==NULL)
{
    first=temp;
    size++;
}
else
{
    qnode<T>* p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
size++;
}
}

void deque()
{
 qnode<T>* p=first;
 if(p!=NULL){
 first=first->next;
size--;
 }
 if(p!=NULL)
 delete p;

 }

bool search(T val)
{
 qnode<T>* p=first;
 while(p->next!=NULL)
 {
    if(p->val==val)
    return 1;
    p=p->next;
 }
 return 0;
}

T operator[](int index)
{
     qnode<T>* p=first;
for(int i=0;i<index;i++)
{
    if(p!=NULL)
    p=p->next;
}
return p->val;

}
void display()
{
     qnode<T>* p=first;
     while(p!=NULL)
     {
        cout<<p->val<<" ";
        p=p->next;
     }
     cout<<endl;
}
int getsize()
{
    return size;
}
T gettop()
{
    return first->val;
}
};