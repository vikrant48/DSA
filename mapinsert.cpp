// C++ program to illustrate 
// map::insert({key, element}) 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// initialize container 
	//map<int, int> mp;
    vector<pair<int ,int >> vp; 

	// insert elements in random order 
	// mp.insert({ 2, 30 }); 
	// mp.insert({ 1, 40 }); 
	// mp.insert({ 3, 60 }); 

	// // does not inserts key 2 with element 20 
	// mp.insert({ 2, 20 }); 
	// mp.insert({ 5, 50 }); 
    vector<int > s={2,1,3,2,5};
    int k=1;
    for(int i=0;i<5;i++){
        
        vp.push_back(make_pair(s[i], k++));
        for (auto itr = vp.begin(); itr != vp.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n';
            
	} 
      cout<<"next"<<endl;
    }

	// prints the elements 
	cout << "KEY\tELEMENT\n"; 
	for (auto itr = vp.begin(); itr != vp.end(); ++itr) { 
		cout << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	return 0; 
} 
