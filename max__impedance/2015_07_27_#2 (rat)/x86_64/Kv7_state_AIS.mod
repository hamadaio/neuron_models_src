TITLE Axonal Kv7-currentCOMMENTModel of cortical pyramidal neuron Kv7/M currents. The kinetic parameters, voltage-dependence and reversal potentials are estimated by fitting and analysis of axonal K7/M-currents at 33 - 34 degrees celsius. MHP Kole, Canberra, 2008 and Amsterdam, 2011. Parameter values of the AIS, 2012ENDCOMMENTUNITS {	(mA) = (milliamp)	(mV) = (millivolt)	(pS) = (picosiemens)	(um) = (micron)}INDEPENDENT {t FROM 0 TO 1 WITH 1 (ms)}PARAMETER {		dt	(ms)	v 	(mV)
	celsius	(degC)

	Ca	=	0.03104
	Cb	= 	0.00383
	za	=	0.604
	zb	=	0.909	 
	gbar	= 	20 	(pS/um2)	: 0.002 mho/cm2

	temp	= 	33	(degC)		: original temp 	q10  	= 	3			: temperature sensitivity}NEURON {	SUFFIX Kv7_AIS	USEION k READ ek WRITE ik	RANGE gbar, ik}

STATE { 
	m
 }

ASSIGNED {	ik (mA/cm2)	gk (pS/um2)	ek (mV)			tadj
}INITIAL {	m=alpha(v)/(beta(v)+alpha(v))
	tadj = q10^((celsius - temp)/10)	}

BREAKPOINT {	SOLVE state METHOD cnexp	tadj = q10^((celsius - temp)/10)	:this repeated calculation allows changes in temperature during the simulation	ik = (1e-4) * gbar * m * (v-ek)}FUNCTION alpha(v(mV)) {	alpha = tadj*Ca*exp(za*v*0.037788)	}FUNCTION beta(v(mV)) {	beta = tadj*Cb*exp(-zb*v*0.037788)			}DERIVATIVE state {    	m' = (1-m)*alpha(v) - m*beta(v)}