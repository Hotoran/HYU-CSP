#include<stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

Point getScale2xPoint(const Point* p) {
	Point temp;
	temp.xpos = (p->xpos) * 2;
	temp.ypos = (p->ypos) * 2;

	return temp;
}

void swapPoints(Point* p1, Point* p2) {
	Point temp;
	temp.xpos = p1->xpos;
	temp.ypos = p1->ypos;
	
	p1->xpos = p2->xpos;
	p1->ypos = p2->ypos;

	p2->xpos = temp.xpos;
	p2->ypos = temp.ypos;
}

int main(void) {
	Point p1;
	Point p2;
	scanf("%d %d", &p1.xpos, &p1.ypos);
	p2 = getScale2xPoint(&p1);
	
	printf("Calling getScale2xPoint()\n");
	printf("P1 : %d %d\n",p1.xpos,p1.ypos);
	printf("P2 : %d %d\n",p2.xpos,p2.ypos);

	swapPoints(&p1,&p2);
	printf("Calling swapPoints()\n");
	printf("P1 : %d %d\n", p1.xpos,p1.ypos);
	printf("P2 : %d %d\n", p2.xpos,p2.ypos);

	return 0;

}

