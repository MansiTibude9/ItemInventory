#include<iostream>
class ItemHeader
{
int numberOfRecords;
int lastGeneratedCode;
int streamSize;
void serialize();
void deserialize();
void streamSize(streamSize)
{
this.streamSize = streamSize;
}
int streamSize()
{
return this.streamSize;
}
void numberOfRecords(numberOfRecords)
{
this.numberOfRecords = numberOfRecords;
}
int numberOfRecords()
{
return this.numberOfRecords;
}
void lastGeneratedCode(lastGeneratedCode)
{
this.lastGeneratedCode = lastGeneratedCode; 
}
int lastGeneratedCode()
{
return this.lastGeneratedCode;
}
}