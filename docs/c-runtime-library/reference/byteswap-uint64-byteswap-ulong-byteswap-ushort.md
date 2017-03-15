---
title: "_byteswap_uint64, _byteswap_ulong, _byteswap_ushort | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_byteswap_uint64"
  - "_byteswap_ulong"
  - "_byteswap_ushort"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-utility-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "byteswap_ulong"
  - "_byteswap_ulong"
  - "byteswap_uint64"
  - "_byteswap_ushort"
  - "_byteswap_uint64"
  - "byteswap_ushort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_byteswap_uint64 (funzione)"
  - "_byteswap_ulong (funzione)"
  - "_byteswap_ushort (funzione)"
  - "scambio di byte"
  - "byte, scambio"
  - "byteswap_uint64 (funzione)"
  - "byteswap_ulong (funzione)"
  - "byteswap_ushort (funzione)"
  - "scambio di byte"
ms.assetid: 83bda211-f02f-4cf0-8a78-d6de1f175970
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# _byteswap_uint64, _byteswap_ulong, _byteswap_ushort
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inverte l'ordine di byte in un intero.  
  
## Sintassi  
  
```  
unsigned short _byteswap_ushort (  
   unsigned short val  
);  
unsigned long _byteswap_ulong (  
   unsigned long val  
);  
unsigned __int64 _byteswap_uint64 (  
   unsigned __int64 val  
);  
```  
  
#### Parametri  
 `val`  
 L'intero di cui invertire l'ordine dei byte.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_byteswap_ushort`|\<stdlib.h\>|  
|`_byteswap_ulong`|\<stdlib.h\>|  
|`_byteswap_uint64`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_byteswap.c  
#include <stdlib.h>  
  
int main()  
{  
   unsigned __int64 u64 = 0x0102030405060708;  
   unsigned long ul = 0x01020304;  
  
   printf("byteswap of %I64x = %I64x\n", u64, _byteswap_uint64(u64));  
   printf("byteswap of %Ix = %Ix", ul, _byteswap_ulong(ul));  
}  
```  
  
  **byteswap di 102030405060708 \= 807060504030201**  
**byteswap di 1020304 \= 4030201**   
## Vedere anche  
 [Routine di runtime per categoria](../../c-runtime-library/run-time-routines-by-category.md)