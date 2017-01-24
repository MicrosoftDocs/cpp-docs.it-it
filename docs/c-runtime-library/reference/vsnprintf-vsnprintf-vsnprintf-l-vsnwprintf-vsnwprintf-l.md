---
title: "vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_vsnprintf"
  - "_vsnprintf_l"
  - "_vsnwprintf"
  - "_vsnwprintf_l"
  - "_vsnprintf"
  - "_vsnprintf;"
  - "vsnprintf; _vsnprintf"
  - "_vsnwprintf;"
  - "_vsnprintf_l;"
  - "_vsnwprintf_l;"
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
apitype: "DLLExport"
f1_keywords: 
  - "_vsnprintf"
  - "_vsnwprintf"
  - "_vsntprintf"
  - "vsnprintf"
  - "stdio/vsnprintf"
  - "stdio/_vsnprintf"
  - "stdio/_vsnprintf_l"
  - "stdio/_vsnwprintf"
  - "stdio/_vsnwprintf_l"
  - "_vsnprintf_l"
  - "_vsnwprintf_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "vsntprintf (funzione)"
  - "_vsnwprintf_l (funzione)"
  - "vsnwprintf_l (funzione)"
  - "vsntprintf_l (funzione)"
  - "_vsntprintf (funzione)"
  - "_vsnprintf_l (funzione)"
  - "vsnprintf (funzione)"
  - "_vsntprintf_l (funzione)"
  - "vsnprintf_l (funzione)"
  - "_vsnwprintf (funzione)"
  - "_vsnprintf (funzione)"
  - "testo formattato [C++]"
  - "vsnwprintf (funzione)"
ms.assetid: a97f92df-c2f8-4ea0-9269-76920d2d566a
caps.latest.revision: 35
caps.handback.revision: 35
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrivere l'output formattato mediante un puntatore a un elenco di argomenti. Sono disponibili versioni più sicure di queste funzioni. Vedere [vsnprintf\_s, \_vsnprintf\_s, \_vsnprintf\_s\_l, \_vsnwprintf\_s, \_vsnwprintf\_s\_l](../../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md).  
  
## Sintassi  
  
```  
int vsnprintf(  
   char *buffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf(  
   char *buffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_l(  
   char *buffer,  
   size_t count,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vsnwprintf(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
);  
int _vsnwprintf_l(  
   wchar_t *buffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
template <size_t size>  
int vsnprintf(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnprintf(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnprintf_l(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnwprintf(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnwprintf_l(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per l'output.  
  
 `count`  
 Numero massimo di caratteri da scrivere.  
  
 `format`  
 Specifica di formato.  
  
 `argptr`  
 Puntatore a un elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da usare.  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Valore restituito  
 Il `vsnprintf` funzione restituisce il numero di caratteri scritti, senza contare il carattere di terminazione null. Se la dimensione del buffer specificato da `count` non è sufficientemente grande da contenere l'output specificato da `format` e `argptr`, il valore restituito di `vsnprintf` è il numero di caratteri che verrebbero, senza contare il carattere null, se `count` erano sufficientemente grande. Se il valore restituito è maggiore di `count` \- 1, l'output è stato troncato. Un valore restituito \-1 indica che si è verificato un errore di codifica.  
  
 Entrambi `_vsnprintf` e `_vsnwprintf` funzioni restituiscono il numero di caratteri scritto se il numero di caratteri da scrivere è minore o uguale a `count`; Se il numero di caratteri da scrivere è maggiore di `count`, queste funzioni restituiscono \-1 che indica che l'output è stato troncato.  
  
 Il valore restituito da tutte queste funzioni non include la terminazione null, se viene scritto o non. Quando `count` è zero, il valore restituito è il numero di caratteri che si scrivono le funzioni, non incluso qualsiasi carattere di terminazione null. È possibile utilizzare questo risultato per allocare spazio nel buffer per la stringa e il carattere di terminazione null e quindi chiamare la funzione per riempire il buffer.  
  
 Se `format` è `NULL`, o se `buffer` è NULL e `count` non è uguale a zero, queste funzioni richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono \-1 e impostano `errno` su `EINVAL`.  
  
## Note  
 Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta i dati e scrive fino a `count` caratteri nella memoria a cui punta `buffer`. La funzione `vsnprintf` scrive sempre un carattere di terminazione Null, anche se tronca l'output. Quando si usa `_vsnprintf` e `_vsnwprintf`, il buffer sarà con terminazione Null solo se c'è spazio alla fine \(ovvero, se il numero di caratteri da scrivere è minore di `count`\).  
  
> [!IMPORTANT]
>  Per evitare alcuni tipi di rischi di sicurezza, verificare che `format` non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
> [!NOTE]
>  Per assicurarsi che ci sia spazio per la terminazione Null durante una chiamata a `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf` e `_vsnwprintf_l`, verificare che `count` sia strettamente minore della lunghezza del buffer e inizializzare il buffer su Null prima di chiamare la funzione.  
>   
>  Poiché `vsnprintf` scrive sempre il carattere di terminazione null, il `count` parametro può essere uguale alla dimensione del buffer.  
  
 A partire da UCRT in Visual Studio 2015 e Windows 10, `vsnprintf` non è più identico a `_vsnprintf`. Il `vsnprintf` funzione conforme allo standard C99; `_vnsprintf` viene mantenuto per compatibilità con codice di Visual Studio precedente.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
 In C\+\+ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vsntprintf`|`_vsnprintf`|`_vsnprintf`|`_vsnwprintf`|  
