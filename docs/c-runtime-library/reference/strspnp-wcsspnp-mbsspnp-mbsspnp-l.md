---
title: "_strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsspnp"
  - "_wcsspnp"
  - "_mbsspnp_l"
  - "_strspnp"
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
apitype: "DLLExport"
f1_keywords: 
  - "_tcsspnp"
  - "_mbsspnp"
  - "strspnp"
  - "_ftcsspnp"
  - "_mbsspnp_l"
  - "wcsspnp"
  - "mbsspnp_l"
  - "_wcsspnp"
  - "_strspnp"
  - "mbsspnp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mbsspnp (funzione)"
  - "_mbsspnp_l (funzione)"
  - "_strspnp (funzione)"
  - "_tcsspnp (funzione)"
  - "_wcsspnp (funzione)"
  - "mbsspnp (funzione)"
  - "mbsspnp_l (funzione)"
  - "strspnp (funzione)"
  - "tcsspnp (funzione)"
  - "wcsspnp (funzione)"
ms.assetid: 1ce18100-2edd-4c3b-af8b-53f204d80233
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# _strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Puntatore a una stringa di caratteri con terminazione di tipo null che contiene lo spazio dei nomi nel quale si trova l'attributo.  
  
> [!IMPORTANT]
>  `_mbsspnp` e `_mbsspnp_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *_strspnp(  
   const char *str,  
   const char *charset  
);  
wchar_t *_wcsspnp(  
   const unsigned wchar_t *str,  
   const unsigned wchar_t *charset  
);  
unsigned char *_mbsspnp(  
   const unsigned char *str,  
   const unsigned char *charset  
);  
unsigned char *_mbsspnp_l(  
   const unsigned char *str,  
   const unsigned char *charset,  
   _locale_t locale  
);  
  
```  
  
#### Parametri  
 `str`  
 Stringa da cercare con terminazione null.  
  
 `charset`  
 Set di caratteri con terminazione null.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `_strspnp`, `_wcsspnp`e `_mbsspnp` restituiscono un puntatore al primo carattere in `str` che non appartiene al set di caratteri in `charset`*.* Ognuna di queste funzioni restituisce `NULL` se `str` è costituita esclusivamente da caratteri del `charset`*.* Per ognuna di queste routine, non esiste alcun valore di ritorno che indichi un errore.  
  
## Note  
 La funzione `_mbsspnp` restituisce un puntatore al primo carattere multibyte in `str` che non appartiene al set di caratteri in `charset`.  `_mbsspnp` riconosce le sequenze di caratteri multibyte come indicato dalla [tabella codici multibyte](../../c-runtime-library/code-pages.md) in uso.  La ricerca non include il carattere di terminazione null.  
  
 Se `str` o `charset` è un puntatore null, questa funzione richiamerà il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsspnp`|`_strspnp`|`_mbsspnp`|`_wcsspnp`|  
  
 `_strspnp` e `_wcsspnp` sono versioni a caratteri di tipo "wide" e a caratteri a singolo byte di `_mbsspnp`.  In caso contrario le funzioni `_strspnp` e `_wcsspnp` si comportano in modo identico a `_mbsspnp` ; vengono fornite solo per questo mapping e non devono essere utilizzate per qualsiasi altro motivo.  Per ulteriori informazioni, vedere [Utilizzo delle mappature di Testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mappature di Testo generico](../../c-runtime-library/generic-text-mappings.md).  
  
 `_mbsspnp_l` è identico con la differenza che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsspnp`|\<mbstring.h\>|  
|`_strspnp`|\<tchar.h\>|  
|`_wcsspnp`|\<tchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_mbsspnp.c  
#include <mbstring.h>  
#include <stdio.h>  
  
int main( void ) {  
   const unsigned char string1[] = "cabbage";  
   const unsigned char string2[] = "c";  
   unsigned char *ptr = 0;  
   ptr = _mbsspnp( string1, string2 );  
   printf( "%s\n", ptr);  
}  
```  
  
## Output  
  
```  
abbage  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)   
 [strncat\_s, \_strncat\_s\_l, wcsncat\_s, \_wcsncat\_s\_l, \_mbsncat\_s, \_mbsncat\_s\_l](../../c-runtime-library/reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy\_s, \_strncpy\_s\_l, wcsncpy\_s, \_wcsncpy\_s\_l, \_mbsncpy\_s, \_mbsncpy\_s\_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)