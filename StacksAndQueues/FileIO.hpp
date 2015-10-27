#ifndef FILEIO_HPP
#define FILEIO_HPP
#include "Stack.hpp"
#include "Queue.hpp"
#include "Cell.hpp"
#include <stdlib.h>
/* Definition of FileIO
 * Uses Stacks and Queues to work.
 * Methods undefined for now.
 */
class FileIO
{
public:
    FileIO();
    void processNumber(int, Stack*, Queue*, Queue*);
    void readFile(Stack*, Queue*, Queue*);
    void writeFile(Stack*, Queue*, Queue*);
};

#endif // FILEIO_HPP
