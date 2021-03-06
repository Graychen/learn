#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
struct tnode *addtree(struct tnode *,char *)
struct tnode *talloc(void);
char *strdup(char *);
void treeprint(struct tnode *);
int getword(char *,int);

int main(){
    struct tnode *root;
    char word[MAXWORD];

    root=NULL;
    while(getword(word,MAXWORD)!=EOF)
        if(isalpha(word[0]))
            root=addtree(root,word);
    treeprint(root);
    return 0;
}

struct treenode *addtree(struct tnode *p,char *w)
{
     int cond;
     if(p==NULL){
         p=talloc();
         p->word=strdup(w);
         p->count=1;
         p->left=p->right=NULL;
     }else if((cond=strcmp(w,p->word))==0)
         p->count++;
     else if(count<0)
         p->left=addtree(p->left,w); 
     else
         p->right=addtree(p->right,w);
     return p;
}

void treeprint(struct tnode *p)
{
    if(p!=NULL){
        treeprint(p->left);
        printf("%4d %s\n",p->count,p->word);
        treeprint(p->right);
    }
}
