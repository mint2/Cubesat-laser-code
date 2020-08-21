# Cubesat-laser-code
Hello CubeSat people! This is the Github repository for the code for the laser communication system for IRVINE-03. There are two versions of the code, one is written in C, where the other one is written in Python. I would recommend using the Python files for the final system because the C code may have some bugs. The purpose of the encoder file is to convert the spectrometer files on the satellite into binary files, which are then transmitted to the ground station as laser pulses from the satellite of different time intervals. The purpose of the decoder file is to convert the received transmission at the ground station back into its original file type by reconverting it from binary to whatever file it was previously. The encoder file takes into account the possibility of transmission errors and attempts to minimize them by retransmitting a single binary character three times (you can change this number during testing). The decoder file also receives these extra bits and adds whichever bit appears the most (0 or 1) to the binary file it constructs. This is sort of similar to sending parity bits (if you don't know what it is, google it). I encourage you to change the code as you see fit if you think of improvements or changes to make.

We did not get to finish testing this code on a Z2, so I would recommend starting there. Put these files on a Z2 and run them to see if there are any issues, and if you have the time you would probably consider setting up a real test with a laser and the OGRE to see if the code works as intended.

I wish you good luck completing IRVINE-03! I am graduating this year and cannot finish this task, since CubeSat has been paused as of now due to the pandemic. I leave to you this code and the hope that you will be able to finish the satellite. If you have any questions or for some reason need to reach me, then email me at this address: connor.j.stewart5@gmail.com
