#ifndef PATH_TRACER_H
#define PATH_TRACER_H

#include <cuda_runtime.h>
struct Image;
struct Sphere;
struct Ray;
struct Camera;

class PathTracer {

private:

	Image* image;

	int numSpheres;

	Sphere* spheres;
	
	Ray* rays;

	Camera* rendercam;

	void createDeviceData();
	void deleteDeviceData();

	void setUpScene();

public:
	PathTracer();
	~PathTracer();

	Image* render();
	void setUpCamera(Camera* cam);

};

#endif // PATH_TRACER_H