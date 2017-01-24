---
title: "strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l | Microsoft Docs"
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
  - "wcsnlen"
  - "strnlen_s"
  - "_mbstrnlen"
  - "_mbsnlen_l"
  - "_mbstrnlen_l"
  - "strnlen"
  - "wcsnlen_s"
  - "_mbsnlen"
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
  - "wcsnlen"
  - "strnlen_s"
  - "_mbsnlen"
  - "_mbsnlen_l"
  - "_tcsnlen"
  - "_tcscnlen"
  - "_mbstrnlen_l"
  - "wcsnlen_s"
  - "_mbstrnlen"
  - "strnlen"
  - "_tcscnlen_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnlen (funzione)"
  - "_mbsnlen_l (funzione)"
  - "_mbstrnlen (funzione)"
  - "_mbstrnlen_l (funzione)"
  - "_tcscnlen (funzione)"
  - "_tcscnlen_l (funzione)"
  - "_tcsnlen (funzione)"
  - "lunghezze, stringhe"
  - "mbsnlen (funzione)"
  - "mbsnlen_l (funzione)"
  - "mbstrnlen (funzione)"
  - "mbstrnlen_l (funzione)"
  - "lunghezza della stringa"
  - "strnlen (funzione)"
  - "strnlen_l (funzione)"
  - "strnlen_s (funzione)"
  - "wcsnlen (funzione)"
  - "wcsnlen_l (funzione)"
  - "wcsnlen_s (funzione)"
ms.assetid: cc05ce1c-72ea-4ae4-a7e7-4464e56e5f80
caps.latest.revision: 35
caps.handback.revision: 33
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la lunghezza di una stringa, usando le impostazioni locali correnti o quelle che sono state passate.  Si tratta di versioni più sicure di [strlen, wcslen, \_mbslen, \_mbslen\_l, \_mbstrlen, \_mbstrlen\_l](../../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).  
  
