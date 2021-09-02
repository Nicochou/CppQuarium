#ifndef FPS_H
#define FPS_H

#include "TimeManager.h"

class FPS {
	FPS();
	~FPS();
private:
	static FPS singletonFPS;
public:
	float getFps(TimeManager& instance);
	FPS(const FPS&) = delete;
	FPS& operator=(const FPS&) = delete;
	static FPS& GetInstanceFPS();
	float fps;
};

#endif