cmake_minimum_required(VERSION 3.5)

project(ds_algo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    ds_algo
    main.cpp
    palindrome.cpp
    armstrong_number.cpp
    strong_number.cpp
    factorial.cpp prime.cpp
    bitwise_addition.cpp
    fibonacci.cpp
    floydsTraingle.cpp
    binary_to_decimal.cpp
    perfect_number.cpp
    rowsum_colsum.cpp
    find_min_max.cpp
)
