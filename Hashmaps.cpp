#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    //creation
    map<string,int> m;
    //insertion
    //1st method
    pair<string,int> p = make_pair("Harshita",3);
    m.insert(p);
    //2nd method
    pair<string,int> pair2("sharma",2);
    m.insert(pair2);
    //3rd method
    m["btech"]=1;
    //what will happen
    m["btech"]=2;
    //search
    cout<<m["btech"]<<endl;
    //cout<<m.at["sharma"]<<endl;

    //cout<<m.ate["unknown"]<<endl;
    cout<<m["unknown"]<<endl;
    //size
    cout<<m.size()<<endl;
    //to check presence
    cout<<m.count("bb")<<endl;
    //erase
    m.erase("love");
    cout<<m.size()<<endl;
   /* for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;    
    }
    */
   //iterator
   map<string,int> :: iterator it=m.begin();
   while(it != m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
   }
}