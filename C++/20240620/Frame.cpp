#include"Frame.h"

Frame::Frame() {
	for (int i = 0; i < Highth; ++i) {
		for (int j = 0; j < Width; ++j) {
			canvae[i][j] = 0;
		}
	}
	for (int i = 0; i < Highth; i++) {
		canvae[i][0] = -1;
		canvae[i][Width - 1] = -1;
	}
	for (int j = 0; j < Width; j++) {
		canvae[0][j] = -1;
		canvae[Highth - 1][j] = -1;
	}
}
void Frame::clear() {
	for (int i = 0; i < Highth; ++i) {
		for (int j = 0; j < Width; ++j) {
			canvae[i][j] = 0;
		}
	}
}

void Frame::make_frame() {
	for (int i = 0; i < Highth; ++i) {
		for (int j = 0; j < Width; ++j) {
			canvae[i][j] = 0;
		}
	}
	for (int i = 0; i < Highth; i++) {
		canvae[i][0] = -1;
		canvae[i][Width - 1] = -1;
	}
	for (int j = 0; j < Width; j++) {
		canvae[0][j] = -1;
		canvae[Highth - 1][j] = -1;
	}
}