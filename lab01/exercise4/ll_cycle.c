#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    // Start with two pointers at the head of the list. One will be called fast_ptr and the other will be called slow_ptr.
    // Advance fast_ptr by two nodes. If this is not possible because of a null pointer, 
    // we have found the end of the list, and therefore the list is acyclic.
    // Advance slow_ptr by one node. (A null pointer check is unnecessary. Why?)
    // If the fast_ptr and slow_ptr ever point to the same node, the list is cyclic. Otherwise, go back to step 2.
    node *fast = head;
    node *slow = head;    
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            return 1; // cyclic
        }
    }
    return 0; // acyclic
}
