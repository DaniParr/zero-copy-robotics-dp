module;
#include <cmath>

export module Vec3;

export class Vec3 
{
	private:
		double x;
		double y;
		double z;
	public:
		Vec3(double x = 0.0, double y = 0.0, double z = 0.0) : x(x), y(y), z(z) {}

		// Summation
		friend Vec3 operator+(const Vec3& lhs, const Vec3& rhs) 
		{
			return Vec3(
				lhs.x + rhs.x,
				lhs.y + rhs.y,
				lhs.z + rhs.z
			);
		}

		// Subtraction
		friend Vec3 operator-(const Vec3& lhs, const Vec3& rhs) 
		{
			return Vec3(
				lhs.x - rhs.x,
				lhs.y - rhs.y,
				lhs.z - rhs.z
			);
		}

		// Dot Product
		friend Vec3 operator*(const Vec3& lhs, const Vec3& rhs) 
		{
			return Vec3(
				lhs.x * rhs.x,
				lhs.y * rhs.y,
				lhs.z * rhs.z
			);
		}

		// Cross Product
		friend Vec3 operator%(const Vec3& lhs, const Vec3& rhs) 
		{
			return Vec3(
				lhs.y * rhs.z - rhs.y * lhs.z,
				lhs.x * rhs.z - rhs.x * lhs.z,
				lhs.x * rhs.y - rhs.x * lhs.y
			);
		}
		
		// Equivalent Check
		friend bool operator==(const Vec3& lhs, const Vec3& rhs) 
		{
			double epsilon = 1e-5;

			return std::abs(lhs.x - rhs.x) < epsilon && 
			       std::abs(lhs.y - rhs.y) < epsilon &&
			       std::abs(lhs.z - rhs.z) < epsilon;
			
		}
};

