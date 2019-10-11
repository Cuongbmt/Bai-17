#pragma once
class tamgiac
{
public:
	tamgiac();
	int x1, y1, x2, y2, x3, y3;
	
	void thietlap(int mx1, int my1, int mx2, int my2, int mx3, int my3);
	void vetg(CClientDC *pDC);
	
	~tamgiac();
};

