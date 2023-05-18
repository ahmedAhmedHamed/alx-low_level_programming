cmake_minimum_required(VERSION 3.25)
project(0x17_doubly_linked_lists C)

set(CMAKE_C_STANDARD 90)

add_executable(0x17_doubly_linked_lists main.c 0-print_dlistint.c lists.h 1-dlistint_len.c 2-add_dnodeint.c 3-add_dnodeint_end.c 4-free_dlistint.c 5-get_dnodeint.c 6-sum_dlistint.c 7-insert_dnodeint.c 8-delete_dnodeint.c)
