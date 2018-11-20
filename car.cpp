#include "car.h"
#include <stdbool.h>
#define CARCOUNT 6

struct CarImplementation{
  enum CarType carType;
  enum Color color;
  int actualspeed;
  int accelleration;
  double fill_level;
  bool is_rented;
};


static struct CarImplementation aixam = {AIXAM, BLACK, 0, 0, 0.0, false};


enum CarType get_type(Car car)
{
  return car->carType;
}

enum Color get_color(Car car)
{
  return car->color;
}

float get_fill_level(Car car)
{
  return 0.0;
}

float get_acceleration_rate(Car car)
{
  return car->accelleration;
}

double get_speed(Car car)
{
  return car->actualspeed;
}

Car get_car(enum CarType type)
{
    for (int i = 0; i < CARCOUNT; i++) {
      
    }
}

void set_acceleration_rate(Car car, int accelleration)
{
  car->accelleration = accelleration;
}

void init()
{

}

void accelerate(Car car)
{
  car->actualspeed += car->accelleration;
}
