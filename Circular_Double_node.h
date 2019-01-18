//PART 1 - Doubly Linked Node
#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

template <typename Type>
class Double_node
{
private:
    Type value_of_the_node;
    Double_node *next_pointer;
    Double_node *previous_pointer;
public:
    
    Double_node(Type const &node_value, Double_node *next, Double_node *previous)
    {
        value_of_the_node = node_value;
        next_pointer = next;
        previous_pointer = previous;
    }
    // Default Destructor, Copy & Move Constructor Implicit
    
    // Accessors
    // Returns Value of the Node
    Type value() const { return value_of_the_node; }
    // Return Pointer to Next
    Double_node *next() const { return next_pointer; }
    // Return Pointer to Prev
    Double_node *previous() const { return previous_pointer; }
};


// PART 2 - Circular Double List

template <typename Type>
class Circular_double_list: public Double_node
{
private:
    Double_node<Type> *head_pointer;
    int list_size;
public:

    Circular_double_list() 
     : list_size(0), head_pointer = nullptr;

    ~Circular_double_list() 
    {
        while (!(head_pointer))
        {

        }
    };

    // Methods
        // Accessor Functions

    int size() const 
    {return list_size;}

    bool empty() const 
    {return list_size == 0 ? true : false;}

    Type front() const
    {

    }
    Type back() const;
    Type at(int) const;
    Double_node <Type> *head() const
    {return head_pointer;}
    int count(Type const &) const;

        // Mutator Functions

    void swap(Circular_double_list &);
    void push_front(Type const&);
    void push_back(Type const&);
    Type pop_front();
    Type pop_back();
    void insertAt(int, Type const &);
    void eraseAt(int);
    int find(Type const &);
    void clear();

};

#endif