#include<stdio.h>
#include<stdint.h>

typedef struct 
{
		
		uint32_t PS   ;
		uint32_t PE   ;
		uint32_t SRE  ;
		uint32_t PFE  ;
		uint32_t ODE  ;
		uint32_t DSSE ;
		uint32_t MUX  ;
		uint32_t IRQC ;
		uint32_t ISF  ;


}PCR_REGISTER; 
PCR_REGISTER reg(PCR_REGISTER* temp)
{
	
}
//Register MASK location of each bit field
#define PCR_PS_MASK   			(1u)
#define PCR_PE_MASK   			(2u)
#define PCR_SRE_MASK  			(4u)
#define PCR_PFE_MASK  			(10u)
#define PCR_ODE_MASK  			(20u)
#define PCR_DSE_MASK  			(40u)
#define PCR_MUX_MASK  			(700u)
#define PCR_LK_MASK  			(8000u)
#define PCR_IRQC_MASK 			(F0000u)
#define PCR_ISF_MASK  			(1000000u)
// Register SHIFT location of each bit field
#define PRC_PS_SHIFT             0
#define PRC_PE_SHIFT             1
#define PRC_SRE_SHIFT            2
#define PRC_PFE_SHIFT            4
#define PRC_ODE_SHIFT            5
#define PRC_DSE_SHIFT            6
#define PRC_MUX_SHIFT            8
#define PRC_LK_SHIFT             15
#define PRC_IRQC_SHIFT           16
#define PRC_ISF_SHIFT            24
//WIRTE MACRO TO SET IRQC TO 3
#define SET_PRC_IRQC_3(x) 		(x|=(3<<PRC_IRQC_SHIFT)) 
int main()
{	
//	int Value;
//    SET_PRC_IRQC_3(Value);
//    printf("%x\n", Value);
	return 0 ; 
} 
