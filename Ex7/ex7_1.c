#include <stdio.h>
#include "traversalBT.h"

int main(void){
    treeNode* n7 = makeRootNode('D',NULL,NULL);
    treeNode* n6 = makeRootNode('C',NULL,NULL);
    treeNode* n5 = makeRootNode('B',NULL,NULL);
    treeNode* n4 = makeRootNode('A',NULL,NULL);
    treeNode* n3 = makeRootNode('/',NULL,NULL);
    treeNode* n2 = makeRootNode('*',NULL,NULL);
    treeNode* n1 = makeRootNode('-',NULL,NULL);

    printf("\n preorder : ");
    preorder(n1);

    printf("\n inorder : ");
    inorder(n1);

    printf("\n postorder : ");
    postorder(n1);

    getchar();
    return 0;
}