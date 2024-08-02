#include<iostream>
#include<vector>
using namespace std;
class Node{
    public://access modifier
    int data; //the data value
    Node*next;//the pointer to the next

    public:
    Node(int data1,Node*next1)
    {
        data=data1; //initialize data with provide value
        next=next1;//intialize next with the provided pointer
    }

    public:
    Node(int data1)
    {
        data=data1;//initialize data with provided value
        next=nullptr;//last node pointing to nullptr
    }

};
int lengthofLL(Node*head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    return count;
    
}

Node*ConvertArr2LL(vector<int>&arr)
{
    Node *head=new Node(arr[0]);
    Node*mover=head;
    for(int i=0;i<arr.size();i++)
    {
        Node*temp=new Node (arr[i]);
       
       mover->next=temp;
       mover=temp;
    }
    return head;

}
int main()
{
    vector<int>arr={2,3,5,7,1};
    Node*head =ConvertArr2LL(arr);
  Node*temp=head;
  cout<<" ";
  
  cout<<lengthofLL(head);
}
