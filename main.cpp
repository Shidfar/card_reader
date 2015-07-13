#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>
#include <time.h>
#include <chrono>
#include <thread>
#include <algorithm>
#include <usb.h>
using namespace std;

void * execute(void * tmp)
{
    int *x = (int *) tmp;
    while(true)
    {
        string psswd;
        cout <<endl <<endl;
        cin>> psswd;
        if(psswd == "1586234504")
            cout<<"ACCESS GRANTED" <<endl;
        else if(psswd == "qq")
            break;
        else
            cout<<"ACCESS DENIED" <<endl;
    }
}

main()
{
//    struct usb_bus *bus;
//    struct usb_device *dev;
//    usb_init();
//    usb_find_busses();
//    usb_find_devices();
//    for (bus = usb_busses; bus; bus = bus->next)
//        for (dev = bus->devices; dev; dev = dev->next){
//            printf("Trying device %s/%s\n", bus->dirname, dev->filename);
//            printf("\tID_VENDOR = 0x%04x\n", dev->descriptor.idVendor);
//            printf("\tID_PRODUCT = 0x%04x\n", dev->descriptor.idProduct);
//            printf("\tiPRoduct = 0x%04x\n", dev->descriptor.iProduct);
//        }
//

    pthread_t threadID;
    int tt = 13;
    int error = pthread_create(&threadID, NULL, execute, &tt);
    if(error)
    {
        cout<<"DIE!"<<endl;
        exit(1);
    }
    while(true)
    {
        cout<<" > RUNNING FINE" <<endl;
        this_thread::sleep_for(chrono::seconds(10));
    }
}

