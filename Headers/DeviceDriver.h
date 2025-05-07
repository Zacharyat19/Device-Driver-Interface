class DeviceDriver
{
    public:
        virtual void readData()   = 0;
        virtual void writeData()  = 0;
        virtual void shutdown()   = 0;
        virtual      ~DeviceDriver() {}
};