// Composition root entry point. The architecture lives in the deps of
// //bigapp/app:server, not in this file — main() only satisfies the linker so
// the graph has a real binary at its apex. A cc_binary is auto-detected as a
// composition root by the aspect (§4.4).
int main() { return 0; }