|`_vsntprintf_l`|`_vsnprintf_l`|`_vsnprintf_l`|`_vsnwprintf_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria \(C\)|Intestazione obbligatoria \(C\+\+\)|  
|-------------|-------------------------------------|-----------------------------------------|  
|`vsnprintf`, `_vsnprintf`, `_vsnprintf_l`|\<stdio.h\>|\<stdio.h\> o \<cstdio\>|  
|`_vsnwprintf`, `_vsnwprintf_l`|\<stdio.h\> o \<wchar.h\>|\<stdio.h\>, \<wchar.h\>, \<cstdio\> o \<cwchar\>|  
  
 Le funzioni `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf` e `_vsnwprintf_l` sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```c  
// crt_vsnwprintf.c  
// compile by using: cl /W3 crt_vsnwprintf.c  
  
// To turn off error C4996, define this symbol:  
#define _CRT_SECURE_NO_WARNINGS  
  
#include <stdio.h>  
#include <wtypes.h>  
  
#define BUFFCOUNT (10)  
  
void FormatOutput(LPCWSTR formatstring, ...)  
{  
    int nSize = 0;  
    wchar_t buff[BUFFCOUNT];  
    memset(buff, 0, sizeof(buff));  
    va_list args;  
    va_start(args, formatstring);  
    // Note: _vsnwprintf is deprecated; consider vsnwprintf_s instead  
    nSize = _vsnwprintf(buff, BUFFCOUNT - 1, formatstring, args); // C4996  
    wprintf(L"nSize: %d, buff: %ls\n", nSize, buff);  
}  
  
int main() {  
    FormatOutput(L"%ls %ls", L"Hi", L"there");  
    FormatOutput(L"%ls %ls", L"Hi", L"there!");  
    FormatOutput(L"%ls %ls", L"Hi", L"there!!");  
}  
```  
  
```Output  
nSize: 8, Repulsione: salve nSize ci: 9, Repulsione: salve sono! nSize: -1, Repulsione: salve sono!  
```  
  
 Le modifiche del comportamento se si utilizza invece vsnprintf insieme ai parametri della stringa "narrow". Il `count` parametro può essere l'intera dimensione del buffer e il valore restituito è il numero di caratteri che sarebbero stati scritti se `count` sia abbastanza grande:  
  
## Esempio  
  
```c  
// crt_vsnprintf.c  
// compile by using: cl /W4 crt_vsnprintf.c  
#include <stdio.h>  
#include <stdarg.h> // for va_list, va_start  
#include <string.h> // for memset  
  
#define BUFFCOUNT (10)  
  
void FormatOutput(char* formatstring, ...)  
{  
    int nSize = 0;  
    char buff[BUFFCOUNT];  
    memset(buff, 0, sizeof(buff));  
    va_list args;  
    va_start(args, formatstring);  
    nSize = vsnprintf(buff, sizeof(buff), formatstring, args);  
    printf("nSize: %d, buff: %s\n", nSize, buff);  
}  
  
int main() {  
    FormatOutput("%s %s", "Hi", "there");   //  8 chars + null  
    FormatOutput("%s %s", "Hi", "there!");  //  9 chars + null  
    FormatOutput("%s %s", "Hi", "there!!"); // 10 chars + null  
}  
```  
  
```Output  
nSize: 8, Repulsione: salve nSize ci: 9, Repulsione: salve sono! nSize: 10, Repulsione: salve sono!  
```  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va\_arg, va\_copy, va\_end, va\_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)