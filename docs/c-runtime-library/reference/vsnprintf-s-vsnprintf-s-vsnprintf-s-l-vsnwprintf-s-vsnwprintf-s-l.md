---
title: "vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l | Microsoft Docs"
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
  - "_vsnwprintf_s"
  - "_vsnwprintf_s_l"
  - "_vsnprintf_s"
  - "vsnprintf_s"
  - "_vsnprintf_s_l"
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
  - "_vsnprintf_s"
  - "_vsntprintf_s"
  - "_vsnwprintf_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_vsnprintf_s (funzione)"
  - "_vsnprintf_s_l (funzione)"
  - "_vsntprintf_s (funzione)"
  - "_vsntprintf_s_l (funzione)"
  - "_vsnwprintf_s (funzione)"
  - "_vsnwprintf_s_l (funzione)"
  - "testo formattato [C++]"
  - "vsnprintf_s (funzione)"
  - "vsnprintf_s_l (funzione)"
  - "vsntprintf_s (funzione)"
  - "vsntprintf_s_l (funzione)"
  - "vsnwprintf_s (funzione)"
  - "vsnwprintf_s_l (funzione)"
ms.assetid: 147ccfce-58c7-4681-a726-ef54ac1c604e
caps.latest.revision: 30
caps.handback.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrivere l'output formattato utilizzando un puntatore a un elenco di argomenti.  Queste sono versioni di [vsnprintf, \_vsnprintf, \_vsnprintf\_l, \_vsnwprintf, \_vsnwprintf\_l](../../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int vsnprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_s_l(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vsnwprintf_s(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
);  
int _vsnwprintf_s_l(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
template <size_t size>  
int _vsnprintf_s(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnwprintf_s(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per l'output.  
  
 `sizeOfBuffer`  
 La dimensione del `buffer` di output, ad esempio il numero dei caratteri.  
  
 `count`  
 Numero massimo di caratteri da scrivere \(escludendo quello di terminazione null\), o [\_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 `format`  
 Specifica di formato,  
  
 `argptr`  
 Puntatore all'elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Valore restituito  
 `vsnprintf_s`,`_vsnprintf_s` e `_vsnwprintf_s` restituiscono il numero di caratteri scritti, escludendo il carattere di terminazione null, o un valore negativo se un errore di output viene visualizzato.  `vsnprintf_s` è identico a `_vsnprintf_s`.  `vsnprintf_s` è incluso per conformità allo standard ANSI.  `_vnsprintf` viene mantenuta per compatibilità con le versioni precedenti.  
  
 Se la memoria richiesta per l'archiviazione dei dati e un carattere di terminazione null supera `sizeOfBuffer`, il gestore di parametri non validi viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md), a meno che `count` sia [\_TRUNCATE](../../c-runtime-library/truncate.md), nel qual caso il `buffer` viene riempito con la stringa troncata alla dimensione del buffer e viene restituito \-1.  Se l'esecuzione continua dopo il gestore di parametri non validi, queste funzioni impostano il `buffer` su una stringa vuota, impostano `errno` a `ERANGE`e restituiscono \-1.  
  
 Se il `buffer` o `format` è un puntatore a `NULL`, o se `count` è minore o uguale a zero, il gestore di parametri non validi viene invocato.  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono \-1.  
  
### Condizioni di errore  
  
|`Condition`|Return|`errno`|  
|-----------------|------------|-------------|  
|`buffer` è `NULL`|\-1|`EINVAL`|  
|`format` è `NULL`|\-1|`EINVAL`|  
|`count` \<\= 0|\-1|`EINVAL`|  
|`sizeOfBuffer` troppo piccolo \(e `count` \! \= `_TRUNCATE`\)|\-1 \(e `buffer` è impostato su una stringa vuota\).|`ERANGE`|  
  
## Note  
 Ognuna di queste funzioni prende un puntatore a un elenco di argomenti, quindi formatta e scrive sui caratteri `count` dei dati specificati alla memoria puntata dal `buffer` e viene aggiunto un carattere di terminazione null.  
  
 Se `count` è [\_TRUNCATE](../../c-runtime-library/truncate.md), allora queste funzioni scrivono sul `buffer` finché c'è spazio lasciando spazio al carattere di terminazione null.  Se l'intera stringa \(con il carattere di terminazione null\) ci sta in `buffer`, allora queste funzioni restituiscono il numero di caratteri scritto \(escluso il carattere di terminazione null\); in caso contrario, queste funzioni restituiscono \-1 per indicare che il troncamento si è verificato.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare quelle del thread corrente.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
> [!NOTE]
>  Per assicurarsi che esiste spazio per il carattere di terminazione null, assicurarsi che `count` sia minore della lunghezza del buffer, o utilizzare `_TRUNCATE`.  
  
 In C\+\+, l'utilizzo di queste funzioni è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente \(che elimina la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti, quelle non sicure alle più recenti e le controparti sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vsntprintf_s`|`_vsnprintf_s`|`_vsnprintf_s`|`_vsnwprintf_s`|  
|`_vsntprintf_s_l`|`_vsnprintf_s_l`|`_vsnprintf_s_l`|`_vsnwprintf_s_l`|  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`vsnprintf_s`|\<stdio.h\> e \<stdarg.h\>|\<varargs.h\>\*|  
|`_vsnprintf_s`, `_vsnprintf_s_l`|\<stdio.h\> e \<stdarg.h\>|\<varargs.h\>\*|  
|`_vsnwprintf_s`, `_vsnwprintf_s_l`|\<stdio.h\> o \<wchar.h\>, e \<stdarg.h\>|\<varargs.h\>\*|  
  
 \* Necessario per la compatibilità con UNIX V.  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_vsnprintf_s.cpp  
#include <stdio.h>  
#include <wtypes.h>  
  
void FormatOutput(LPCSTR formatstring, ...)   
{  
   int nSize = 0;  
   char buff[10];  
   memset(buff, 0, sizeof(buff));  
   va_list args;  
   va_start(args, formatstring);  
   nSize = vsnprintf_s( buff, _countof(buff), _TRUNCATE, formatstring, args);  
   printf("nSize: %d, buff: %s\n", nSize, buff);  
}  
  
int main() {  
   FormatOutput("%s %s", "Hi", "there");  
   FormatOutput("%s %s", "Hi", "there!");  
   FormatOutput("%s %s", "Hi", "there!!");  
}  
```  
  
  **nSize: 8, buff: Hi there\!**  
**nSize: 9, buff: Hi there\!**  
**nSize: \-1, buff: Hi there\!**   
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va\_arg, va\_copy, va\_end, va\_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)