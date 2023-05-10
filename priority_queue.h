using namespace std;
template<class R>
struct pnode
{
R val;
pnode* next;
};

template<class T>
class pqueue{
pnode<T>* first;
int size;
public:
pqueue()
{
    first=0;
    size=0;
}
void enqueue(T val) {
        pnode<T>* temp= new pnode<T>;
       temp->val = val;
       temp->next = NULL;

        pnode <T>* curr = this->first;
        pnode <T>* prev = NULL;

        while (curr != NULL && curr->val < val) {
            prev = curr;
            curr = curr->next;
        }

       
        if (prev == NULL) {
            temp->next = this->first;
            this->first = temp;
        }
        else {
           
            prev->next = temp;
           temp->next = curr;
        }

        size++;
    }
    
void deque()
{
 pnode<T>* p=first;
 if(p!=NULL){
 first=first->next;
size--;
 }
 if(p!=NULL)
 delete p;

 }

bool search(T val)
{
 pnode
<T>* p=first;
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
     pnode<T>* p=first;
for(int i=0;i<index;i++)
{
    if(p!=NULL)
    p=p->next;
}
return p->val;

}
void display()
{
     pnode <T>* p=first;
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