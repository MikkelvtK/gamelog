
// Max length for properties
#define LENGTH 255

// Represents a game entry in the backlog
typedef struct {
    char name[LENGTH];
    char bucket[LENGTH];
    char added_on[LENGTH];
    char updated_on[LENGTH];
} entry;

// Represents a node in a linked list
typedef struct node {
    int index;
    entry game;
    struct node *next;
} node;

// Blueprints for functions
void insert_data(entry g);
void remove_data(int i);
void print_data();
void unload_data();
void set_index(node *n, int i);