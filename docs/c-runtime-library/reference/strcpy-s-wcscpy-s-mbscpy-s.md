---
title: "strcpy_s, wcscpy_s, _mbscpy_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcscpy_s"
  - "_mbscpy_s"
  - "strcpy_s"
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
  - "strcpy_s"
  - "_mbscpy_s"
  - "_tcscpy_s"
  - "wcscpy_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "strcpy_s (funzione)"
  - "_tcscpy_s (funzione)"
  - "_mbscpy_s (funzione)"
  - "copia di stringhe"
  - "copia di stringhe [C++]"
  - "tcscpy_s (funzione)"
  - "wcscpy_s (funzione)"
ms.assetid: 611326f3-7929-4a5d-a465-a4683af3b053
caps.latest.revision: 41
caps.handback.revision: 41
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strcpy_s, wcscpy_s, _mbscpy_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia una stringa. Queste versioni di [strcpy, wcscpy, \_mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md) con miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  `_mbscpy_s` non può essere usato nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
errno_t strcpy_s(  
   char *strDestination,  
   size_t numberOfElements,  
   const char *strSource   
);  
errno_t wcscpy_s(  
   wchar_t *strDestination,  
   size_t numberOfElements,  
   const wchar_t *strSource   
);  
errno_t _mbscpy_s(  
   unsigned char *strDestination,  
   size_t numberOfElements,  
   const unsigned char *strSource   
);  
template <size_t size>  
errno_t strcpy_s(  
   char (&strDestination)[size],  
   const char *strSource   
); // C++ only  
template <size_t size>  
errno_t wcscpy_s(  
   wchar_t (&strDestination)[size],  
   const wchar_t *strSource   
); // C++ only  
template <size_t size>  
errno_t _mbscpy_s(  
   unsigned char (&strDestination)[size],  
   const unsigned char *strSource   
); // C++ only  
```  
  
#### Parametri  
 `strDestination`  
 Posizione del buffer di stringa di destinazione.  
  
 `numberOfElements`  
 Dimensione del buffer della stringa di destinazione nelle unità `char` per funzioni narrow e multibyte e nelle unità `wchar_t` per funzioni "wide".  
  
 `strSource`  
 Buffer della stringa di origine che termina con Null.  
  
## Valore restituito  
 Zero in caso di esito positivo; in caso contrario un errore.  
  
### Condizioni di errore  
  
|`strDestination`|`numberOfElements`|`strSource`|Valore restituito|Contenuto di `strDestination`|  
|----------------------|------------------------|-----------------|-----------------------|-----------------------------------|  
|`NULL`|any|any|`EINVAL`|non modificato|  
|any|any|`NULL`|`EINVAL`|`strDestination`\[0\] impostato su 0|  
|qualsiasi|0 o troppo piccolo|any|`ERANGE`|`strDestination`\[0\] impostato su 0|  
  
## Note  
 La funzione `strcpy_s` copia il contenuto nell'indirizzo di `strSource`, incluso il carattere null di terminazione, nel percorso specificato da `strDestination`. La stringa di destinazione deve essere sufficientemente grande da contenere la stringa di origine e il relativo carattere Null di terminazione. Se le stringhe di origine e di destinazione si sovrappongono, il comportamento di `strcpy_s` non è definito.  
  
 `wcscpy_s` è la versione a caratteri wide di `strcpy_s` e `_mbscpy_s` è la versione a caratteri multibyte. Gli argomenti e il valore restituito di `wcscpy_s` sono stringhe con caratteri wide, mentre quelli di `_mbscpy_s` sono stringhe con caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.  
  
 Se `strDestination` o `strSource` è un puntatore null o se la stringa di destinazione è troppo piccola, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `EINVAL` e impostano `errno` su `EINVAL` quando `strDestination` o `strSource` è un puntatore Null e restituiscono `ERANGE` e impostano `errno` su `ERANGE` quando la stringa di destinazione è troppo piccola.  
  
 Quando l'esecuzione dell'operazione si conclude correttamente, la stringa di destinazione è sempre con terminazione Null.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload di modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando quindi la necessità di specificare un argomento di dimensione, e possono sostituire automaticamente le funzioni precedenti, meno sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 Le versioni di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, utilizzare [\_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcscpy_s`|`strcpy_s`|`_mbscpy_s`|`wcscpy_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strcpy_s`|\<string.h\>|  
|`wcscpy_s`|\<string.h\> o \<wchar.h\>|  
|`_mbscpy_s`|\<mbstring.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strcpy_s.cpp  
// This program uses strcpy_s and strcat_s  
// to build a phrase.  
//  
  
#include <string.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <errno.h>  
  
int main( void )  
{  
   char string[80];  
   // using template versions of strcpy_s and strcat_s:  
   strcpy_s( string, "Hello world from " );  
   strcat_s( string, "strcpy_s " );  
   strcat_s( string, "and " );  
   // of course we can supply the size explicitly if we want to:  
   strcat_s( string, _countof(string), "strcat_s!" );  
  
   printf( "String = %s\n", string );  
}  
```  
  
```Output  
String = Hello world from strcpy_s and strcat_s!  
```  
  
## Equivalente .NET Framework  
 [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [strcat, wcscat, \_mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strncat\_s, \_strncat\_s\_l, wcsncat\_s, \_wcsncat\_s\_l, \_mbsncat\_s, \_mbsncat\_s\_l](../../c-runtime-library/reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy\_s, \_strncpy\_s\_l, wcsncpy\_s, \_wcsncpy\_s\_l, \_mbsncpy\_s, \_mbsncpy\_s\_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)