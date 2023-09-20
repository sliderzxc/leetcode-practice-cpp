#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    map<char, int> mp;
    string shortestCompletingWord(string s, vector<string> &arr)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                mp[s[i]]++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                char ch = tolower(s[i]);
                mp[ch]++;
            }
        }
        string ans = "";
        int idx = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            fun(arr[i], i, ans, idx);
        }
        return ans;
    }
    void fun(string &s, int &i, string &ans, int &idx)
    {
        map<char, int> v;
        for (int k = 0; k < s.length(); k++)
        {
            if (mp.find(s[k]) != mp.end())
                v[s[k]]++;
        }
        if (mp.size() != v.size())
        {
            return;
        }
        for (auto it1 = mp.begin(), it2 = v.begin(); it1 != mp.end(), it2 != v.end(); it1++, it2++)
        {
            if (it1->second > it2->second)
            {
                return;
            }
        }
        if (ans == "")
        {
            ans = s;
            idx = i;
        }
        else if (ans.length() > s.length())
        {
            ans = s;
            idx = i;
        }
    }
};