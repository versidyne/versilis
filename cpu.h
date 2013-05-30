// cpu.h -- Gathers CPU information
//          File Version: 1.1

#ifndef CPU_H
#define CPU_H

// Define CPUID
#define cpuid(in, a, b, c, d) __asm__("cpuid": "=a" (a), "=b" (b), "=c" (c), "=d" (d) : "a" (in));

// Detects the current CPU
int detect_cpu(void);

// Print Registers
void printregs(int eax, int ebx, int ecx, int edx);

// Intel-specific information
int do_intel(void);

// AMD-specific information
int do_amd(void);

#endif // CPU_H
