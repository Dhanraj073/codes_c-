#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

double PI = 2.0 * acos(0.0);
double w, h;

int main()
{

	while (	cin>>w>>h)
	{
		if(w==0 || h==0)
		return 0;
		else
		{
		
		if (w > h) swap(w, h);

		double best = 0,best1=0;

		double r = w/(2*PI);
		best = PI * r*r *(h - 2*r);
		double r_max = min(w/2.0, h / (2*PI + 2));
		best1= PI * r_max * r_max * w;
		if(w==h)
		printf("%.3f\n", best);
		else
		printf("%.3f\n", best1);
	}
}
	return 0;
}
