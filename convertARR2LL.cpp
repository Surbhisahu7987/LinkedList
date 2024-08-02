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
  while(temp!=NULL)
  {
cout<<temp->data;
cout<<" ";
temp=temp->next;
  }
}
