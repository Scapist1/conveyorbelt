#include <stdio.h>

int main() {
  unsigned char motors; // max 255 motors
  float kg_package;

  // Input motors
  printf("How many motors will carry the packages? ");
  scanf("%d", &motors);
  printf("Got it!\n");

  // Input weight of the package in kg
  printf("Determine how many kg of packages you got: ");
  scanf("%f", &kg_package);

  // Check if the motors can carry the package
  if (motors * 5.6 < kg_package) {
    printf(
        "The %d motors won't carry the packages, %.2f kg is too heavy, sry \n",
        motors, kg_package);
  } else {
    printf("Yes, the %d motors will carry the %.2f kg packages! :D\n", motors,
           kg_packages);
  }

  return 0;
}