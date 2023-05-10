
using namespace std;
template<class R>
struct node{
R val;
node* next;
};

template<class T>
class list{
node<T>* first;
int size;
public:
list(){
    first=NULL;
    size=0;

}

int getsize()
{
    return size;
}
node<T>* top_value()
{
    return first;
}
void insert(T val)
{
    node<T>* temp = new node<T>;
temp->val=val;
temp->next=NULL;

if(first==NULL)
{
    first=temp;
    size++;
}
else{
    node<T>* p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    size++;
}
}
void insert_at_head(T val)
{
      node<T>* temp=new node<T>;
      temp->val=val;
      temp->next=first;
      first=temp;
      size++;
}
void remove() {
    node<T>* p = first;
    if (p == NULL) {
    return;
    }
    node<T>* q = NULL;
    if (p->next != NULL) {
        while (p->next != NULL) {
         q = p;
         p = p->next;
        }
        if (q != NULL) {
        q->next = NULL;
        }
        delete p;
    } else {
        delete p;
        first = NULL;
    }
    size--;
}

void remove_at_head()
{
 node<T>* p=first;
 if(first!=NULL)
 first=first->next;
 if (p!=NULL)
 delete p;
 size--;
}
int search(T val)
{
    int count=-1;
 node<T>* p=first;
  while(p!=NULL)
    {
        count++;
        if(p->val==val)
        return count;
        p=p->next;
        
    }
    return count;
}


T operator[](T val)
{

 node<T>* p=first;
  for(int i=0;i<val;i++)
    {
        if(p!=NULL)
        p=p->next;   
    }
    return p->val;;
}

void display()
{
    node<T>* p=first;
  while(p!=NULL)
    {
      std::cout<<p->val<<" ";
        p=p->next;
        
    }
    cout<<endl;
}
};
