#include "Temperature.h"

Temperature::Temperature(int t)
{
    temp = t;
}
bool Temperature :: isEthylFreezing()
{
    if(temp <= -173)
    {
        return true;
    }else
    {
        return false;
    }
}
bool Temperature :: isEthylBoiling()
{
    if(temp >= 172)
    {
        return true;
    }else
    {
        return false;
    }
}
bool Temperature :: isOxygenFreezing()
{
    if(temp <= -362)
    {
        return true;
    }else
    {
        return false;
    }
}
bool Temperature :: isOxygenBoiling()
{
    if(temp >= -306)
    {
        return true;
    }else
    {
        return false;
    }
}
bool Temperature :: isWaterFreezing()
{
    if(temp <= 32)
    {
        return true;
    }else
    {
        return false;
    }
}
bool Temperature :: isWaterBoiling()
{
    if(temp >= 212)
    {
        return true;
    }else
    {
        return false;
    }
}
