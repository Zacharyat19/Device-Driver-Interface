# Device Driver Interface (C++)

## Overview

This project implements an abstract **Device Driver Interface** in C++ to interact with various hardware devices such as USB, Network, and Disk devices. The system uses polymorphism to provide a consistent interface for device operations, making it easy to extend for additional hardware.

## Key Features:
- **Abstract Device Interface**: Common methods for initializing, reading, writing, and shutting down devices.
- **Extensible**: Add new drivers (e.g., for different hardware) without modifying core logic.
- **Modular**: Supports USB, Network, and Disk drivers as examples.


## How It Works

The base `DeviceDriver` class defines the common interface:
```cpp
class DeviceDriver {
public:
    virtual void initialize() = 0;
    virtual void readData() = 0;
    virtual void writeData(const std::string& data) = 0;
    virtual void shutdown() = 0;
    virtual ~DeviceDriver() {}
};
```

Derived classes implement the interface:
```cpp
class USBDriver : public DeviceDriver {
    void initialize() override { /* USB init */ }
    void readData() override { /* Read from USB */ }
    void writeData(const std::string& data) override { /* Write to USB */ }
    void shutdown() override { /* Shutdown USB */ }
};
```

## How to Run
1. Clone Repo
```bash
git clone https://github.com/Zacharyat19/Device-Driver-Interface.git
cd device-driver-interface
```
2. Compile
```bash
g++ device_driver_interface src/main.cpp
```
3. Run
```bash
./device_driver_interface
```
