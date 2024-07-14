#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* curr = root;
        for (char ch : word) {
            if (curr->children.find(ch) == curr->children.end()) {
                curr->children[ch] = new TrieNode();
            }
            curr = curr->children[ch];
        }
        curr->isEndOfWord = true;
    }

    bool search(string word) {
        TrieNode* curr = root;
        for (char ch : word) {
            if (curr->children.find(ch) == curr->children.end()) {
                return false;
            }
            curr = curr->children[ch];
        }
        return curr->isEndOfWord;
    }

    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for (char ch : prefix) {
            if (curr->children.find(ch) == curr->children.end()) {
                return false;
            }
            curr = curr->children[ch];
        }
        return true;
    }
};

int main() {
    Trie trie;

    // Insert words into the trie
    trie.insert("apple");
    trie.insert("banana");
    trie.insert("car");
    trie.insert("cat");

    // Search for words in the trie
    cout << "Search Results:" << endl;
    cout << "apple: " << (trie.search("apple") ? "Found" : "Not Found") << endl;
    cout << "banana: " << (trie.search("banana") ? "Found" : "Not Found") << endl;
    cout << "car: " << (trie.search("car") ? "Found" : "Not Found") << endl;
    cout << "cat: " << (trie.search("cat") ? "Found" : "Not Found") << endl;
    cout << "dog: " << (trie.search("dog") ? "Found" : "Not Found") << endl;

    // Check if words start with a given prefix
    cout << "Starts With:" << endl;
    cout << "ap: " << (trie.startsWith("ap") ? "Yes" : "No") << endl;
    cout << "ba: " << (trie.startsWith("ba") ? "Yes" : "No") << endl;
    cout << "ca: " << (trie.startsWith("ca") ? "Yes" : "No") << endl;
    cout << "do: " << (trie.startsWith("do") ? "Yes" : "No") << endl;

    return 0;
}