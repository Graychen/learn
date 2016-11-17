struct rect canonrect(struct rect r)
{
    struct rect temp;

    temp.pt1.x=min(r.pt1.x,r.pt2.x);
    temp.pt1.y=min(r.pt1.y,r.pt2.y);
    temp.pt2.x=max(r.pt1.x,r.pt2.x);
    temp.pt2.y=max(r.pt1.y,r.pt2.y);
    return temp;
}

struct point origin,*pp;
pp=&origin;
printf("origin is (%d,%d)\n",(*pp).x,(*pp.y));
printf("origin is (%d,%d)\n",pp->x,pp->y);
