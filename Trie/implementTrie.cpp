// //  Implement Trie
// // Link:- https://www.naukri.com/code360/problems/implement-trie_631356?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

// class TrieNode{
//     public:
//         char data;
//         TrieNode* children[26];
//         bool isTerminal;

//         TrieNode(char ch){
//             data= ch;
//             for(int i=0; i<26; i++){
//                 children[i] = NULL;
//             }
//             isTerminal = false;
//         }
// };

// class Trie {

// public:

//     /** Initialize your data structure here. */
//     Trie() {

//     }

//     /** Inserts a word into the trie. */
//     void insert(string word) {

//     }

//     bool searchUtil(TrieNode* root, string word){
//         if(word.length() ==0){
//             return root->isTerminal;
//         }
//         int index = word[0]-'A';
//         TrieNode* child;

//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }else{
//             return false;
//         }
//         return searchUtil(child, word.substr(1));
//     }
//     /** Returns if the word is in the trie. */
//     bool search(string word) {
//         return searchUtil(root, word);
//     }

//     /** Returns if there is any word in the trie that starts with the given prefix. */
//     bool startsWith(string prefix) {

//     }
// };