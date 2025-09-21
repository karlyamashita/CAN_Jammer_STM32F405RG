# CAN Jammer

### About CAN Jammer
The CAN Jammer Firmware works on a dual CAN bus device like the USBCAN, A.K.A. PCAN clone that uses an STM32F405RG. It acts as a CAN 2.0B gateway that goes in between a node of interest (Target) and the rest of the nodes in the network. 
What the CAN Jammer can do:<br>
* It displays which side the CAN messages are coming from, CAN1 or CAN2.
  * It can block certain CAN ID's from passing through.
* Or you can block all CAN ID's except for the ID's that you do want to pass through.
* You can mask which bits of certain bytes that you want to either toggle, set high or set low.
* You can override certain bytes with hardcoded bytes.
* You can send CAN messages to either CAN1 or CAN2 side, isolated from the opposite side.

>The STM32F405RG version is more or less the same Firmware as the STM32F105C8 version except that this Firmware has 2 more LED's to control.

### Documentation
More information can be found on the Wiki https://github.com/karlyamashita/CAN_Jammer_STM32F405RG/wiki



