#include <stdio.h>
#include <cstdlib>

struct AdjListNode {
    int val;
    struct AdjListNode *next;
};

struct AdjList {
    struct AdjListNode *head;
};

struct GraphNode {
    struct AdjList *list;
    struct GraphNode *next;
};

struct GraphNode *graphHead;

struct AdjListNode *createAdjListNode(int val) {
    struct AdjListNode *node = ((struct AdjListNode *) malloc(sizeof(struct AdjListNode)));
    node->val = val;
    node->next = NULL;
    return node;
}

struct AdjList *createAdjList() {
    struct AdjList *list = ((struct AdjList *) malloc(sizeof(struct AdjList)));
    return list;
}

struct GraphNode *createGraphNode() {
    return ((struct GraphNode *) malloc(sizeof(struct GraphNode)));
}

bool searchList(AdjList *list, int val);

struct AdjList *getParents(int val) {
    struct GraphNode *g = graphHead;
    struct AdjList *result = createAdjList();
    result->head = NULL;
    struct AdjListNode **p = &result->head;
    while (g != NULL) {
        struct AdjList *list = g->list;
        if (searchList(list, val)) {
            AdjListNode *node = createAdjListNode(list->head->val);
            *p = node;
            p = &((*p)->next);
        }
        g = g->next;
    }

    return result;
}

struct AdjList *createDuplicateList(struct AdjList list) {
    struct AdjList *result = createAdjList();
    struct AdjListNode *n = list.head;
    result->head = createAdjListNode(n->val);
    n = n->next;
    struct AdjListNode **p = &(result->head->next);
    while (n != NULL) {
        *p = createAdjListNode(n->val);
        n = n->next;
        p = &((*p)->next);
    }

    return result;
}

struct AdjList *findList(int val) {
    struct GraphNode *g = graphHead;
    while (g != NULL) {
        struct AdjList *list = g->list;
        if (list->head->val == val)
            return createDuplicateList(*list);
        g = g->next;
    }
    return NULL;
}

struct AdjList *getChildren(int val) {
    struct AdjList *children = findList(val);
    children->head = children->head->next;
    return children;
}

bool searchList(AdjList *list, int val) {
    struct AdjListNode *p = NULL;
    if (list->head != NULL && list->head->next != NULL)
        p = list->head->next;
    while (p != NULL) {
        if (p->val == val)
            return true;
        p = p->next;
    }
    return false;
}

