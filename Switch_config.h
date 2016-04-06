/*
 * TSW_config.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: muslim
 */

#ifndef _TSW_CONFIG_H_
#define _TSW_CONFIG_H_

/*Comment!= Choose Pin for the switch */
#define Switch_u8SW1PIN    DIO_u8Pin7

/*Comment!= Choose the active mode for the switch */
/*Range!= Switch_u8SwACTIVEHIGH ~ Switch_u8SwACTIVELOW */
#define Switch_u8SWMODE 	Switch_u8SwACTIVEHIGH
/*Comment!= Choose the press mode for the switch */
/*Range!= Switch_u8SwSingleMode ~ Switch_u8SwMultiMode */
#define Switch_u8PressMode	Switch_u8SwMultiMode



#endif /* TSW_CONFIG_H_ */
