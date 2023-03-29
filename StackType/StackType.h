#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

class FullStack{};
class EmptyStack{};

template <class ItemType>
class StackType{
    struct NodeType{
        ItemType info;
        NodeType* next;
    };

    private:
        NodeType* topPtr;

    public:
        StackType();
        ~StackType();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        bool IsEmpty();
        bool IsFull();
};

#endif // STACKTYPE_H_INCLUDED