void loadData() {

    struct AdjList *list1 = createAdjList();
    struct AdjList *list2 = createAdjList();
    struct AdjList *list3 = createAdjList();
    struct AdjList *list4 = createAdjList();
    struct AdjList *list5 = createAdjList();
    struct AdjList *list6 = createAdjList();
    struct AdjList *list7 = createAdjList();
    struct AdjList *list8 = createAdjList();
    struct AdjList *list9 = createAdjList();
    struct AdjList *list10 = createAdjList();
    struct AdjList *list11 = createAdjList();
    struct AdjList *list12 = createAdjList();
    struct AdjList *list13 = createAdjList();
    struct AdjList *list14 = createAdjList();
    struct AdjList *list15 = createAdjList();
    struct AdjList *list16 = createAdjList();
    struct AdjList *list17 = createAdjList();
    struct AdjList *list18 = createAdjList();
    struct AdjList *list19 = createAdjList();
    struct AdjList *list20 = createAdjList();
    struct AdjList *list21 = createAdjList();
    struct AdjList *list22 = createAdjList();
    struct AdjList *list23 = createAdjList();
    struct AdjList *list24 = createAdjList();
    struct AdjList *list25 = createAdjList();
    struct AdjList *list26 = createAdjList();
    struct AdjList *list27 = createAdjList();
    struct AdjList *list28 = createAdjList();
    struct AdjList *list29 = createAdjList();
    struct AdjList *list30 = createAdjList();
    struct AdjList *list31 = createAdjList();
    struct AdjList *list32 = createAdjList();
    struct AdjList *list33 = createAdjList();
    struct AdjList *list34 = createAdjList();
    struct AdjList *list35 = createAdjList();
    struct AdjList *list36 = createAdjList();
    struct AdjList *list37 = createAdjList();

    list1->head = createAdjListNode(1);
    list2->head = createAdjListNode(2);
    list3->head = createAdjListNode(3);
    list4->head = createAdjListNode(4);
    list5->head = createAdjListNode(5);
    list6->head = createAdjListNode(6);
    list7->head = createAdjListNode(7);
    list8->head = createAdjListNode(8);
    list9->head = createAdjListNode(9);
    list10->head = createAdjListNode(10);
    list11->head = createAdjListNode(11);
    list12->head = createAdjListNode(12);
    list13->head = createAdjListNode(13);
    list14->head = createAdjListNode(14);
    list15->head = createAdjListNode(15);
    list16->head = createAdjListNode(16);
    list17->head = createAdjListNode(17);
    list18->head = createAdjListNode(18);
    list19->head = createAdjListNode(19);
    list20->head = createAdjListNode(20);
    list21->head = createAdjListNode(21);
    list22->head = createAdjListNode(22);
    list23->head = createAdjListNode(23);
    list24->head = createAdjListNode(24);
    list25->head = createAdjListNode(25);
    list26->head = createAdjListNode(26);
    list27->head = createAdjListNode(27);
    list28->head = createAdjListNode(28);
    list29->head = createAdjListNode(29);
    list30->head = createAdjListNode(30);
    list31->head = createAdjListNode(31);
    list32->head = createAdjListNode(32);
    list33->head = createAdjListNode(33);
    list34->head = createAdjListNode(34);
    list35->head = createAdjListNode(35);
    list36->head = createAdjListNode(36);
    list37->head = createAdjListNode(37);

    list1->head->next = createAdjListNode(19);
    list2->head->next = createAdjListNode(19);
    list3->head->next = createAdjListNode(20);
    list4->head->next = createAdjListNode(20);
    list5->head->next = createAdjListNode(21);
    list6->head->next = createAdjListNode(21);
    list7->head->next = createAdjListNode(22);
    list8->head->next = createAdjListNode(22);
    list9->head->next = createAdjListNode(23);
    list10->head->next = createAdjListNode(23);
    list11->head->next = createAdjListNode(24);
    list12->head->next = createAdjListNode(24);
    list13->head->next = createAdjListNode(25);
    list14->head->next = createAdjListNode(25);
    list15->head->next = createAdjListNode(26);
    list16->head->next = createAdjListNode(26);
    list17->head->next = createAdjListNode(27);
    list18->head->next = createAdjListNode(27);
    list19->head->next = createAdjListNode(28);
    list20->head->next = createAdjListNode(28);
    list21->head->next = createAdjListNode(29);
    list22->head->next = createAdjListNode(29);
    list23->head->next = createAdjListNode(30);
    list24->head->next = createAdjListNode(30);
    list25->head->next = createAdjListNode(31);
    list26->head->next = createAdjListNode(31);
    list27->head->next = NULL;
    list28->head->next = createAdjListNode(32);
    list28->head->next->next = createAdjListNode(34);
    list28->head->next->next->next = createAdjListNode(40);
    list29->head->next = createAdjListNode(32);
    list29->head->next->next = createAdjListNode(34);
    list29->head->next->next->next = createAdjListNode(40);
    list30->head->next = createAdjListNode(33);
    list30->head->next->next = createAdjListNode(35);
    list31->head->next = createAdjListNode(33);
    list31->head->next->next = createAdjListNode(35);
    list34->head->next = createAdjListNode(36);
    list35->head->next = createAdjListNode(36);
    list32->head->next = createAdjListNode(37);
    list33->head->next = createAdjListNode(37);

    struct GraphNode *g1 = createGraphNode();
    struct GraphNode *g2 = createGraphNode();
    struct GraphNode *g3 = createGraphNode();
    struct GraphNode *g4 = createGraphNode();
    struct GraphNode *g5 = createGraphNode();
    struct GraphNode *g6 = createGraphNode();
    struct GraphNode *g7 = createGraphNode();
    struct GraphNode *g8 = createGraphNode();
    struct GraphNode *g9 = createGraphNode();
    struct GraphNode *g10 = createGraphNode();
    struct GraphNode *g11 = createGraphNode();
    struct GraphNode *g12 = createGraphNode();
    struct GraphNode *g13 = createGraphNode();
    struct GraphNode *g14 = createGraphNode();
    struct GraphNode *g15 = createGraphNode();
    struct GraphNode *g16 = createGraphNode();
    struct GraphNode *g17 = createGraphNode();
    struct GraphNode *g18 = createGraphNode();
    struct GraphNode *g19 = createGraphNode();
    struct GraphNode *g20 = createGraphNode();
    struct GraphNode *g21 = createGraphNode();
    struct GraphNode *g22 = createGraphNode();
    struct GraphNode *g23 = createGraphNode();
    struct GraphNode *g24 = createGraphNode();
    struct GraphNode *g25 = createGraphNode();
    struct GraphNode *g26 = createGraphNode();
    struct GraphNode *g27 = createGraphNode();
    struct GraphNode *g28 = createGraphNode();
    struct GraphNode *g29 = createGraphNode();
    struct GraphNode *g30 = createGraphNode();
    struct GraphNode *g31 = createGraphNode();
    struct GraphNode *g32 = createGraphNode();
    struct GraphNode *g33 = createGraphNode();
    struct GraphNode *g34 = createGraphNode();
    struct GraphNode *g35 = createGraphNode();
    struct GraphNode *g36 = createGraphNode();
    struct GraphNode *g37 = createGraphNode();

    g1->list = list1;
    g2->list = list2;
    g3->list = list3;
    g4->list = list4;
    g5->list = list5;
    g6->list = list6;
    g7->list = list7;
    g8->list = list8;
    g9->list = list9;
    g10->list = list10;
    g11->list = list11;
    g12->list = list12;
    g13->list = list13;
    g14->list = list14;
    g15->list = list15;
    g16->list = list16;
    g17->list = list17;
    g18->list = list18;
    g19->list = list19;
    g20->list = list20;
    g21->list = list21;
    g22->list = list22;
    g23->list = list23;
    g24->list = list24;
    g25->list = list25;
    g26->list = list26;
    g27->list = list27;
    g28->list = list28;
    g29->list = list29;
    g30->list = list30;
    g31->list = list31;
    g32->list = list32;
    g33->list = list33;
    g34->list = list34;
    g35->list = list35;
    g36->list = list36;
    g37->list = list37;

    g1->next = g2;
    g2->next = g3;
    g3->next = g4;
    g4->next = g5;
    g5->next = g6;
    g6->next = g7;
    g7->next = g8;
    g8->next = g9;
    g9->next = g10;
    g10->next = g11;
    g11->next = g12;
    g12->next = g13;
    g13->next = g14;
    g14->next = g15;
    g15->next = g16;
    g16->next = g17;
    g17->next = g18;
    g18->next = g19;
    g19->next = g20;
    g20->next = g21;
    g21->next = g22;
    g22->next = g23;
    g23->next = g24;
    g24->next = g25;
    g25->next = g26;
    g26->next = g27;
    g27->next = g28;
    g28->next = g29;
    g29->next = g30;
    g30->next = g31;
    g31->next = g32;
    g32->next = g33;
    g33->next = g34;
    g34->next = g35;
    g35->next = g36;
    g36->next = g37;
    g37->next = NULL;

    graphHead = g1;
}

