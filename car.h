/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		20.November, 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H
enum CarType {AIXAM, FIAT_MULTIPLA, JEEP};
enum Color {GREEN, BLACK, ORANGE, SILVER, BLUE, RED};

/*struct CarImplementation{
  enum CarType carType;
  enum Color color;
  int actualspeed;
  int accelleration;
  double fill_level;
  bool is_rented;
};*/

typedef struct CarImplementation* Car;

enum CarType get_type(Car car);
enum Color get_color(Car car);
float get_fill_level(Car car);
float get_acceleration_rate(Car car);
double get_speed(Car car);
Car get_car(enum CarType);
void set_acceleration_rate(Car car, int accelleration);
void init();
void accelerate(Car car);
#endif
