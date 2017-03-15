---
title: "_memccpy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_memccpy"
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
  - "_memccpy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_memccpy (funzione)"
  - "memccpy (funzione)"
ms.assetid: 9a2337df-6e85-4eba-b247-dd0532f45ddb
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _memccpy
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I caratteri vengono copiati da un buffer.  
  
## Sintassi  
  
```  
  
      void *_memccpy(  
   void *dest,  
   const void *src,  
   int c,  
   size_t count   
);  
```  
  
#### Parametri  
 *dest*  
 Puntatore alla destinazione.  
  
 *src*  
 Puntatore al sorgente.  
  
 `c`  
 L'ultimo carattere da copiare.  
  
 *count*  
 Numero di caratteri  
  
## Valore restituito  
 Se il carattere `c` viene copiato, `_memccpy` restituisce un puntatore a char *in dest* immediatamente al carattere successivo.  Se `c` non viene copiato, restituisce **NULL**.  
  
## Note  
 La funzione `_memccpy` copia 0 o più caratteri di *src* a *dest*, fermandosi quando il carattere `c` è stato copiato o quando i caratteri di *count* sono stati copiati, indipendentemente dall'ordine.  
  
 **Nota sulla sicurezza** Assicurarsi che il buffer di destinazione sia della stessa dimensione o di una dimensione maggiore del buffer di origine.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_memccpy`|\<memory.h\> o \<string.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_memccpy.c  
  
#include <memory.h>  
#include <stdio.h>  
#include <string.h>  
  
char string1[60] = "The quick brown dog jumps over the lazy fox";  
  
int main( void )  
{  
   char buffer[61];  
   char *pdest;  
  
   printf( "Function: _memccpy 60 characters or to character 's'\n" );  
   printf( "Source: %s\n", string1 );  
   pdest = _memccpy( buffer, string1, 's', 60 );  
   *pdest = '\0';  
   printf( "Result: %s\n", buffer );  
   printf( "Length: %d characters\n", strlen( buffer ) );  
}  
```  
  
## Output  
  
```  
Function: _memccpy 60 characters or to character 's'  
Source: The quick brown dog jumps over the lazy fox  
Result: The quick brown dog jumps  
Length: 25 characters  
```  
  
## Equivalente .NET Framework  
  
-   [System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx)  
  
-   [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)  
  
## Vedere anche  
 [Modifica del buffer](../../c-runtime-library/buffer-manipulation.md)   
 [memchr, wmemchr](../../c-runtime-library/reference/memchr-wmemchr.md)   
 [memcmp, wmemcmp](../../c-runtime-library/reference/memcmp-wmemcmp.md)   
 [memcpy, wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)   
 [memset, wmemset](../../c-runtime-library/reference/memset-wmemset.md)