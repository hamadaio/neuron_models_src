#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _minmax_reg(void);
extern void _util_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," minmax.mod");
    fprintf(stderr," util.mod");
    fprintf(stderr, "\n");
  }
  _minmax_reg();
  _util_reg();
}
