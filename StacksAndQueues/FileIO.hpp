#ifndef FILEIO_HPP
#define FILEIO_HPP
#include "Stack.hpp"
#include "Queue.hpp"
#include "Cell.hpp"
/* Definition of FileIO
 * Uses Stacks and Queues to work.
 * Methods undefined for now.
 */
class FileIO
{
public:
    FileIO();
    void readFile(Stack*, Queue*, Queue*);
    void writeFile(Stack*, Queue*, Queue*);
    void processNumber(int, Stack*, Queue*, Queue*);
};

#endif // FILEIO_HPP