> [!IMPORTANT]
>  `_mbsnlen`, `_mbsnlen_l`, `_mbstrnlen` e `_mbstrnlen_l` non possono essere usati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
size_t strnlen(  
   const char *str,  
   size_t numberOfElements   
);  
size_t strnlen_s(  
   const char *str,  
   size_t numberOfElements   
);  
size_t wcsnlen(  
   const wchar_t *str,  
   size_t numberOfElements  
);  
size_t wcsnlen_s(  
   const wchar_t *str,  
   size_t numberOfElements  
);  
size_t _mbsnlen(  
   const unsigned char *str,  
   size_t numberOfElements  
);  
size_t _mbsnlen_l(  
   const unsigned char *str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
size_t _mbstrnlen(  
   const char *str,  
   size_t numberOfElements  
);  
size_t _mbstrnlen_l(  
   const char *str,  
   size_t numberOfElements,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `str`  
 Stringa con terminazione Null.  
  
 `numberOfElements`  
 Dimensione del buffer di stringa.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Queste funzioni restituiscono il numero di caratteri nella stringa, escluso il valore null finale.  Se non esiste un terminatore null entro i primi `numberOfElements` byte della stringa \(o caratteri wide per `wcsnlen`\), viene restituito `numberOfElements` per indicare la condizione di errore. La lunghezza delle stringhe con terminatore null è rigorosamente inferiore a `numberOfElements`.  
  
 `_mbstrnlen` e `_mbstrnlen_l` restituiscono \-1 se la stringa contiene un carattere multibyte non valido.  
  
## Note  
  
> [!NOTE]
>  `strnlen` non è un sostituto di `strlen`; `strnlen` è pensato per essere usato solo per il calcolo della dimensione dei dati non attendibili entranti in un buffer di dimensione nota, ad esempio un pacchetto di rete.  `strnlen` calcola la lunghezza ma non oltrepassa la fine del buffer se la stringa è priva di terminazione.  In situazioni di altro tipo, usare `strlen` \(lo stesso vale per `wcsnlen`, `_mbsnlen` e `_mbstrnlen`\).  
  
 Ognuna di questa funzioni restituisce il numero di caratteri in `str`, escluso il carattere null di terminazione.  Tuttavia, `strnlen` e `strnlen_s` interpretano la stringa come stringa di caratteri a byte singolo, per cui il valore restituito sarà sempre uguale al numero di byte, anche se la stringa contiene caratteri multibyte.  `wcsnlen` e `wcsnlen_s` sono versioni a caratteri wide di `strnlen` e `strnlen_s` rispettivamente. Gli argomenti per `wcsnlen` e `wcsnlen_s` sono stringhe a caratteri wide e il numero di caratteri è espresso in unità a caratteri wide.  Per il resto, `wcsnlen` e `strnlen` si comportano in modo identico, come `strnlen_s` e `wcsnlen_s`.  
  
 `strnlen`, `wcsnlen,` e `_mbsnlen` non convalidano i propri parametri.  Se `str` è `NULL`, si verifica una violazione di accesso.  
  
 `strnlen_s` e `wcsnlen_s` convalidano i propri parametri.  Se `str` è `NULL`, le funzioni restituiscono 0.  
  
 Anche `_mbstrnlen` convalida i propri parametri.  Se `str` è `NULL` o se `numberOfElements` è maggiore di `INT_MAX`, `_mbstrnlen` genera un'eccezione di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `_mbstrnlen` imposta `errno` su `EINVAL` e restituisce \-1.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsnlen`|`strnlen`|`strnlen`|`wcsnlen`|  
|`_tcscnlen`|`strnlen`|`_mbsnlen`|`wcsnlen`|  
|`_tcscnlen_l`|`strnlen`|`_mbsnlen_l`|`wcsnlen`|  
  
 `_mbsnlen` e `_mbstrnlen` restituiscono il numero di caratteri multibyte in una stringa di caratteri multibyte.  `_mbsnlen` riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte in uso o in base alle impostazioni locali passate, ma non testa la validità dei caratteri multibyte.  `_mbstrnlen` testa la validità dei caratteri multibyte e riconosce le sequenze di caratteri multibyte.  Se la stringa passata a `_mbstrnlen` contiene un carattere multibyte non valido, `errno` viene impostato su `EILSEQ`.  
  
 Il valore di output è interessato dalla configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali. Per altre informazioni, vedere [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  Le versioni di queste funzioni sono identiche, tranne per il fatto che quelle prive del suffisso `_l` usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali e le versioni con il suffisso `_l` usano il parametro delle impostazioni locali passato.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strnlen`, `strnlen_s`|\<string.h\>|  
|`wcsnlen`, `wcsnlen_s`|\<string.h\> o \<wchar.h\>|  
|`_mbsnlen`, `_mbsnlen_l`|\<mbstring.h\>|  
|`_mbstrnlen`, `_mbstrnlen_l`|\<stdlib.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strnlen.c  
  
#include <string.h>  
  
int main()  
{  
   // str1 is 82 characters long. str2 is 159 characters long   
  
   char* str1 = "The length of a string is the number of characters\n"  
               "excluding the terminating null.";  
   char* str2 = "strnlen takes a maximum size. If the string is longer\n"  
                "than the maximum size specified, the maximum size is\n"  
                "returned rather than the actual size of the string.";  
   size_t len;  
   size_t maxsize = 100;  
  
   len = strnlen(str1, maxsize);  
   printf("%s\n Length: %d \n\n", str1, len);  
  
   len = strnlen(str2, maxsize);  
   printf("%s\n Length: %d \n", str2, len);  
}  
```  
  
  **La lunghezza di una stringa corrisponde al numero di caratteri**  
**escluso il carattere null di terminazione.  Lunghezza: 82**   
**strnlen prevede una dimensione massima.  Se la stringa è più lunga**  
**della dimensione massima specificata, viene restituita la**  
**dimensione massima anziché la dimensione effettiva della stringa.  Lunghezza: 100**    
## Equivalente .NET Framework  
 [System::String::Length](https://msdn.microsoft.com/en-us/library/system.string.length.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [strncat, \_strncat\_l, wcsncat, \_wcsncat\_l, \_mbsncat, \_mbsncat\_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strncpy\_s, \_strncpy\_s\_l, wcsncpy\_s, \_wcsncpy\_s\_l, \_mbsncpy\_s, \_mbsncpy\_s\_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [\_strset, \_strset\_l, \_wcsset, \_wcsset\_l, \_mbsset, \_mbsset\_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)