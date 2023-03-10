#include "Airline.h"
using namespace std;

Airline::Airline(string airline_code1, string airline_name1, string callsign1, string airline_country1) : airline_code(airline_code1), airline_name(airline_name1), callsign(callsign1), airline_country(airline_country1) {}

string Airline::getAirlinecode() const {return airline_code;}
string Airline::getAirlinename() const {return airline_name;}
string Airline::getAirlinecallsign() const {return callsign;}
string Airline::getAirlinecountry() const {return airline_country;}
bool Airline::operator==(const Airline& other) const {
    return this->airline_code == other.airline_code && this->airline_name == other.airline_name &&
           this->callsign == other.callsign
           && this->airline_country == other.airline_country;
}