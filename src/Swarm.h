/*
 * Swarm.h
 *
 *  Created on: 13 Oct 2025
 *      Authors: johnwpurcell, Amal Roy
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace caveofprogramming {

class Swarm {
public:
	const static int NPARTICLES = 10000;

private:
	Particle * m_pParticles;
	int lastTime;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed, int SpeedCounter, int DirectionCounter);

	const Particle * const getParticles() { return m_pParticles; };
};

} /* namespace caveofprogramming */

#endif /* SWARM_H_ */
