#include <16f887.h>
#device adc = 10
#use DELAY(clock = 4000000)
#byte porta = 0x05
#fuses xt, NOPROTECT, NOWDT, NOBROWNOUT, PUT, NOLVP

#byte porta = 0x05

// variables generales
int delay = 200; // variable de tiempo anti-rebote 

int main()
{
    setup_adc(adc_clock_internal); //configuración de puerto analogo
    setup_adc(all_analog);
}