void stackPush(struct AdjList *list, struct GraphNode **head) {

    struct GraphNode *tmp = createGraphNode();
    tmp->list = createDuplicateList(*list);
    tmp->next = *head;
    *head = tmp;
}

struct AdjList *appendAdjList(struct AdjList *source, struct AdjList *target) {
    if (source->head == NULL) {
        source->head = target->head;
        return target;
    }
    if (target->head == NULL) {
        return source;
    }
    struct AdjListNode *p = source->head;
    while (p->next != NULL) p = p->next;
    p->next = target->head;
    return source;
}

void printAdjList(struct AdjList *list) {
    if (list == NULL) return;
    struct AdjListNode *p = list->head;
    while (p != NULL) {
        printf("%d\t", p->val);
        p = p->next;
    }
    printf("\n");
}

struct AdjList *stackPop(struct GraphNode **head) {
    if (*head == NULL) {
        return NULL;
    }
    struct AdjList *result = (*head)->list;
    if ((*head)->next == NULL) {
        *head = NULL;
    } else {
        *head = (*head)->next;
    }
    return result;
}

GraphNode *getAncestors(int val) {
    struct GraphNode *stackHead = NULL;
    struct AdjList *parents = getParents(val);
    if (parents->head == NULL) {
        return NULL;
    }
    stackPush(parents, &stackHead);
    while (true) {
        bool done = false;
        struct AdjListNode *p = parents->head;
        struct AdjList *l = createAdjList();
        while (p != NULL) {
            struct AdjList *m = getParents(p->val);
            if (m->head == NULL) {
                done = true;
                break;
            }
            l = appendAdjList(l, m);
            p = p->next;
        }
        if (done) break;
        stackPush(l, &stackHead);
        parents = l;
    }

    return stackHead;
}

