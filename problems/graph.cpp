#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph{
public:
  unordered_map<int,list<int>> adj;

  void addEdge(int a,int b, bool direction) {
    adj[a].push_back(b);
    if(direction == true) {
      adj[b].push_back(a);
    }
  }

  void printAdjList() {
    // printing the adjancy list
    for(auto i:adj) {
      cout<<i.first<<"->";
      for(auto j:i.second) {
        cout << j << ",";
      }
      cout<<endl;
    }
  }

};


int main() {
  int a;
  cout<<"Enter the number of nodes:";
  cin>>a;
  int b;
  cout<<"Enter the number of edges:";
  cin>>b;

  graph g;
  
  for(int i=0;i<b;i++) {
    int a,b;
    cin>>a>>b;
    g.addEdge(a,b,0);
  }

  g.printAdjList();

return 0;
}