: $Id: util.mod,v 1.4 2013/09/29 19:23:45 ted Exp ted $

: Allows values computed elsewere to be mapped onto range variables
: so they can be plotted in RangeVarPlots and PlotShapes

NEURON {
  SUFFIX util : for "utility"
  RANGE vmax, vsmax, imax, zin, dist, surf
}

ASSIGNED {
  vmax (millivolt) : max depol in dendritic shaft
  vsmax (millivolt) : max depol in soma
  imax (nanoamp) : max current locally
  zin (megohm) : transfer impedance
  dist (micron) : distance of this point from a reference location in the cell
  surf (micron2) : surface diam*pi*L/nseg
  
}
