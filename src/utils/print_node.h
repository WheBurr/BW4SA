/*
 * print_node.h
 *
 *  Created on: 7.2.2014
 *      Author: lvapaaka
 */

#ifndef PRINT_NODE_H_
#define PRINT_NODE_H_

struct substring;

/**
 * Prints all the information about the node in a readable form.
 *
 * @param node a substring struct to be printed
 */
void print_node(struct substring* node);
void print_double_node(struct substring* node1, struct substring* node2);

#endif /* PRINT_NODE_H_ */