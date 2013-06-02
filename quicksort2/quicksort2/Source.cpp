#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#define DEBUG

using namespace std;
/* Head ends here */


void output(vector <int> ar ,int l, int r){
    for (int i = l; i <= r; i++) {
        cout << ar[i];
        if (i + 1 <= r)
            cout << " ";
        else
            cout << endl;
    }
}

void quickSortAux(vector <int>  & ar, int l, int r ) {
	
	if( l >= r )
		return;

	int p = ar[l];
	vector <int> ar1 , ar2, v;
	for(int j = l + 1 ; j <= r; j++)
    {
		if( ar[j] < p )
			ar1.push_back( ar[j] );
		else if ( ar[j] > p)
			ar2.push_back( ar[j] );
	}

	int m = l + ar1.size();
	ar1.push_back(p);
    ar1.insert(ar1.end(), ar2.begin(), ar2.end());
	
	for (int i = l; i <= r; i++)
		ar[i] = ar1[i - l];
	
	quickSortAux(ar, l, m-1);
	quickSortAux(ar, m + 1, r);
	
	output(ar, l ,r);
}

void quickSort(vector <int>  & ar, int ar_size) {
	quickSortAux(ar, 0, ar_size-1);
}

/* Tail starts here */
int main(void) {
   vector <int>  _ar;
#undef DEBUG
	#ifdef DEBUG
		freopen("test.txt","r",stdin);
		freopen("testans.txt","w",stdout);
	#endif
   int _ar_size;
	cin >> _ar_size;
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
	   int _ar_tmp;
	   cin >> _ar_tmp;
	   _ar.push_back(_ar_tmp); 
	}

	quickSort(_ar, _ar_size);
   
   return 0;
}