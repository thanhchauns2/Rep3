// Designed by Nguyen Thanh Chau
// a.k.a Linh's servant - Ken
// En Taro Adun! - TemplarAssasin a.k.a Zeratul

// Libraries

#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/math/constants/constants.hpp>
// #include <boost/cstdint.hpp>

// Defines
	
	// Typedefs
	
	#define ll long long
	#define ull unsigned long long
	#define pb push_back
	#define eb emplace_back
	#define cl(C) C.clear()
	#define cint cpp_int
	#define Begin() int N; cin>>N; while(N--)
	
	//Commands
	
		// Loops
		
		#define FOR(i,a,b) for (int i=a; i<=b; i++)
		#define FORD(i,a,b) for (int i=a; i>=b; i--)
		#define FORA(x,C) for (auto x:C)
		
		// Get values
		
		#define maxOf(C) max_element(C.begin(), C.end()) - C.begin()
		#define minOf(C) min_element(C.begin(), C.end()) - C.begin()
		#define ite(y,x,it) y<x>::iterator it
		
		// Clear containers
		
		#define reset(C) memset(C,0,sizeof(C))
		#define clearQueue(queue, x) queue = queue<x> ()
		#define fillVector(C,a) fill(C.begin(), C.end(), a)
		
		// Customize containers
		
		#define SORT(C) sort(C.begin(), C.end())
		#define SORTD(C,x) sort(C.begin(), C.end(), greater<x>)
		#define tlw(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = tolower(C[i])
		#define tup(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = toupper(C[i])
		#define Merge(C,F,K) merge(C.begin(), C.end(), F.begin(), F.end(), K);
		#define CutInHalf(C,F,x,y) y<x> F(C.begin() + C.size()/2 + 1, C.end()); C.resize(C.size()/2)
		#define revrs(C) reverse(C.begin(, C.end()))
		
		// Scan and print containers
		
		#define get(C,a) for(int i=0; i<a; i++) cin>>C[i]
		#define getVector(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getDeque(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getSet(C, a, token) for(int i=0; i<a-1; i++) { cin>>token; C.insert(token); } cin>>token; C.insert(token)
		#define print(C,a) for(int i=0; i<a; i++) cout<<C[i]<<' '
		#define printVector(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		#define printSet(C,x) for (set<x>::iterator it = C.begin(); it!= C.end(); ++it) cout<<*it<<' '
		#define printDeque(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		
		// Converts between containers
		
		#define toSet(C,x) set<x> (C.begin(), C.end())
		#define toVector(C,x) vector<x> (C.begin(), C.end())
		#define toQueue(C,x) queue<x> (C.begin(), C.end())
		#define toDeque(C,x) deque<x> (C.begin(), C.end())
		#define toList(C,x) list<x> (C.begin(), C.end())
		#define toMultiset(C,x) multiset(C.begin(), C.end())
		
		// Iterators
		
		#define pointer(A,x) A<x>::iterator
		
	// Containers
	
	#define um(C,x,y) unordered_map<x,y> C
	#define m(C,x,y) map<x,y> C
	#define p(C,x,y) pair<x,y> C
	#define us(C,x) unordered_set<x> C
	#define vec2(C,x,y,token) vector<vector<token> > C(x, vector<token> (y))
	#define pq(x) priority_queue<x>
	#define reverse_pq(x) priority_queue<x, vector<x>, greater<x> >
	
	// System
	
	#define faster() ios_base::sync_with_stdin(false); cin.tie(0); cout.tie(0);
	#define pause() system("pause");

// Namespaces

using namespace std;
// using namespace boost::multiprecision;
// using boost::multiprecision::cpp_dec_float_50;

//===================== Your code starts HERE =====================

int main()
{
	Begin()
	{
		int a;
		cin>>a;
		vector<int> C(a);
		getVector(C);
		SORT(C);
		FOR(i,0,a/2-1) cout<<C[a-1-i]<<' '<<C[i]<<' ';
		if (a&1) cout<<C[a/2];
		cout<<endl;
	}
}