struct GraphNode *getSuccessors(int val) {
    struct GraphNode *stackHead = NULL;
    struct AdjList *children = getChildren(val);
    if (children->head == NULL) {
        return NULL;
    }
    stackPush(children, &stackHead);
    while (true) {
        bool done = false;
        struct AdjListNode *p = children->head;
        struct AdjList *l = createAdjList();
        while (p != NULL) {
            struct AdjList *m = getChildren(p->val);
            if (m->head == NULL) {
                done = true;
                break;
            }
            l = appendAdjList(l, m);
            p = p->next;
        }
        if (done) break;
        stackPush(l, &stackHead);
        children = l;
    }
    struct GraphNode *stackHead1 = NULL;
    while (stackHead != NULL) {
        stackPush(stackPop(&stackHead), &stackHead1);
    }
    return stackHead1;
}

struct AdjList *deleteFromList(struct AdjList *list, int val) {
    struct AdjListNode *p = list->head;
    if (p->next == NULL && p->val == val) return NULL;
    if (p->val == val) {
        list->head = list->head->next;
        return list;
    }
    while (p->next != NULL && p->next->val != val) p = p->next;
    if (p->next == NULL) return list;
    p->next = p->next->next;
    return list;
}

struct AdjList *getRealSiblings(int val) {
    struct GraphNode *g = graphHead;
    struct AdjList *result = createAdjList();
    while (g != NULL) {
        struct AdjList *list = g->list;
        if (searchList(list, val)) {
            result = findList(list->head->val);
            result->head = result->head->next;
            result = deleteFromList(result, val);
            break;
        }
        g = g->next;
    }

    return result;
}

int getSpouse(int val) {
    struct AdjList *children = getChildren(val);
    if (children->head == NULL) {
        return -1;
    }

    struct AdjList *parents = getParents(children->head->val);
    int spouse = parents->head->val;
    if (spouse == val) spouse = parents->head->next->val;
    return spouse;
}

void insert (int val, int parent) {
    int spouse = getSpouse(parent);
    struct GraphNode *g = graphHead;
    struct AdjList *parentList  = NULL;
    struct AdjList *spouseList  = NULL;
    while (g != NULL) {
        if (g->list->head->val == parent) parentList = g->list;
        if (g->list->head->val == spouse) spouseList = g->list;
        if (parentList && spouseList) break;
        g = g->next;
    }

    struct AdjListNode *p = parentList->head;
    while (p->next != NULL) p = p->next;
    p->next = createAdjListNode(val);
    p->next->next = NULL;

    struct AdjListNode *q = spouseList->head;
    while (q->next != NULL) q = q->next;
    q->next = createAdjListNode(val);
    q->next->next = NULL;
}

int main() {
    loadData();
    return 0;

}