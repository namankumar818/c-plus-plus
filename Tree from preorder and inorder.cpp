#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
struct Node* left;
struct Node* right;
Node(int val){
data = val;
left = NULL;
right = NULL;
}
};
int search(int ino[], int start, int end, int curr){
for(int i = start; i<=end; i++){
if(ino[i] == curr){
return i;
}

}return -1;

}

Node* buildTree(int pre[], int ino[], int start, int end){
static int idx = 0;
if(start>end){
return NULL;
}
int curr = pre[idx];
idx++;
Node* node = new Node(curr);
if(start == end){
return node;
}
int pos = search(ino, start, end, curr);
node->left = buildTree(pre, ino, start, pos-1);
node->right = buildTree(pre, ino, pos+1, end);
return node;
}
void inorder(Node* root){
if(root == NULL){
return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}


int main(){
int pre[] = {1,2,4,3,5};
int ino[] = {4,2,1,5,3};
Node* root = buildTree(pre, ino, 0, 4);
inorder(root);

return 0;
}