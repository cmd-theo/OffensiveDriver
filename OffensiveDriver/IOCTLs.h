#pragma once

#define RED_OCTOBER_TAG		'BEEF'
#define RED_OCTOBER_DEVICE	0x8000

#define RED_OCTOBER_UNPROTECT_PROCESS			CTL_CODE(RED_OCTOBER_DEVICE, 0x800, METHOD_NEITHER, FILE_ANY_ACCESS)
#define RED_OCTOBER_PROTECT_PROCESS				CTL_CODE(RED_OCTOBER_DEVICE, 0x801, METHOD_NEITHER, FILE_ANY_ACCESS)
#define RED_OCTOBER_PROCESS_PRIVILEGE			CTL_CODE(RED_OCTOBER_DEVICE, 0x802, METHOD_NEITHER, FILE_ANY_ACCESS)

#define RED_OCTOBER_ENUM_PROCESS_CALLBACKS		CTL_CODE(RED_OCTOBER_DEVICE, 0x810, METHOD_NEITHER, FILE_ANY_ACCESS)
#define RED_OCTOBER_ZERO_PROCESS_CALLBACK		CTL_CODE(RED_OCTOBER_DEVICE, 0x811, METHOD_NEITHER, FILE_ANY_ACCESS)
#define RED_OCTOBER_ADD_PROCESS_CALLBACK		CTL_CODE(RED_OCTOBER_DEVICE, 0x812, METHOD_NEITHER, FILE_ANY_ACCESS)

#define RED_OCTOBER_ENUM_DSE					CTL_CODE(RED_OCTOBER_DEVICE, 0x820, METHOD_NEITHER, FILE_ANY_ACCESS)
#define RED_OCTOBER_DISABLE_DSE					CTL_CODE(RED_OCTOBER_DEVICE, 0x821, METHOD_NEITHER, FILE_ANY_ACCESS)
#define RED_OCTOBER_ENABLE_DSE					CTL_CODE(RED_OCTOBER_DEVICE, 0x822, METHOD_NEITHER, FILE_ANY_ACCESS)