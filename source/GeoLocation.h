#pragma once

class GeoLocation {
public:
	GeoLocation(double latitude = 0.00, double longitude = 0.00) :latitude(latitude), longitude(longitude) { }

	double getLatitude();
	double getLongitude();

private:
	double latitude;
	double longitude;
};