/*
 * Particle.cpp
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
namespace caveofprogramming {

Particle::Particle() :
		m_x(0), m_y(0) {
	init();
}

void Particle::init() {
	m_x = 0;
	m_y = 0;

	m_spfactor = 0.1;
	m_spincrement = 0.01;
	m_dirfactor = 0.0001;
	m_dirincrement = 0.0001;
	m_sprand = rand();
	m_direction = (2 * M_PI * rand()) / RAND_MAX;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update(int interval, int SpeedCounter , int DirectionCounter) {

	m_speed =
			((m_spfactor + m_spincrement * SpeedCounter) * m_sprand) / RAND_MAX;

	m_speed *= m_speed;
	//cout << "Speed: " << (m_spfactor + m_spincrement * SpeedCounter) << endl;
	m_direction += interval * (m_dirfactor + m_dirincrement * DirectionCounter);
	//cout << "Direction: " << m_direction << endl;
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed * interval;
	m_y += yspeed * interval;

	if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
		init();
	}

	if (rand() < RAND_MAX / 100) {
		init();

	}
}

} /* namespace caveofprogramming */
