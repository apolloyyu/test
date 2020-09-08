#pragma once
#include <vector>
#include <string>
#include<iostream>
using namespace std;

namespace ywl {
	class Solution
	{
	public:
		Solution();
		~Solution();
		void setLength(double len);
		void getLength();
		void init(string text);
		vector<vector<string>> getSubject();
		vector<string> findItinerary(vector<vector<string>>& tickets);

	private:
		vector<vector<string>> subject;
		double a = 0;
	};
}
