#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <algorithm>
#include "allUsers.h"
using namespace std;

unordered_map<string, string> hashmap;
unordered_map<string, vector<string>> mutual;

void search(string s, unordered_map<string, string> hashmap)
{
    if (hashmap.find(s) == hashmap.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << hashmap[s] << endl;
    }
}

void mutualFriends(string a, string b, string searched_user, string login_user, bool direction)
{
    stringstream ss1(a);
    vector<string> Search_user, vertices;
    string word;
    while (ss1 >> word)
    {
        Search_user.push_back(word);
        vertices.push_back(word);
    }

    stringstream ss2(b);
    vector<string> current_user;
    while (ss2 >> word)
    {
        vertices.push_back(word);
        current_user.push_back(word);
    }
}

// praveen print karaega
void displayDetails(string user)
{
    string file = user + ".txt";
    string following, followers;
    ifstream read(file);
    if (read.is_open())
    {
        string str;

        getline(read, str);
        cout << "Name: " << str << endl;
        getline(read, str);
        cout << "User Name: " << str << endl;
        getline(read, str);
        cout << "DOB: " << str << endl;
        getline(read, str);
        getline(read, str);
        cout << "Profession: " << str << endl;
        getline(read, str);
        cout << "Decription : " << str << endl;
        getline(read, str);

        getline(read, following);
        cout << "Following: " << following << endl;
        getline(read, followers);
        // cout << "Followers: " << followers << endl;
        stringstream ss(followers);
        vector<string> words;
        string word;
        while (ss >> word)
        {
            words.push_back(word);
        }
        int i;
        string curr_user = "praveen biswajit LunaStar7 QuantumX TechMaster42";
        for (i = 0; i < words.size(); i++)
        {
            if (words[i] == "Sparky21")
            {
                mutualFriends(following, curr_user, user, "Sparky21", true); // add current user and searching user following
            }
        }
        if (i == words.size())
        {
            cout << "No mutual friends" << endl;
        }
    }
    else
    {
        cout << "File not opened" << endl;
        exit(1);
    }
}

int main()
{
    SearchingPanel obj;
    unordered_map<int, vector<string>> user;
    user = obj.detailsToHashTable();
    string c;
    getline(cin, c);
    // cout << obj.searchUser(c);
    if (obj.searchUser(c) == 1)
    {
        // cout << "done";
        displayDetails(c);
    }
    else
    {
        cout << "User not found";
    }
    return 0;
}