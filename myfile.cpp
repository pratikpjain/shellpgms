/*
	author:  Pratik Jain
	created: 2021-06-14 18:49:20
*/

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

/******competetive programming setup******/
#define makeiofast() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define all(v) v.begin() , v.end()
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define maxheap priority_queue<int>
#define minheap priority_queue<int , vector<int> , greater<int>>
#define test() int t; cin>>t; while(t--)
#define lower(str) transform(str.begin() , str.end() , str.begin() , ::tolower)
#define upper(str) transform(str.begin() , str.end() , str.begin() , ::toupper)
#define is_small(c) c >= 'a' && c <= 'z'
#define is_cap(c) c >= 'A' && c <= 'Z'
#define is_digit(c) c >= '0' && c <= '9'
#define is_vowel(c) c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
#define ln cout << '\n'
#define set_bits(n) __builtin_popcount(n)
#define trail_zero(n) __builtin_ctz(n)
#define lead_zero(n) __builtin_clz(n)
#ifndef ONLINE_JUDGE
#define print(x) cerr << #x << ' ' << x << '\n';
#else
#define print(x)
#endif


void input_output() {
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	// freopen("output.txt" , "w" , stdout);
	freopen("error.txt", "w", stderr);
#endif
}

void print_time(high_resolution_clock::time_point start) {

	high_resolution_clock::time_point stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);

#ifndef ONLINE_JUDGE
	cerr << "\n----------------------------\n";
	cerr << "(Program executed in : " << duration.count() << " ms.)";
#endif
}
/******competitive programming setup******/


// this is 'solve' function where main logic is written //
void solve() {
}


int32_t main() {
	makeiofast();
	input_output();
	high_resolution_clock::time_point start = high_resolution_clock::now();
	// test()
	solve();
	print_time(start);
	return 0;
}