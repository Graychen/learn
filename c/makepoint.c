struct rect screen;
struct point middle;
struct point makepoint(int,int);

screen.pt1=makepoint(0,0);
screen.pt2=makepoint(XMAX,YMAX);
middle=makepoint((screen.pt1.x+screen.pt2.x)/2,(screen.pt1.y+screen.pt2.y)/2);

struct addpoint(struct point p1,struct point p2)
{
    p1.x+=p2.x;
    p1.y+=p2.y;
    return p1;
}
