//! This is my code to building a flight system
#include <iostream>
using namespace std;
class person
{
protected:
    string first_name;
    string last_name;
    int age;
    long long national_id;

public:
    person() {} // default constructor used to initialize attributes of this class

    // settters of this class

    void set_firstname()
    {
        string n;
        cout << "enter your first name : ";
        cin >> n;
        first_name = n;
    }

    void set_lastname()
    {
        string n;
        cout << "enter your last name : ";
        cin >> n;
        last_name = n;
    }

    void set_age()
    {
        int a;
        cout << "enter your age : ";
        cin >> a;
        age = a;
    }

    void set_nationalID()
    {
        long long id;
        cout << "enter your national ID : ";
        cin >> id;
        national_id = id;
    }

    virtual void print_person_information()
    {
        cout << "first name : " << first_name << endl;
        cout << "last name : " << last_name << endl;
        cout << "age : " << age << endl;
        cout << "national id : " << national_id << endl;
    }
};


class passenger : public person
{

};


class pilot_details : public person
{
    public :
    void set_firstname(string fn) // fn is an abbreviation for first name
    {
        first_name = fn;
    }
    void set_lastname(string ln) // ln is an abbreviation for last name
    {
        last_name = ln;
    }
    void print_person_information()
    {
        cout << "the pilot of your flight will be : " << first_name << " " << last_name << endl;
    }
};

/******************/

class flight_details
{
private:
    string FlightNumber;
    int departing_year;
    int departing_month;
    int departing_day;
    int return_year;
    int return_month;
    int return_day;
    string flighttime;
    string arrivaltime;
    string depatrure_place;
    string arrival_destination;
    int number_of_tickets;

public:
    flight_details() // paramitrized constructor used to intialize attributes of this class
    {
        FlightNumber = "0";
        departing_year = 0;
        departing_month = 0;
        departing_day = 0;
        return_year = 0;
        return_month = 0;
        return_day = 0;
    }

    void set_flightnumber(string fn)
    {
        FlightNumber = fn;
    }

    void set_departuredate()
    {
        int dy; //abbreviation for departing year
        int dm; //abbreviation for departing month
        int dd; //abbreviation for departing day
        string dt;
        cout << "adjust your departing date : " << endl;
        cout << "year : ";
        cin >> dy;
        departing_year = dy;
        cout << "month : ";
        cin >> dm;
        departing_month = dm;
        cout << "day : ";
        cin >> dd;
        departing_day = dd;
    }

    void set_arrivaldate()
    {
        int ry; //abbreviation for return year
        int rm; //abbreviation for return month
        int rd; //abbreviation for return day
        cout << "adjust your arrival date : " << endl;
        cout << "year : ";
        cin >> ry;
        return_year = ry;
        cout << "month : ";
        cin >> rm;
        return_month = rm;
        cout << "day : ";
        cin >> rd;
        return_day = rd;
    }

    void set_departure_flighttime_and_arrival_flighttime()
    {
        int x;
        string ft; //abbreviation for flight time
        string at; //abbrevation for arrival time
        cout << "chosse your time for the flight from the options below : " << endl;
        cout << "1 / 2:30" << endl;
        cout << "2 / 10:30" << endl;
        cout << "3 / 13:30" << endl;
        cout << "4 / 15:00" << endl;
        cout << "5 / 19:30" << endl;
        cout << "6 / 22:00" << endl;
        cin >> x;
        if(x == 1)
        {
        ft = "2:30";
        at = "4:30";
        }
        else if (x == 2)
        {
        ft = "10:30";
        at = "12:30";
        }
        else if (x == 3)
        {
        ft = "13:30";
        at = "15:50";
        }
        else if (x == 4)
        {
        ft = "15:00";
        at = "17:00";
        }
        else if (x == 5)
        {
        ft = "19:30";
        at = "21:30";
        }
        else if (x == 6)
        {
        ft = "22:00";
        at = "00:00";
        }
        flighttime = ft;
        arrivaltime = at;
    }

    void set_departurecity()
    {
        string dc;
        cout << "enter the airport you will leave from : ";
        cin >> dc;
        depatrure_place = dc;
    }

    void set_arrivaldestination()
    {
        string ad;
        cout << "enter the destination of your land : ";
        cin >> ad;
        arrival_destination = ad;
    }

    void set_no_of_tickets()
    {
        int no_of_tickets;
        cout << "enter number of tickets you want to book : ";
        cin >> no_of_tickets;
        number_of_tickets = no_of_tickets;
    }

    void print_flightdetails() // print inforamtion about the flight
    {
        cout << "Your flight number is : " << FlightNumber << endl;
        cout << "your departure date will be : " << departing_day << " / " << departing_month << " / " << departing_year << endl;
        cout << "your return date will be : " << return_day << " / " << return_month << " / " << return_year << endl;
        cout << "leaving from : " << depatrure_place << " airport" << endl;
        cout << "landing at : " << arrival_destination << " airport" << endl;
        cout << "your departure flight time will be : " << flighttime << endl;
        cout << "You will arrive at : " << arrivaltime << endl;
        cout << "you bought : " << number_of_tickets << " tickets " << endl;
        cout << "total cost of your tickets is " << number_of_tickets * 7500 << endl;
    }
};

