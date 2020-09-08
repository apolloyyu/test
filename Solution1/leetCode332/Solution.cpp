#include "Solution.h"
#include <unordered_set>
using namespace ywl;

Solution::Solution(void)
{
    cout << "Solution is being created" << endl;
}

Solution::~Solution()
{
    cout << "Solution is being deleted" << endl;
}

void Solution::setLength(double len)
{
    a = len;
}

void Solution::getLength()
{
    cout << a << endl;
}

void Solution::init(string text)
{
    subject.push_back(vector<string>({ "JFK","SFO" }));
    subject.push_back(vector<string>({ "JFK","ATL" }));
    subject.push_back(vector<string>({ "SFO","ATL" }));
    subject.push_back(vector<string>({ "ATL","JFK" }));
    subject.push_back(vector<string>({ "ATL","SFO" }));
}

vector<vector<string>> Solution::getSubject()
{
    return subject;
}

vector<string> Solution::findItinerary(vector<vector<string>>& tickets)
{
    vector<string> ans;
    unordered_set<string> m_set;

    for (auto it : tickets)
    {
        string from = it[0];
        string to = it[1];
    }
    return ans;
}
