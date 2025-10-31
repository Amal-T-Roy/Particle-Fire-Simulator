/*
 * Particle.h
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace caveofprogramming {

struct Particle {
	double m_x;
	double m_y;


private:
	double m_speed;
	double m_direction;
	double m_spfactor;
	double m_spincrement;
	double m_dirfactor;
	double m_dirincrement;
	double m_sprand;
private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval, int SpeedCounter ,int DirectionCounter);

};

} /* namespace caveofprogramming */

#endif /* PARTICLE_H_ */
