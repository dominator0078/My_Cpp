#include <iostream>
int main()
{
    int packetsize{},transition_speed{},time{},waiting_packets{};
    std::cout <<  "Enter the details as mentioned below \n";
    std::cout <<  "Enter the size of each packet : ";
    std::cin  >>  packetsize;
    std::cout <<  "Enter the transition speed of cable : ";
    std::cin  >>  transition_speed;
    std::cout <<  "Enter the time constraint : ";
    std::cin  >>  time;
    std::cout <<  "Enter the number of packets : ";
    std::cin  >>  waiting_packets;
    
    int total_transferrable {(transition_speed*time)/1000};
    int transferred {((total_transferrable/packetsize)<=waiting_packets)?(total_transferrable/packetsize):waiting_packets};
    
    std::cout << "Total Transferred packets : " << transferred << " \nRemaining Packets : " << waiting_packets-transferred << '\n';
    return 0;
}
