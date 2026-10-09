#include <iostream>

int input()
{
    int inpu;
    std::cin >> inpu;
    return inpu;
}

int main()

{
    int packetsize{},transition_speed{},time{},waiting_packets{};
    std::cout <<  "Enter the details as mentioned below \n";
    std::cout <<  "Enter the size of each packet : ";
    packetsize = input();
    std::cout <<  "Enter the transition speed of cable : ";
    transition_speed = input();
    std::cout <<  "Enter the time constraint : ";
    time = input();
    std::cout <<  "Enter the number of packets : ";
    waiting_packets = input();
    
    int total_transferrable {(transition_speed*time)/1000};
    int transferred {((total_transferrable/packetsize)<=waiting_packets)?(total_transferrable/packetsize):waiting_packets};
    
    std::cout << "Total Transferred packets : " << transferred << " \nRemaining Packets : " << waiting_packets-transferred << '\n';
    return 0;
}
