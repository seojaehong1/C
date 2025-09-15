#pragma once
typedef struct treeThNode
{
    char data;
    struct treeThNode* left;
    struct treeNode* right;
    int isThreadRight;
} treeThNode;

treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadRight);
treeThNode* findThreadSuccessor(treeThNode* p);
void threadInorder(treeThNode* root);
