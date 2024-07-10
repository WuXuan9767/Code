#pragma once
#define Highth 20
#define Width 20
class Frame {
protected:
	int canvae[Width][Highth];
public:
	void clear();
	void make_frame();
	Frame();
};