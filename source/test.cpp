#include "include/Person.hpp"
#include "include/Tweeter.hpp"
#include "include/Status.hpp"

int main(int argc, char *argv[])
{
    Person p1("Mohammed", "Belgoumri", 21); 
    {
        std::cout << "Entering inner block" << std::endl;
        Tweeter t1("Fatima", "Belgoumri", 18, "@fatiBelgou");
        std::string name = t1.getName();
        std::cout << "Exiting inner block" << std::endl;
    }
    std::cout << "After innermost block" << " " << std::endl;
    std::string name = p1.getName();
    Status s = PENDING;
    FileError fe = FileError::NOTFOUND;
    fe = FileError::OK;
    NetworkError ne = NetworkError::NOTFOUND;
    ne = NetworkError::OK;
    return EXIT_SUCCESS;
}