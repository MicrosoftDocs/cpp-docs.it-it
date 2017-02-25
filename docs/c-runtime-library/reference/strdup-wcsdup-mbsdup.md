---
title: "_strdup, _wcsdup, _mbsdup | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_strdup"
  - "_mbsdup"
  - "_wcsdup"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tcsdup"
  - "mbsdup"
  - "_mbsdup"
  - "_strdup"
  - "_ftcsdup"
  - "_wcsdup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "wcsdup (funzione)"
  - "ftcsdup (funzione)"
  - "_ftcsdup (funzione)"
  - "mbsdup (funzione)"
  - "strdup (funzione)"
  - "_strdup (funzione)"
  - "_wcsdup (funzione)"
  - "copia di stringhe"
  - "duplicazione di stringhe"
  - "copia di stringhe [C++]"
  - "_mbsdup (funzione)"
  - "duplicazione di stringhe [C++]"
  - "tcsdup (funzione)"
  - "_tcsdup (funzione)"
ms.assetid: 8604f8bb-95e9-45d3-93ef-20397ebf247a
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# _strdup, _wcsdup, _mbsdup
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Duplica le stringhe.  
  
> [!IMPORTANT]
>  `_mbsdup` non può essere usato nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *_strdup(  
   const char *strSource   
);  
wchar_t *_wcsdup(  
   const wchar_t *strSource   
);  
unsigned char *_mbsdup(  
   const unsigned char *strSource   
);  
```  
  
#### Parametri  
 `strSource`  
 Stringa di origine con terminazione null.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a una posizione di archiviazione per la stringa copiata oppure `NULL` se l'archiviazione non può essere allocata.  
  
## Note  
 La funzione `_strdup` chiama [malloc](../../c-runtime-library/reference/malloc.md) per allocare spazio di archiviazione per una copia di `strSource`, che quindi copia `strSource` nello spazio allocato.  
  
 `_wcsdup` e `_mbsdup` sono le versioni a caratteri wide e a caratteri multibyte di `_strdup`. Gli argomenti e il valore restituito di `_wcsdup` sono stringhe con caratteri wide, mentre quelli di `_mbsdup` sono stringhe con caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsdup`|`_strdup`|`_mbsdup`|`_wcsdup`|  
  
 Poiché `_strdup` chiama `malloc` per allocare spazio di archiviazione per la copia di `strSource`, è consigliabile sempre rilasciare la memoria chiamando la routine [free](../../c-runtime-library/reference/free.md) sul puntatore che viene restituito dalla chiamata a `_strdup`.  
  
 Se `_DEBUG` e `_CRTDBG_MAP_ALLOC` sono definiti, `_strdup` e `_wcsdup` vengono sostituiti dalle chiamate a `_strdup_dbg` e `_wcsdup_dbg` per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [\_strdup\_dbg, \_wcsdup\_dbg](../../c-runtime-library/reference/strdup-dbg-wcsdup-dbg.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strdup`|\<string.h\>|  
|`_wcsdup`|\<string.h\> o \<wchar.h\>|  
|`_mbsdup`|\<mbstring.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strdup.c  
  
#include <string.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char buffer[] = "This is the buffer text";  
   char *newstring;  
   printf( "Original: %s\n", buffer );  
   newstring = _strdup( buffer );  
   printf( "Copy:     %s\n", newstring );  
   free( newstring );  
}  
```  
  
```Output  
Original: This is the buffer text Copy:     This is the buffer text  
```  
  
## Equivalente .NET Framework  
 [System::String::Clone](https://msdn.microsoft.com/en-us/library/system.string.clone.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [memset, wmemset](../../c-runtime-library/reference/memset-wmemset.md)   
 [strcat, wcscat, \_mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strncat, \_strncat\_l, wcsncat, \_wcsncat\_l, \_mbsncat, \_mbsncat\_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy, \_strncpy\_l, wcsncpy, \_wcsncpy\_l, \_mbsncpy, \_mbsncpy\_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)