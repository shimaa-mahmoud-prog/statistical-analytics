/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.h>
 * @brief <include deceleration and documentation>
 *
 * <this file include all function prototypes  and documentation>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief <print elements of unsigned array>
 *
 * <ths function take unsigned array and print its elements>
 *
 * @param <a> <unsigned array to be printed>
 * @param <n> <unsigned variable refer to number of array elements >
 *
 * @return <void>
 */
void print_array(unsigned char* a ,unsigned int n);

/**
 * @brief < find maximum element of unsigned array>
 *
 * <this function take unsigned array and number of its elements and return its maximum element >
 *
 * @param <a> <unsigned array to be printed>
 * @param <n> <unsigned variable refer to number of array elements >
 *
 * @return <maximum element in entered array>
 */
unsigned char find_maximum(unsigned char* a , unsigned int n);

/**
 * @brief < find minimum element of unsigned array>
 *
 * <this function take unsigned array and number of its elements and return its minimum element >
 *
 * @param <a> <unsigned array to be printed>
 * @param <n> <unsigned variable refer to number of array elements >
 *
 * @return <minimum element in entered array>
 */
 unsigned char find_minimum(unsigned char* a ,unsigned int n);

/**
 * @brief < find mean value of unsigned array>
 *
 * <this function take unsigned array and number of its elements and return its mean value >
 *
 * @param <a> <unsigned array to be printed>
 * @param <n> <unsigned variable refer to number of array elements >
 *
 * @return <mean value of entered array>
 */
 float find_mean(unsigned char* a , unsigned int n);

 /**
 * @brief < sort unsigned array>
 *
 * <this function take unsigned array and sort its elements from largest to minimum  value using bubble sort algorithm >
 *
 * @param <a> <unsigned array to be printed>
 * @param <n> <unsigned variable refer to number of array elements >
 *
 * @return <void>
 */
 void sort_array(unsigned char* a , unsigned int n);

 /**
 * @brief < find median element in unsigned array>
 *
 * <this function take unsigned array and number of its elements  and it will sort the array then check if number of element is even or odd then find its  median elements>
 *
 * @param <a> <unsigned array to be printed>
 * @param <n> <unsigned variable refer to number of array elements >
 *
 * @return <mean value of entered array>
 */
 float find_median(unsigned char* a , unsigned int n);

/**
 * @brief < print statistics of unsigned array>
 *
 * <this function take unsigned array and number of its elements then print minimum , maximum , mean value , median of the entered array >
 *
 * @param <a> <unsigned array to be printed>
 * @param <n> <unsigned variable refer to number of array elements >
 *
 * @return <void>
 */
 void print_statistics(unsigned char* a , unsigned int n);

#endif /* __STATS_H__ */
