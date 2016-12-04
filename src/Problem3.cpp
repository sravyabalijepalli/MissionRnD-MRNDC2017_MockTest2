/*

Akash is genius reverse engineer, invented a world demanded machine and Kept in a secret building with a passkey.
Sam is very excited to see his wonderful creation. So, she went to the building with the pass key which is a
numeric code example "547". But there are many doors with lock in a linear fashion such that
she can cross second door only after crossing first door.

First door pass key is the largest number that can be formed by given passkey -> 754
Second door pass key is the next largest number that can be formed -> 745
Third door opens for next largest number ->574



Find which Nth door's room contains the machine or How many doors should Sam cross ?

Given input is in form of Doubly Linked List
eg: 7 <-> 5 <-> 8  o/p: 4

explanation: (1) 875 (2) 857 (3) 785 (4) 758

NOTE:	(1)	DLL can contain maximum of 12 nodes
(2)	All doors will have a Passkey which is formed by the numbers of the original pass key only
(3) From the first door to last, passkey will be in decreasing order.
(4) Duplicates are allowed
(5) "075" is not treated as "75". 0 is also given same importance as others.

Return NULL for invalid cases.
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int num;
	struct node *prev;
	struct node *next;
};


int doorstoCross(struct node *passKey)
{
	return -1;
}