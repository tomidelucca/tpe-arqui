//
//  interrupt.h
//  TomiOS
//
//  Created by Tomas De Lucca on 24/5/15.
//  Copyright (c) 2015 Tomas De Lucca. All rights reserved.
//

#ifndef __TomiOS__interrupt__
#define __TomiOS__interrupt__

extern void keyboard_handler(void);
extern void load_idt(struct IDTDesc *idt_ptr);
extern void sti_enable();
extern void cli_enable();

#endif /* defined(__TomiOS__interrupt__) */
