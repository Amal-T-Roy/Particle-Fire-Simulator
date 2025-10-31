/*
 * Screen.h
 *
 *  Created on: 1 Sep 2014
 *      Authors: johnwpurcell, Amal Roy
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL3/SDL.h>

namespace caveofprogramming {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
	int m_spcounter;
	int m_dircounter;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;

public:
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	void clear();
	void boxBlur();
};

} /* namespace caveofprogramming */

#endif /* SCREEN_H_ */
