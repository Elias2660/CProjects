#pragma once
enum Status
{
    Pending,
    Approved,
    Canceled
};

enum class FileError
{
    notfound,
    ok
};

enum class NetworkError
{
    disconnected,
    ok
};