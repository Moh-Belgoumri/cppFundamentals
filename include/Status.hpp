#ifndef __STATUS__H__
#define __STATUS__H__

enum Status
{
    PENDING,
    APPROVED,
    CANCELED
};

enum class FileError
{
    NOTFOUND,
    OK
};

enum class NetworkError
{
    NOTFOUND,
    OK
};
#endif // __STATUS__H__