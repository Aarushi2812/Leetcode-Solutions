//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(int i, stack<int>&s){
    //cout<<s.top()<<endl;
    if(s.size()==0){
        s.push(i);
        return;
    }
    if(i > s.top()){
        s.push(i);
        return;
    }
    int a = s.top();
    s.pop();
    //cout<<"B "<<a<<" "<<i<<endl;
    insert(i, s);
    s.push(a);
}
void sortst(stack<int>& s){
    if(s.size()==1){
        return;
    }
    int a = s.top();
    s.pop();
    //cout<<"A "<<a<<endl;
    sortst(s);
    insert(a, s);
}
void SortedStack :: sort()
{
   //Your code here
   sortst(s);
}
//