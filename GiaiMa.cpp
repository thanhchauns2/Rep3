// By Nguyen Thanh Chau
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
	#define pq priority_queue
	#define reverse_pq priority_queue<int, vector<int>, greater<int> >
	#define Begin() int N; cin>>N; while(N--)
	
	//Commands
	
		// Loops
		
		#define FOR(i,a,b) for (int i=a; i<=b; i++)
		#define FORD(i,a,b) for (int i=a; i>=b; i--)
		#define FORA(x,C) for (auto x:C)
		
		// Clear containers
		
		#define reset(C) memset(C,0,sizeof(C))
		#define clearQueue(queue, x) queue = queue<x> ()
		#define fillVector(C,a) fill(C.begin(), C.end(), a)
		
		// Customize containers
		
		#define tlw(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = tolower(C[i])
		#define tup(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = toupper(C[i])
		#define Merge(C,F,K) merge(C.begin(), C.end(), F.begin(), F.end(), K);
		#define revrs(C) reverse(C.begin(, C.end()))
		
		// Scan and print containers
		
		#define get(C,a) for(int i=0; i<a; i++) cin>>C[i]
		#define getVector(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getDeque(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getSet(C, a, token) for(int i=0; i<a; i++) { cin>>token; C.insert(token) }
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
		string a;
		cin>>a;
		int k = a.length();
		if (a[0] == '0')
		{
			cout<<0<<endl;
			continue;
		}
		if (k == 1)
		{
			cout<<1<<endl;
			continue;
		}
		ll C[k+1];
		reset(C);
		C[0] = 1;
		C[1] = 1;
		FOR(i,2,k)
		{
			if (a[i-1] == '0')
			{
				if (a[i-2] == '0' || a[i-2] > '2') 
				{
					C[k] = 0;
					break;
				}
				else C[i] = C[i-2];
			}
			else if (a[i-2] == '1' || a[i-2] == '2' && a[i-1] <= '6' ) 
			{
				C[i] = C[i-1] + C[i-2];
			}
			else C[i] = C[i-1];
		}
		cout<<C[k]<<endl;
	}
}
