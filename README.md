#Operating Systems www.icesi.edu.co/facultad_ingenieria/

#Introduction
In computing, a system call is how a program requests a service from an operating system's kernel. This may include hardware-related services (for example, accessing a hard disk drive), creation and execution of new processes, and communication with integral kernel services such as process scheduling. System calls provide an essential interface between a process and the operating system.

![][1]

<!--  
More info: [**syscalls from A to Z**](http://www.linux.org/threads/the-linux-kernel-intro-to-system-calls.5611/)
-->
More info: [**Syscall from A to Z**][linuxorg-syscalls]

#Objectives
* Learn the difference between interpreted and compiled languages
* Learn how to use syscalls from C source code
* Learn how to use syscalls related with process management

#Llamadas al sistema:
Las llamadas al sistema, como su nombre lo indica son llamadas que se realizan a controladores, tambien pedir y realizar solicitudes al sistema operativo, haciendo uso de los servicios que tiene implementado este. Por ejemplo:

*Fork
*Wait
*Stop
*start
*etc.

#Description
##syscl_1.c

This is the source code of a hello world application written in C language

##syscl_2.c

This is the source code of a basic application that employs the getpid() system call to return its 
process id

##syscl_3.c

This example is ...


[linuxorg-syscalls]: http://www.linux.org/threads/the-linux-kernel-intro-to-system-calls.5611

[1]: http://duartes.org/gustavo/blog/img/os/syscallExit.png

##llamada.c 
En las siguientes líneas se muestran un programa que emplean las llamadas al sistema. Este ejemplo crea un fichero y escribe en él unos caracteres.



