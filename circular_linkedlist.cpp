struct Node *addToEmpty(struct Node *last, int data)
{
    // This function is only for empty list
    if (last != NULL)
      return last;
 
    // Creating a node dynamically.
    struct Node *last =
          (struct Node*)malloc(sizeof(struct Node));
 
    // Assigning the data.
    last -> data = data;
 
    // Note : list was empty. We link single node
    // to itself.
    last -> next = last;
 
    return last;
}