/***************/

class extra_flight_details
{
private:
    string seatnumber;
    int number_of_bags;
    int pets;
    string meal;

public:
    extra_flight_details()
    {
        seatnumber = "0";
        number_of_bags = 0;
        pets = 0;
        meal = "ERROR";
    }

    void set_seatnumber()
    {
        int x;
        string sn; //abbreviation for seat number
        cout << "chhose your seat from the options available below : " << endl;
        cout << "1 : 44C " << endl;
        cout << "2 : 44B " << endl;
        cout << "3 : 44A " << endl;
        cout << "notice that : C is closer to the window " << endl;
        cin >> x;
        if(x == 1)
        sn = "44C";
        else if( x == 2)
        sn = "44B";
        else if(x == 3)
        sn = "44A";
        seatnumber = sn;
    }

    void set_numberofbags()
    {
        int no_of_bags;
        cout << "enter number of bags you have of maximum 3 : ";
        cin >> no_of_bags;
        number_of_bags = no_of_bags;
    }

    void set_no_of_pets()
    {
        int x;
        int no_of_pets;
        cout << "do you want to board any pets with you? " << endl;
        cout << "1 : yes" << endl;
        cout << "2 : no" << endl;
        cin >> x;
        if (x == 1)
        {
            cout << "how much pets you have ?" << endl;
            cin >> no_of_pets;
            pets = no_of_pets;
        }
        else if (x == 2)
        {
            no_of_pets = 0;
            pets = no_of_pets;
        }
    }

    void set_preffered_meal()
    {
        int x;
        string MEAL;
        cout << "choose your preffered meal on the plane please " << endl;
        cout << "1 : beef" << endl;
        cout << "2 : chicken" << endl;
        cin >> x;
        if (x == 1)
            MEAL = "beef";
        else if (x == 2)
            MEAL = "chicken";
        else
            cout << "please enter a valid meal";
        meal = MEAL;
    }
    void print_extra_details()
    {
        cout << "your seat on the flight will be :  " << seatnumber << endl;
        cout << "tha amount of bags you have :  " << number_of_bags << endl;
        cout << "number of pets you have : " << pets << endl;
        cout << "your preffered meal is " << meal << endl;
    }
};
    
int main()
{
    passenger pas1; // creating object for the passenger class and initalizing its constructor
    pilot_details po1;
    flight_details flight1; // creating object for the flight
    extra_flight_details exfd1; // creating object for extra flight details class, and fd is an abbrevaition for flight details 

    cout << "Welcome aboard!" << endl 
    << "Your journey begins here. Whether you're flying for business or pleasure, we're thrilled to have you on board our flight booking system." << endl;
    cout << "feel free to give us information, " << endl
    << "Our system is fortified with the latest in cybersecurity measures, ensuring that your personal information remains protected at all times.\n";

//!adjusting the passenger details:
    pas1.set_firstname();
    pas1.set_lastname();
    pas1.set_age();
    pas1.set_nationalID();

//!adjusting pilot name
    po1.set_firstname("Seif");
    po1.set_lastname("Sherif");

//!adjusting the flight details:
    flight1.set_flightnumber("MS750");
    flight1.set_departurecity();
    flight1.set_arrivaldestination();
    flight1.set_departuredate();
    flight1.set_arrivaldate();
    flight1.set_no_of_tickets();
    flight1.set_departure_flighttime_and_arrival_flighttime();

//!adjusting extra flight details:
    exfd1.set_seatnumber();
    exfd1.set_numberofbags();
    exfd1.set_no_of_pets();
    exfd1.set_preffered_meal();

    cout << " Before we proceed, would you like to confirm your flight booking? " << endl;
    cout << "1 : yes" << endl;
    cout << "2 : no" << endl;
    int conf; //abbreviation for confirm flight
    cin >> conf;
    if(conf == 1)
    {
        cout << "Thank you for choosing our flight booking system. We appreciate your trust in us" << endl;
        cout << "here is the information about your flight : " << endl;
        pas1.print_person_information();
        flight1.print_flightdetails();
        exfd1.print_extra_details();
        po1.print_person_information();
        cout << "Wish you a safe flight " << endl
            << " don't forget to fasten your seatbelts :)" << endl;
    }

    if(conf == 2)
    {
        cout << "thanks for choosing our flight system :)";
        return 0;
    }
    cout << "would you like to cancel your flight ? " << endl;
    cout << "1 : yes " << endl;
    cout << "2 : no " << endl;
    int canf; //abbreviation for cancelling the flight
    cin >> canf;
    if(canf == 1)
    {
        cout << "Your flight is cancelled " << endl;
        cout << "thanks for choosing our flight system " << endl;
    }
    if(canf == 2)
    {
        cout << "wish you a safe flight " << endl;
    }

}
