void lif(int *skpikes, float *voltages, float *current){

float V_reset = -0.080; % -80mV
float V_e = -0.075; % -75mV
float V_th = -0.040; % -40mV
float Rm = 10e6; % membrane resistance
float tau_m = 10e-3; % membrane time constant


float dt = 0.0002;
//T = 0:dt:1; % 1 second simulation
int count = 1/0.0002 ;
voltages[0] =  V_reset
//Vm(1) = V_reset;
float Im = 5e-9;

for(int t =0;t<count; t++ ){

	    if (voltages[t] > V_th){

        	voltages[t+1] = V_reset;
        	spikes[t] = 1 
	    }
    	else{

    		voltages[t+1] = voltages[t] + dt * ( -(voltages[t] - V_e) +  Im * Rm) / tau_m;
    		spikes[t] = 0
    	}
        




} 

	
}