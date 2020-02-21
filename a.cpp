#include<bits/stdc++.h>
#define letsgo ios_base::sync_with_stdio(false)
#define yo cin.tie(NULL)
using namespace std;

// here we have designed a greedy approach where we choose
// weather an item at a position can be present inside the
// knapsack or not based in the capacity of the knapsack at
// that particular position.

// the problem here with this knapsack is that it requires
// the elements/ objects to be present in the increasing
// order of their profits

int knapsack(int pos,int capacity,int weights[],int profit[],int n)
{
    if( pos == n ||  weights[pos] > capacity  )
    {
        return 0;
    }

    else if( weights[pos] <= capacity )
    {
        return 1;
    }
}

int main()
{
    //letsgo;
    //yo;

    int capacity;
    int n;
    cout<<"Please enter the capacity of the knapsack:\n ";
    cin>>capacity;

    cout<<"Please enter the no of objects :\n";
    cin>>n;

    int weights[n],profit[n];
    cout<<"please enter the weights of the object :\n";
    for(int i=0;i<n;i++)
        cin>>weights[i];
    cout<<"Please enter the profits of the items :\n";
    for(int i=0;i<n;i++)
        cin>>profit[i];

    int totalprofit = 0;
    for(int i=0;i<n;i++){
       int temp = knapsack(i,capacity,weights,profit,n);
       if( temp == 1){
            totalprofit += profit[i];
            capacity -= weights[i];
       }
    }

    cout<<"\n the total profit that we have made here :\n";
    cout<<totalprofit<<endl;

}
