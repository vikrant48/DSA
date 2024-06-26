// C++ program for the above approach 

#include <bits/stdc++.h> 
using namespace std; 

// Comparator function to sort pairs according to second value 
bool cmp(pair<string, int>& a, 
		pair<string, int>& b) 
{ 
	return a.second < b.second; 
} 
// Function to sort the map according  to value in a (key-value) pairs 
 map<string, int> sort(map<string, int>& M) 
{ 
	// Declare vector of pairs 
	vector<pair<string, int> > A; 

	// Copy key-value pair from Map to vector of pairs 
	for (auto& it : M) { 
		A.push_back(it); 
	} 

	// Sort using comparator function 
	sort(A.begin(), A.end(), cmp); 
    //reverse(A.begin(), A.end(), cmp);

    
    //Print the sorted value 
    cout<<"print the sorted value of pair"<<endl;
    for (auto& it : A) { 
        
        cout << it.first << "   "
            << it.second << endl; 
    } 

    // converting vector of pair to map 
    map<string, int> v;
    copy(A.begin(), A.end(), inserter(v, v.begin()));
    
    cout<<"print the shorted map"<<endl;
    for(auto k:v) {
            cout<<k.first<<  "   "<<k.second<<endl;
        }
    return v;
} 

    void sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        map<string,int > m;
        for(int i=0;i<names.size();i++){
            m[names[i]]= heights[i];
        }
         map<string,int> n = sort(m);
        
        cout<<"print original map"<<endl;
        for(auto k:n) {
            cout<<k.first<<  "   "<<k.second<<endl;
        }
        
        for(auto j:n){
            ans.push_back(j.first);
        }
        // printing the sting

        cout<<"print the string"<<endl;
        for(int i=0;i<ans.size();i++){
            cout<< ans[i]<< endl;
        }
    }

// Driver Code 
int main() 
{ 
    vector<string> name = {"Mary","John","Emma"};
    vector<int> height ={180,165,170};


    // Function Call 
    sortPeople(name , height);
	
	return 0; 
} 
