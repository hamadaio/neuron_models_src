#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _CaH_reg(void);
extern void _CaT_reg(void);
extern void _Cad_reg(void);
extern void _Kca_reg(void);
extern void _Kv1_axonal_M8_with_q10_reg(void);
extern void _Kv1_soma_reg(void);
extern void _Kv7_state_AIS_reg(void);
extern void _Kv7_state_axon_reg(void);
extern void _h_reg(void);
extern void _kv_reg(void);
extern void _na8st_as_na_q10_gna_reg(void);
extern void _nap_reg(void);
extern void _nax8st_as_nax_q10_gnais_reg(void);
extern void _nax8st_as_nax_q10_gnax_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," CaH.mod");
    fprintf(stderr," CaT.mod");
    fprintf(stderr," Cad.mod");
    fprintf(stderr," Kca.mod");
    fprintf(stderr," Kv1_axonal_M8_with_q10.mod");
    fprintf(stderr," Kv1_soma.mod");
    fprintf(stderr," Kv7_state_AIS.mod");
    fprintf(stderr," Kv7_state_axon.mod");
    fprintf(stderr," h.mod");
    fprintf(stderr," kv.mod");
    fprintf(stderr," na8st_as_na_q10_gna.mod");
    fprintf(stderr," nap.mod");
    fprintf(stderr," nax8st_as_nax_q10_gnais.mod");
    fprintf(stderr," nax8st_as_nax_q10_gnax.mod");
    fprintf(stderr, "\n");
  }
  _CaH_reg();
  _CaT_reg();
  _Cad_reg();
  _Kca_reg();
  _Kv1_axonal_M8_with_q10_reg();
  _Kv1_soma_reg();
  _Kv7_state_AIS_reg();
  _Kv7_state_axon_reg();
  _h_reg();
  _kv_reg();
  _na8st_as_na_q10_gna_reg();
  _nap_reg();
  _nax8st_as_nax_q10_gnais_reg();
  _nax8st_as_nax_q10_gnax_reg();
}
