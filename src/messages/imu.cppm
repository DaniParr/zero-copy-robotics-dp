export module IMU;

import Timestamp;
import Vec3;

export struct IMU 
{	
	Timestamp timestamp;

	Vec3 linear;
	Vec3 twist;
};
