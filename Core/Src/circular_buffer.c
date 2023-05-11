/*
 * circular_buffer.c
 *
 *  Created on: 18 kwi 2023
 *      Author: piotr
 */

#include "main.h"
#include "circural_buffer.h"

void circular_buffer_init(circular_buffer_t *buff)
{
	buff->head = 0;
	buff->size = BUFFER_SIZE;

	for (uint32_t i=0; i < buff->size; i++)
	{
		buff->data[i] = 0;
	}
}

void circular_buffer_push(circular_buffer_t *buff, int32_t new_data)
{
	buff->data[buff->head] = new_data;

	buff->head++;
	buff->head = buff->head % buff->size;
}
