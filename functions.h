#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "database.h"
#include <sqlite3.h>
#include <stddef.h>

void freeEntityList(struct EntityList *entityList);

void getAllAccounts(sqlite3* db);

void Withdraw(sqlite3 *db);

void Deposit(sqlite3 *db);

void Menu(sqlite3 *db);

#endif  
