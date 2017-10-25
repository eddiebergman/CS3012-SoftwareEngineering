#ifndef DIRECTED_NODE_I_H
#define DIRECTED_NODE_I_H

#include <unordered_set>

template <typename Implementor>
class DirectedNodeI {

public:
    virtual bool has_child(Implementor* n) = 0;
    virtual bool has_parent(Implementor* n) = 0;
    virtual std::unordered_set<Implementor*>& children() = 0;
    virtual std::unordered_set<Implementor*>& parents() = 0;

};

#endif //DIRECTED_NODE_I_H