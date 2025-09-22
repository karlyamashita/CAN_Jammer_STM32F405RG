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

>The STM32F405RG version is more or less the same Firmware as the [CAN_Jammer_STM32F105C8](https://github.com/karlyamashita/CAN_Jammer_STM32F105RB) version except that this Firmware has 2 more LED's to control.

<img width="1024" height="609" alt="Image" src="https://github.com/user-attachments/assets/9419c315-3baa-4cbc-ba5d-8452d9d5ef27" />

### USBCAN
Here is the image of the [PCAN dual open source](https://www.aliexpress.us/item/3256808451647147.html) clone that is being sold on Aliexpress. They do have the same PCB with a Chinese brand microcontroller. But for this project, I am using the STM32F4 version. 

<img width="2048" height="1368" alt="Image" src="https://github.com/user-attachments/assets/08322bde-015f-488e-a1a6-e60ca0565f6e" />

### Documentation
More information can be found on the Wiki https://github.com/karlyamashita/CAN_Jammer_STM32F405RG/wiki

