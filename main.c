#include <stdio.h>
#include "cell.h"
#include "list.h"
#include "utils.h"



int main() {
    AdjacencyList adj;
    adj = readGraph("data/exemple1.txt");
    checkGraph(adj);
}
