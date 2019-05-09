#pragma once
#include "Feature.hpp"

#include "Command.hpp"
#include "Utils.hpp"

class OffsetFinder : public Feature {
private:
    int sendPropSize;

public:
    OffsetFinder();
    void ServerSide(const char* className, const char* propName, int* offset);
    void ClientSide(const char* className, const char* propName, int* offset);

private:
    int16_t Find(SendTable* table, const char* propName);
    int16_t Find(RecvTable* table, const char* propName);
};

extern OffsetFinder* offsetFinder;

extern Command sar_find_serverclass;
extern Command sar_find_clientclass;
