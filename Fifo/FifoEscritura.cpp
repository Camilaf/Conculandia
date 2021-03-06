#include "FifoEscritura.h"

FifoEscritura :: FifoEscritura(const string nombre) : Fifo(nombre) {
}

FifoEscritura :: ~FifoEscritura () {
}

void FifoEscritura :: abrir() {
  this->fd = open(this->nombre.c_str(), O_WRONLY);
  if ((this->fd < 0) && (errno != EINTR)) {
    cerr << "Error al abrir el fifo: " << strerror(errno) << endl;
  }
}

ssize_t FifoEscritura :: escribir(const void* buffer, const ssize_t buffsize) const {
  if (this->fd < 0) {
    return -1;
  }
  return write(this->fd, buffer, buffsize);
}
