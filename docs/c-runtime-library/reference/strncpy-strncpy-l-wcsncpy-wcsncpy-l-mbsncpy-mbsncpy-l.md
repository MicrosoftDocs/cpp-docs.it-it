---
title: "strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l | Microsoft Docs"
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
  - "strncpy"
  - "_strncpy_l"
  - "_mbsncpy"
  - "wcsncpy"
  - "_mbsncpy_l"
  - "_wcsncpy_l"
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
  - "_fstrncpy"
  - "strncpy"
  - "_ftcsncpy"
  - "_tcsnccpy_l"
  - "_tcsnccpy"
  - "_mbsncpy"
  - "wcsncpy"
  - "_tcsncpy"
  - "_strncpy_l"
  - "_mbsncpy_l"
  - "_wcsncpy_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fstrncpy (funzione)"
  - "_ftcsncpy (funzione)"
  - "_mbsncpy (funzione)"
  - "_mbsncpy_l (funzione)"
  - "_strncpy_l (funzione)"
  - "_tcsnccpy (funzione)"
  - "_tcsnccpy_l (funzione)"
  - "_tcsncpy (funzione)"
  - "_tcsncpy_l (funzione)"
  - "_wcsncpy_l (funzione)"
  - "caratteri [C++], copia"
  - "copia di caratteri di stringhe"
  - "fstrncpy (funzione)"
  - "ftcsncpy (funzione)"
  - "mbsncpy (funzione)"
  - "mbsncpy_l (funzione)"
  - "stringhe [C++], copia"
  - "strncpy (funzione)"
  - "strncpy_l (funzione)"
  - "tcsnccpy (funzione)"
  - "tcsnccpy_l (funzione)"
  - "tcsncpy (funzione)"
  - "tcsncpy_l (funzione)"
  - "wcsncpy (funzione)"
  - "wcsncpy_l (funzione)"
ms.assetid: ac4345a1-a129-4f2f-bb8a-373ec58ab8b0
caps.latest.revision: 42
caps.handback.revision: 40
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copiare i caratteri di una stringa in un'altra.  Sono disponibili versioni più sicure di queste funzioni; vedere [strncpy\_s, \_strncpy\_s\_l, wcsncpy\_s, \_wcsncpy\_s\_l, \_mbsncpy\_s, \_mbsncpy\_s\_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md).  
  
