/*
 * circural_buffer.h
 *
 *  Created on: 18 kwi 2023
 *      Author: piotr
 */

#ifndef INC_CIRCURAL_BUFFER_H_
#define INC_CIRCURAL_BUFFER_H_

#define BUFFER_SIZE		10

typedef struct
{
	int32_t data[BUFFER_SIZE];
    uint32_t head;
    uint32_t size;
} circular_buffer_t;

void circular_buffer_init(circular_buffer_t *buff);
void circular_buffer_push(circular_buffer_t *buff, int32_t new_data);

#endif /* INC_CIRCURAL_BUFFER_H_ */
