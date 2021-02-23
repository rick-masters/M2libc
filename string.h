/* Copyright (C) 2016 Jeremiah Orians
 * This file is part of M2-Planet.
 *
 * M2-Planet is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * M2-Planet is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with M2-Planet.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stddef.h>

char* strcpy(char* dest, char const* src);
char* strncpy(char* dest, char const* src, size_t count);
char* strcat(char* dest, char const* src);
char* strncat(char* dest, char const* src, size_t count);
size_t strlen(char const* str );
size_t strnlen_s(char const* str, size_t strsz );
int strcmp(char const* lhs, char const* rhs );
int strncmp(char const* lhs, char const* rhs, size_t count);
char* strchr(char const* str, int ch);
char* strrchr(char const* str, int ch);
size_t strspn(char const* dest, char const* src);
size_t strcspn(char const* dest, char const* src);
char* strpbrk(char const* dest, char const* breakset);
