// cpu.h -- Gathers CPU information
//          File Version: 1.1

#ifndef CPU_H
#define CPU_H

// CPUID Assembly Function
void cpuid(int func, int &ax, int &bx, int &cx, int &dx);

// Detects the current CPU
int cpu(void);

// Print Registers
void registers(int eax, int ebx, int ecx, int edx);

// Intel-specific information
int intel(void);

// AMD-specific information
int amd(void);

#endif // CPU_H