> [!IMPORTANT]
>  `_mbsncpy` e `_mbsncpy_l` non possono essere usati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *strncpy(  
   char *strDest,  
   const char *strSource,  
   size_t count   
);  
char *_strncpy_l(  
   char *strDest,  
   const char *strSource,  
   size_t count,  
   locale_t locale   
);  
wchar_t *wcsncpy(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count   
);  
wchar_t *_wcsncpy_l(  
   wchar_t *strDest,  
   const wchar_t *strSource,  
   size_t count,  
   locale_t locale   
);  
unsigned char *_mbsncpy(  
   unsigned char *strDest,  
   const unsigned char *strSource,  
   size_t count   
);  
unsigned char *_mbsncpy_l(  
   unsigned char *strDest,  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
char *strncpy(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
char *_strncpy_l(  
   char (&strDest)[size],  
   const char *strSource,  
   size_t count,  
   locale_t locale   
); // C++ only  
template <size_t size>  
wchar_t *wcsncpy(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
wchar_t *_wcsncpy_l(  
   wchar_t (&strDest)[size],  
   const wchar_t *strSource,  
   size_t count,  
   locale_t locale   
); // C++ only  
template <size_t size>  
unsigned char *_mbsncpy(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count   
); // C++ only  
template <size_t size>  
unsigned char *_mbsncpy_l(  
   unsigned char (&strDest)[size],  
   const unsigned char *strSource,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `strDest`  
 Stringa di destinazione.  
  
 `strSource`  
 Stringa di origine.  
  
 `count`  
 Il numero dei caratteri da copiare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Restituisce `strDest`.  Nessun valore restituito è riservato per indicare un errore.  
  
## Note  
 La funzione `strncpy` copia i caratteri iniziali `count` di `strSource` in `strDest` e restituisce `strDest`.  Se `count` è minore o uguale alla lunghezza di `strSource`, un carattere null non viene aggiunto automaticamente alla stringa copiata.  Se `count` è maggiore della lunghezza di `strSource`, alla stringa di destinazione vengono aggiunti caratteri null fino alla lunghezza `count`.  Se le stringhe di origine e di destinazione si sovrappongono, il comportamento di `strncpy` non è definito.  
  
> [!IMPORTANT]
>  `strncpy` non verifica la presenza di spazio sufficiente in `strDest`; è pertanto una causa possibile dei sovraccarichi del buffer.  L'argomento `count` limita il numero di caratteri copiato; non è un limite della dimensione di `strDest`.  Vedere l'esempio seguente.  Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 Se `strDest` o `strSource` è un puntatore `NULL` o se `count` è minore o uguale a zero, il gestore di parametri non validi viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono \-1 e impostano `errno` su `EINVAL`  
  
 `wcsncpy` e `_mbsncpy` sono le versioni a caratteri wide e a caratteri multibyte di `strncpy`.  Gli argomenti e i valori restituiti da `wcsncpy` e `_mbsncpy` variano di conseguenza.  In alternativa queste sei funzioni si comportano in modo identico.  
  
 Le versioni di queste funzioni che presentano il suffisso `_l` sono identiche ad eccezione del fatto che, per il comportamento dipendente dalle impostazioni locali, usano le impostazioni locali passate anziché quelle correnti.  Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 In C\+\+ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure.  Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsncpy`|`strncpy`|`_mbsnbcpy`|`wcsncpy`|  
|`_tcsncpy_l`|`_strncpy_l`|`_mbsnbcpy_l`|`_wcsncpy_l`|  
  
> [!NOTE]
>  `_strncpy_l` e `_wcsncpy_l` non dipendono dalle impostazioni locali; vengono forniti solo per `_tcsncpy_l` e non possono essere chiamati direttamente.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strncpy`|\<string.h\>|  
|`wcsncpy`|\<string.h\> o \<wchar.h\>|  
|`_mbsncpy`, `_mbsncpy_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità della piattaforma, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo di `strncpy` e come l'utilizzo improprio possa causare bug e problemi di sicurezza del programma.  Il compilatore genera un avviso per ogni chiamata a `strncpy` simile a **crt\_strncpy\_x86.c\(15\) : warning C4996: 'strncpy': This function or variable may be unsafe. Consider using strncpy\_s instead. To disable deprecation, use \_CRT\_SECURE\_NO\_WARNINGS. See online help for details.**  
  
```  
// crt_strncpy_x86.c  
// Use this command in an x86 developer command prompt to compile:   
// cl /TC /W3 crt_strncpy_x86.c  
  
#include <stdio.h>  
#include <string.h>  
  
int main() {  
   char t[20];  
   char s[20];  
   char *p = 0, *q = 0;  
  
   strcpy_s(s, sizeof(s), "AA BB CC");  
   // Note: strncpy is deprecated; consider using strncpy_s instead  
   strncpy(s, "aa", 2);     // "aa BB CC"         C4996  
   strncpy(s + 3, "bb", 2); // "aa bb CC"         C4996  
   strncpy(s, "ZZ", 3);     // "ZZ",              C4996  
                            // count greater than strSource, null added  
   printf("%s\n", s);  
  
   strcpy_s(s, sizeof(s), "AA BB CC");  
   p = strstr(s, "BB");  
   q = strstr(s, "CC");  
   strncpy(s, "aa", p - s - 1);   // "aa BB CC"   C4996  
   strncpy(p, "bb", q - p - 1);   // "aa bb CC"   C4996  
   strncpy(q, "cc",  q - s);      // "aa bb cc"   C4996  
   strncpy(q, "dd", strlen(q));   // "aa bb dd"   C4996  
   printf("%s\n", s);  
  
   // some problems with strncpy  
   strcpy_s(s, sizeof(s), "test");  
   strncpy(t, "this is a very long string", 20 ); // C4996  
   // Danger: at this point, t has no terminating null,  
   // so the printf continues until it runs into one.  
   // In this case, it will print "this is a very long test"  
   printf("%s\n", t);  
  
   strcpy_s(t, sizeof(t), "dogs like cats");  
   printf("%s\n", t);  
  
   strncpy(t + 10, "to chase cars.", 14); // C4996  
   printf("%s\n", t);  
  
   // strncpy has caused a buffer overrun and corrupted string s  
   printf("Buffer overrun: s = '%s' (should be 'test')\n", s);  
   // Since the stack grows from higher to lower addresses, buffer  
   // overruns can corrupt function return addresses on the stack,  
   // which can be exploited to run arbitrary code.  
}  
```  
  
 Output  
  
  **ZZ**  
**aa bb dd**  
**this is a very long test**  
**dogs like cats**  
**dogs like to chase cars.  Buffer overrun: s \= 'ars.' \(should be 'test'\)**  Il layout delle variabili automatiche e il livello di rilevamento degli errori e di protezione di codice possono variare con le impostazioni modificate del compilatore.  Questo esempio può produrre risultati diversi quando viene compilato in altri ambienti di compilazione o con altre opzioni del compilatore.  
  
## Equivalente .NET Framework  
 [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_mbsnbcpy, \_mbsnbcpy\_l](../../c-runtime-library/reference/mbsnbcpy-mbsnbcpy-l.md)   
 [strcat, wcscat, \_mbscat](../../c-runtime-library/reference/strcat-wcscat-mbscat.md)   
 [strcmp, wcscmp, \_mbscmp](../../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)   
 [strcpy, wcscpy, \_mbscpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)   
 [strncat, \_strncat\_l, wcsncat, \_wcsncat\_l, \_mbsncat, \_mbsncat\_l](../../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)   
 [strncmp, wcsncmp, \_mbsncmp, \_mbsncmp\_l](../../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)   
 [\_strnicmp, \_wcsnicmp, \_mbsnicmp, \_strnicmp\_l, \_wcsnicmp\_l, \_mbsnicmp\_l](../../c-runtime-library/reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)   
 [strrchr, wcsrchr, \_mbsrchr, \_mbsrchr\_l](../../c-runtime-library/reference/strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)   
 [\_strset, \_strset\_l, \_wcsset, \_wcsset\_l, \_mbsset, \_mbsset\_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)   
 [strncpy\_s, \_strncpy\_s\_l, wcsncpy\_s, \_wcsncpy\_s\_l, \_mbsncpy\_s, \_mbsncpy\_s\_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)   
 [strcpy\_s, wcscpy\_s, \_mbscpy\_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md)