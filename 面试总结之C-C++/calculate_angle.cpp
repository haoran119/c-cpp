/*
Calculate the angle between hour hand and minute hand - GeeksforGeeks
    https://www.geeksforgeeks.org/calculate-angle-hour-hand-minute-hand/?ref=lbp
*/

#include <iostream>
#include <cmath>        // abs
#include <algorithm>    // std::min

double CalculateAngle(int h, int m)
{
    if (h < 0 || h > 23 || m < 0 || m > 59) {
        throw std::runtime_error("Wrong input");
    }

    h = h % 12;

    // hour hand moves 0.5 degree per minute
    auto hourAngle{ 0.5 * (h * 60 + m) };
    // minute hand moves 6 degree per minute
    auto minuteAngle{ 6.0 * m };
    auto angle{ std::abs(hourAngle - minuteAngle) };
    angle = std::min(angle, 360 - angle);

    return angle;
}

int main()
{
    std::cout << CalculateAngle(1, 30) << std::endl;    // 135
    std::cout << CalculateAngle(3, 30) << std::endl;    // 75
    std::cout << CalculateAngle(10, 0) << std::endl;    // 60

    return 0;
}
