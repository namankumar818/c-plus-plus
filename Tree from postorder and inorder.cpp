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
int search(int inor[], int start, int end, int curr){
for(int i = start; i<=end; i++){
if(inor[i] == curr){
return i;
}
}return -1;

}

Node* buildTree(int pos[], int inor[], int start, int end){
static int idx = 4;
if(start>end){
return NULL;
}
int curr = pos[idx];
idx--;
Node* node = new Node(curr);
if(start == end){
return node;
}
int posi = search(inor, start, end, curr);
node->right = buildTree(pos, inor, posi+1, end);
node->left = buildTree(pos, inor, start, posi-1);
return node;
}
void in(Node* root){
if(root == NULL){
return;
}
in(root->left);
cout<<root->data<<" ";
in(root->right);

}


int main(){
int pos[] = {4,2,5,3,1};
int inor[] = {4,2,1,5,3};
Node* root = buildTree(pos, inor, 0, 4);
in(root);

return 0;
}
