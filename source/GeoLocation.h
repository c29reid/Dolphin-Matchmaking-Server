#pragma once

#include <cmath>

class GeoLocation {
public:
	GeoLocation(double latitude = 0.00, double longitude = 0.00) :latitude(latitude), longitude(longitude) { }

	double getLatitude();
	double getLongitude();

	double distance(const GeoLocation& other);

private:
	double latitude;
	double longitude;
};