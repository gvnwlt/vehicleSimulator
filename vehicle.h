#include <SFML/Graphics.hpp>
#include <string>


class Vehicle
{
private:
	double dist;
	bool rearSteer;
  std::pair<double, double> coordinates;
	double heading;
	double steerAngle;
	double steerRadius;
	int steerMode;
	double speed;
	int wheelbase;

public:
	Vehicle(sf::Vector2f vd, bool rs = true) :
	  vehicleDimensions(vd),
		dist{0},
		rearSteer{rs},
		coordinates{0,0},
		heading{0},
		steerAngle{0},
		steerRadius{0},
		steerMode{0}, // create enum class to define this
		speed{0},
		wheelbase{5}
	{
	}

	~Vehicle()
	{
	}

  sf::Vector2f vehicleDimensions;

	void setSpeed();
	void setSteerMode();
	void setSteerAngle();
	void setSteerRadius();


};
