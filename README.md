# ISP Customer Chooser

A C++ utility to determine if an Internet Service Provider (ISP) venture into a neighborhood is financially viable given bandwidth constraints and maintenance costs.

## Overview
The application evaluates a set of potential customers, each with a specific bandwidth requirement and a price they are willing to pay. It determines if a subset of these customers can be served such that:
1. **Bandwidth Constraint**: Total bandwidth used does not exceed the maximum available capacity.
2. **Financial Viability**: Total revenue generated from selected customers meets or exceeds the maintenance costs.

## Building the Project
This project uses CMake. To build it, run the following commands from the project root:

```bash
cmake -B build
cmake --build build
```

## Usage
The test cases are currently defined directly in `main.cpp`. You can modify the following variables to test different scenarios:
- `numCust`: Number of potential customers.
- `maxBandwidth`: Total bandwidth capacity.
- `maintenanceCost`: Minimum revenue required for viability.
- `reqBand[]`: Array of bandwidth requests per customer.
- `reqPrice[]`: Array of prices customers are willing to pay.

After building, run the executable:
```bash
./build/untitled3
```

## Algorithm
The current implementation in `a1.hpp` uses a greedy approach to select customers based on their bandwidth-to-price ratio, attempting to satisfy the maintenance cost while staying within the bandwidth limit.
