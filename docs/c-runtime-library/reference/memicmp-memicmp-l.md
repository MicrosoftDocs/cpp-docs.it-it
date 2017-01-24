---
title: "_memicmp, _memicmp_l | Microsoft Docs"
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
  - "_memicmp_l"
  - "_memicmp"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_memicmp"
  - "memicmp_l"
  - "_memicmp_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_memicmp (funzione)"
  - "_memicmp_l (funzione)"
  - "memicmp (funzione)"
  - "memicmp_l (funzione)"
ms.assetid: 0a6eb945-4077-4f84-935d-1aaebe8db8cb
caps.latest.revision: 19
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _memicmp, _memicmp_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronta i caratteri in due buffer \(senza distinzione tra maiuscole e minuscole\).  
  
## Sintassi  
  
```  
int _memicmp(  
   const void *buf1,  
   const void *buf2,  
   size_t count   
);  
int _memicmp_l(  
   const void *buf1,  
   const void *buf2,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `buf1`  
 Primo buffer.  
  
 `buf2`  
 Secondo buffer.  
  
 `count`  
 Numero di caratteri  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Il valore restituito indica la relazione tra i buffer.  
  
|Valore restituito|Relazione tra il primo conteggio byte di buf1 e buf2|  
|-----------------------|----------------------------------------------------------|  
|\< 0|`buf1` minore di `buf2`.|  
|0|`buf1` uguale a `buf2`.|  
|\> 0|`buf1` è maggiore di `buf2`.|  
|`_NLSCMPERROR`|si è verificato un errore.|  
  
## Note  
 La funzione `_memicmp` confronta byte a byte i primi caratteri `count` dei buffer `buf1` e `buf2`.  Nel confronto non viene effettuata alcuna distinzione tra maiuscole e minuscole.  
  
 Se `buf1` o `buf2` è un puntatore null, questa funzione richiamerà un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `_NLSCMPERROR` e imposta `errno` su `EINVAL`.  
  
 `_memicmp` utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; `_memicmp_l` è identica, ad eccezione del fatto che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_memicmp`|\<memory.h\> o \<string.h\>|  
|`_memicmp_l`|\<memory.h\> o \<string.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_memicmp.c  
// This program uses _memicmp to compare  
// the first 29 letters of the strings named first and  
// second without regard to the case of the letters.  
  
#include <memory.h>  
#include <stdio.h>  
#include <string.h>  
  
int main( void )  
{  
   int result;  
   char first[] = "Those Who Will Not Learn from History";  
   char second[] = "THOSE WHO WILL NOT LEARN FROM their mistakes";  
   // Note that the 29th character is right here ^  
  
   printf( "Compare '%.29s' to '%.29s'\n", first, second );  
   result = _memicmp( first, second, 29 );  
   if( result < 0 )  
      printf( "First is less than second.\n" );  
   else if( result == 0 )  
      printf( "First is equal to second.\n" );  
   else if( result > 0 )  
      printf( "First is greater than second.\n" );  
}  
```  
  
  **Confrontare "Coloro che non impareranno da" con "COLORO CHE NON IMPARERANNO DA"**  
**La prima è uguale alla seconda.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)   
 [\_memccpy](../../c-runtime-library/reference/memccpy.md)   
 [memchr, wmemchr](../../c-runtime-library/reference/memchr-wmemchr.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [memcpy, wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)   
 [memset, wmemset](../../c-runtime-library/reference/memset-wmemset.md)   
 [\_stricmp, \_wcsicmp, \_mbsicmp, \_stricmp\_l, \_wcsicmp\_l, \_mbsicmp\_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)