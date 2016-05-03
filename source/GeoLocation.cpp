
#include "stdafx.h"

#include "GeoLocation.h"

double GeoLocation::getLatitude()
{ 
	return latitude; 
}
double GeoLocation::getLongitude()
{
	return longitude; 
}

double GeoLocation::distance(const GeoLocation& other)
{
	double x1 = longitude;
	double x2 = other.longitude;
	double y1 = latitude;
	double y2 = other.latitude;
	return sqrt((x1-x2) + (y1-y2));
}
