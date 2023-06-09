cmake_minimum_required(VERSION 3.23)
project(0x1A_hash_tables C)

set(CMAKE_C_STANDARD 90)

add_executable(0x1A_hash_tables main.c hash_tables.h 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c)
