typedef struct tnode *Treeptr;

typedef struct tnode{
    char *word;
    int count;
    struct tnode *left;
    struct tnode *right;
} Treenode;

Treeptr talloc(void)
{
    return (Treeptr) malloc(sizeof(Treenode));
}

typedef int(*PFI)(char *,char *);
