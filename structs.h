/*
 * structs.h
 *
 *  Created on: Aug 16, 2022
 *      Author: manfredi
 */
using namespace omnetpp;

struct log_entry {
    int clientId; // ??? forse meglio l'index? ???
    int entryLogIndex;
    int entryTerm;
    char operandName;
    char operandValue;
    char operation;
};

struct state_machine_variable {
    char variable;
    int val;
};


