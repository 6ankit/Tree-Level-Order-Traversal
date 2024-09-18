#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node*right;
  Node(int val)
  {
    this->data=val;
    this->left=NULL;
    this->right=NULL;
  }
};
int main()
{
   Node*a=new Node(10);
   Node*b=new Node(20);
   Node*c=new Node(30);
   Node*d=new Node(40);
   Node*e=new Node(50);
   Node*f=new Node(80);
   Node*g=new Node(90);
   Node*h=new Node(60);
   Node*i=new Node(70);
   Node*j=new Node(110);
   Node*k=new Node(120);
   a->right=c;
   a->left=b;
   b->left=d;
   b->right=e;
   d->left=f;
   d->right=g;
   c->left=h;
   c->right=i;
   i->left=j;
   i->right=k;
   Node*root=a;
   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   while(q.size()>0)
   {
    cout<<q.front()->data<<" ";
    if(q.front()->left) q.push(q.front()->left);
    if(q.front()->right) q.push(q.front()->right);
    q.pop();
    if(q.front()==NULL)
    {
      cout<<endl;
      q.pop();
      if(q.size()==0) break;
      q.push(NULL);
    }
   }
}
