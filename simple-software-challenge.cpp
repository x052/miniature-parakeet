#include <iostream>
#include "math.h"

using namespace std;

const int SQ_METRE_PER_LITRE = 11; // changes depending on the type of pain used (look out for the m²/l label)

int main(int argc, char* argv[])
{   
    int room_width = 0;
    int room_length = 0;
    int room_height = 0;

    cout << "Enter room width (in meters): ";
    cin >> room_width;
    cout << "Enter room length (in meters): ";
    cin >> room_length;
    cout << "Enter room height (in meters): ";
    cin >> room_height;

    float floor_area = room_width * room_length;
    float room_volume = room_height * floor_area;
    
    float wall_sureface_area = (room_width * room_height) + (room_length * room_height);
    float amount_of_paint_required = wall_sureface_area / SQ_METRE_PER_LITRE;
    
    cout << "Area of the floor: " << floor_area << "m²" << endl;
    cout << "Amount of paint required to paint the walls: ";
    cout << round(amount_of_paint_required) << " units. (1 unit per m^2)" << endl;
    cout << "Volume of the room: " << room_volume << "m²" << endl;

    return 0;
}