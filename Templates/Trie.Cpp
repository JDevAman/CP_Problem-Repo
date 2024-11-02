#include <bits/stdc++.h> 
using namespace std;
// Tries as Prefix Tree.
// TC: O(n) * len.


// Define Node for Used In Trie
struct Node{
   bool flag = false;
   Node* links[26];

    bool containsKey(char ch){
        return links[ch-'a'] != NULL;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }

    void setEnd(){
        flag = true;
    }

    bool isEnd(){
        return flag;
    }
};

// Define Trie Structure
class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root = new Node();
    }

    void insert(string word){
        Node* node = root;
        for(char ch: word){
            if(!node->containsKey(ch)){
                node->put(ch, new Node());
            }
            node = node->get(ch);
        }
        node->setEnd();
    }

    bool isComplete(string word){
        Node* node = root;
        for(char ch: word){
            // Character doesn't exist or Current Prefix doesn't exist as word
            if(!node->containsKey(ch) || !node->get(ch)->isEnd()) return false;
            node = node->get(ch);
        }
        return true;
    }
};


// Insert all words in 
string completeString(int n, vector<string> &a){
    // sort(a.begin(), a.end());
    Trie prefixTree;

    for(string s: a){
        prefixTree.insert(s);
    }

    string longest = "";
    
    for(string s: a){
        //
        if(prefixTree.isComplete(s)){
            if(s.size() > longest.size()) longest = s;
            else if(s.size() == longest.size()){
                if(s < longest) longest = s;
            }
        }
    }

    return longest.empty() ? "None" : longest;

}

int main(){
    return 0;
}