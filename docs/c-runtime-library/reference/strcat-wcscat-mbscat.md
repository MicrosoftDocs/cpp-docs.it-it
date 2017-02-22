---
title: "strcat, wcscat, _mbscat | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbscat"
  - "wcscat"
  - "strcat"
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
  - "_mbscat"
  - "_ftcscat"
  - "_tcscat"
  - "strcat"
  - "wcscat"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ftcscat (funzione)"
  - "_mbscat (funzione)"
  - "_tcscat (funzione)"
  - "aggiunta di stringhe"
  - "concatenazione di stringhe"
  - "ftcscat (funzione)"
  - "mbscat (funzione)"
  - "strcat (funzione)"
  - "stringhe [C++], aggiunta"
  - "stringhe [C++], concatenazione"
  - "tcscat (funzione)"
  - "wcscat (funzione)"
ms.assetid: c89c4ef1-817a-44ff-a229-fe22d06ba78a
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# strcat, wcscat, _mbscat
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Accodamento di una stringa.  Sono disponibili versioni più sicure di queste funzioni; vedere [strcat\_s, wcscat\_s, \_mbscat\_s](../../c-runtime-library/reference/strcat-s-wcscat-s-mbscat-s.md).  
  
> [!IMPORTANT]
>  `_mbscat_s` non può essere utilizzato in applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *strcat(  
   char *strDestination,  
   const char *strSource   
);  
wchar_t *wcscat(  
   wchar_t *strDestination,  
   const wchar_t *strSource   
);  
unsigned char *_mbscat(  
   unsigned char *strDestination,  
   const unsigned char *strSource   
);  
template <size_t size>  
char *strcat(  
   char (&strDestination)[size],  
   const char *strSource   
); // C++ only  
template <size_t size>  
wchar_t *wcscat(  
   wchar_t (&strDestination)[size],  
   const wchar_t *strSource   
); // C++ only  
template <size_t size>  
unsigned char *_mbscat(  
   unsigned char (&strDestination)[size],  
   const unsigned char *strSource   
); // C++ only  
```  
  
#### Parametri  
 `strDestination`  
 Stringa di destinazione con terminazione null.  
  
 `strSource`  
 Stringa di origine con terminazione null.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce la stringa di destinazione \(`strDestination`\).  Nessun valore restituito è riservato per indicare un errore.  
  
## Note  
 La funzione `strcat` aggiunge `strSource` a `strDestination` e termina la stringa risultato con un carattere null.  Il carattere iniziale di `strSource` sovrascrive il carattere di terminazione null di `strDestination`.  Il comportamento di `strcat` non è definito se le stringhe di origine e di destinazione si sovrappongono.  
  
> [!IMPORTANT]
>  Poiché `strcat` non verifica la presenza di spazio sufficiente in `strDestination` prima di aggiungere `strSource`, è una possibile causa di sovraccarico del buffer.  Invece, si consiglia di utilizzare [strncat](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md).  
  
 `wcscat` e `_mbscat` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `strcat`.  Gli argomenti e il valore restituito di `wcscat` sono stringhe di caratteri di tipo "wide", quelli di `_mbscat` sono stringhe di caratteri multibyte.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcscat`|`strcat`|`_mbscat`|`wcscat`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strcat`|\<string.h\>|  
|`wcscat`|\<string.h\> o \<wchar.h\>|  
|`_mbscat`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio relativo a [strcpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md).  
  
## Equivalente .NET Framework  
 [System::String::Concat](https://msdn.microsoft.com/en-us/library/system.string.concat.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [strncat, \_strncat\_l, wcsncat, \_wcsncat\_l, \_mbsncat, \_mbsncat\_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [strncpy, \_strncpy\_l, wcsncpy, \_wcsncpy\_l, \_mbsncpy, \_mbsncpy\_l](../../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)