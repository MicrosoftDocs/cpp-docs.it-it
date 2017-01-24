---
title: "_swab | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_swab"
  - "stdlib/_swab"
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
  - "_swab"
  - "stdlib/_swab"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_swab (funzione)"
  - "byte, scambio"
  - "swab (funzione)"
  - "scambio di byte"
ms.assetid: 017142f2-050c-4f6a-8b49-6b094f58ec94
caps.latest.revision: 18
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _swab
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scambia i byte.  
  
## Sintassi  
  
```  
void _swab(  
   char *src,  
   char *dest,  
   int n   
);  
```  
  
#### Parametri  
 `src`  
 Dati da copiare e scambiare.  
  
 `dest`  
 Percorso di archiviazione per i dati scambiati.  
  
 `n`  
 Numero di byte da copiare e scambiare.  
  
## Note  
 Se `n` è pari, la funzione `_swab` copia `n` byte da `src`, scambia ogni coppia di byte adiacenti e archivia il risultato in `dest`.  Se `n` è dispari, `_swab` copia e scambia i primi `n-1` byte di `src`.  `_swab` è in genere utilizzato per preparare i dati binari per il trasferimento in un computer che utilizza un ordinamento dei byte diverso.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_swab`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_swab.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
char from[] = "BADCFEHGJILKNMPORQTSVUXWZY";  
char to[] =   "..........................";  
  
int main()  
{  
    printf( "Before: %s\n        %s\n\n", from, to );  
    _swab( from, to, sizeof( from ) );  
    printf( "After:  %s\n        %s\n\n", from, to );  
}  
```  
  
  **Before: BADCFEHGJILKNMPORQTSVUXWZY**  
 **..........................**  
**After: BADCFEHGJILKNMPORQTSVUXWZY**  
 **ABCDEFGHIJKLMNOPQRSTUVWXYZ**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)