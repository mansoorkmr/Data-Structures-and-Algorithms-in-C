/**
 * @brief Double linked list structure and methods
 * @file double_linked_list.h
 */

typedef struct DoubleLinkedListNode
{
    int data;
    struct DoubleLinkedListNode* next;
    struct DoubleLinkedListNode* previous;
} DoubleLinkedListNode;

typedef struct DoubleLinkedList
{
    size_t size;
    struct DoubleLinkedListNode* head;
    struct DoubleLinkedListNode* tail;
} DoubleLinkedList;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Creates a new double linked list with one node
 *
 * @param data integer to set into the new created node
 *
 * @return DoubleLinkedListNode
 */
DoubleLinkedList create(const int data);

/**
 * @brief Inserts one node at the end of the double linked list
 *
 * @param list the double linked list to modify
 * @param data the data to insert into the list
 */
void insertAtTheEnd(
    DoubleLinkedList* const list,
    const int data
);

/**
 * @brief Inserts one node at the beginning of the double linked list
 *
 * @param list the double linked list to modify
 * @param data the data to insert into the list
 */
void insertAtTheBeginning(
    DoubleLinkedList* const list,
    const int data
);

/**
 * @brief Returns the element at the given index
 *
 * @param list the double linked list to modify
 * @param index the index into the list of the expected data
 *
 * @return int
 */
int at(
    const DoubleLinkedList* const list,
    const size_t index
);

/**
 * @brief Returns the size of the list
 *
 * @param list the concerned double linked list
 *
 * @return size_t
 */
size_t size(const DoubleLinkedList* const list);

/**
 * @brief Returns an array pointer with all the ordered items
 *
 * @param list the concerned double linked list
 *
 * @return int*
 */
int* all(const DoubleLinkedList* const list);

/**
 * @brief Inserts one node right after the given position
 *
 * @param list the double linked list to modify
 * @param index the position of the new node to add
 * @param data the data to insert into the list
 */
void insertAfter(
    DoubleLinkedList* const list,
    const size_t index,
    const int data
);

/**
 * @brief Drops one node at the given index
 *
 * @param list the double linked list to modify
 * @param index the position of the new node to remove
 */
void dropAt(
    DoubleLinkedList* const list,
    const size_t index
);

/**
 * @brief Inverts the given double linked list
 *
 * @param list the double linked list to invert
 */
void invert(DoubleLinkedList* const list);

#ifdef __cplusplus
}
#endif
