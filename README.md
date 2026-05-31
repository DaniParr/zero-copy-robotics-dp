# Zero Copy Robotics Data Pipeline
This is a project intended to explore C++ 20 and C++ 23. The aim is to build a robotics middleware for high-frequency sensor fusion that transports data from sensors to downstream consumers with:
- Zero-copy messaging
- Deterministic latency
- Minimal allocations
- Thread-safe async execution
- Timestamp synchronization
- Pipeline composition
- Backpressure handling
- Strong type safety

## C++ Environment
- CMake --- 3.28.3
- G++   --- 14.2.0
- Ninja --- 1.11.1

## How to Compile & Run (At the moment...)
1. Clone the repository
```bash
git clone https://github.com/DaniParr/zero-copy-robotics-dp.git
```
2. Create build folder with cmake
```bash
cmake -B build -G Ninja
```
3. Build the project
```bash
cmake --build build
```
4. Run the executable
```bash
./build/zerocopy
```
