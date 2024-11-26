/*
 * Topic :                                   Native Startup File For stm32f103c6     
*/  

extern int main(void); 

#define          STACK_START_SP             0x20001000 

typedef          unsigned int               uint32_t;

void Rest_Handler(void)
{
	main(); 

    return;	
}  
void NMI_Handler(void)
{
	Rest_Handler();

    return;		
} 
void H_Fault_Handler(void)
{
	Rest_Handler();      

    return;	
} 
void MM_Fault_Handler(void)
{
	Rest_Handler();

    return;		
} 
void Bus_Handler(void)
{
	Rest_Handler();

    return;		
}
 void Usage_Fault_Handler(void)
{
	Rest_Handler(); 

    return;		
} 

uint32_t vectors[] __attribute__((section(".vectors"))) = {
	STACK_START_SP, 
	(uint32_t) &Rest_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_Fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Handler,
	(uint32_t) &Usage_Fault_Handler,
};     
    

	
	                 
					  