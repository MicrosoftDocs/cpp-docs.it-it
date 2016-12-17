---
title: "sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l | Microsoft Docs"
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
  - "_swprintf_s_l"
  - "_sprintf_s_l"
  - "swprintf_s"
  - "sprintf_s"
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
  - "swprintf_s"
  - "sprintf_s"
  - "stdio/sprintf_s"
  - "stdio/swprintf_s"
  - "stdio/_sprintf_s_l"
  - "stdio/_swprintf_s_l"
  - "_sprintf_s_l"
  - "_swprintf_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "stprintf_s (funzione)"
  - "stprintf_s_l (funzione)"
  - "swprintf_s_l (funzione)"
  - "sprintf_s (funzione)"
  - "swprintf_s (funzione)"
  - "_swprintf_s_l (funzione)"
  - "sprintf_s_l (funzione)"
  - "_stprintf_s_l (funzione)"
  - "_stprintf_s (funzione)"
  - "_sprintf_s_l (funzione)"
  - "testo formattato [C++]"
ms.assetid: 424f0a29-22ef-40e8-b565-969f5f57782f
caps.latest.revision: 26
caps.handback.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrivere dati formattati in una stringa. Queste sono versioni di [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int sprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   const char *format,  
   ...   
);  
int _sprintf_s_l(  
   char *buffer,  
   size_t sizeOfBuffer,  
   const char *format,  
   locale_t locale,  
   ...   
);  
int swprintf_s(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   const wchar_t *format,  
   ...  
);  
int _swprintf_s_l(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   const wchar_t *format,  
   locale_t locale,  
   ...  
);  
template <size_t size>  
int sprintf_s(  
   char (&buffer)[size],  
   const char *format,  
   ...   
); // C++ only  
template <size_t size>  
int swprintf_s(  
   wchar_t (&buffer)[size],  
   const wchar_t *format,  
   ...  
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per l'output  
  
 `sizeOfBuffer`  
 Numero massimo di caratteri da archiviare.  
  
 `format`  
 Stringa di controllo del formato  
  
 `...`  
 Argomenti facoltativi da formattare  
  
 `locale`  
 Impostazioni locali da usare.  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Valore restituito  
 Numero di caratteri scritti o –1 se si è verificato un errore. Se `buffer` o `format` è un puntatore Null, `sprintf_s` e `swprintf_s` restituiscono \-1 e impostano `errno` su `EINVAL`.  
  
 `sprintf_s` restituisce il numero di byte archiviato in `buffer`, senza contare il carattere Null terminale.`swprintf_s` restituisce il numero di caratteri "wide" archiviati in `buffer`, senza contare il carattere "wide" Null finale.  
  
## Note  
 La funzione `sprintf_s` formatta e archivia una serie di caratteri e di valori in `buffer`. Ogni funzione `argument` \(se presente\) viene convertita e restituita in base al formato specificato in `format`. Il formato è costituito da caratteri ordinari e ha lo stesso formato e la stessa funzione dell'argomento `format` per la funzione [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md). Un carattere Null viene aggiunto dopo l'ultimo carattere scritto. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
 La differenza principale tra `sprintf_s` e `sprintf` è che `sprintf_s` controlla la stringa di formato per i caratteri di formattazione validi, mentre `sprintf` controlla solo se la stringa di formato o il buffer è un puntatore `NULL`. Se il controllo non riesce, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` su `EINVAL`.  
  
 Un'altra differenza principale tra `sprintf_s` e `sprintf` è che `sprintf_s` accetta un parametro di lunghezza che specifica la dimensione del buffer di output in caratteri. Se il buffer è troppo piccolo per il testo formattato, incluso il carattere di terminazione Null, il buffer viene impostato su una stringa vuota inserendo un carattere Null in `buffer``[0]` e viene richiamato il gestore di parametro non valido. A differenza di `_snprintf`, `sprintf_s` garantisce che il buffer avrà una terminazione Null, a meno che le dimensioni del buffer non siano zero.  
  
 `swprintf_s` è una versione a caratteri "wide" di `sprintf_s`. Gli argomenti puntatori per `swprintf_s` sono stringhe a caratteri "wide". Il rilevamento degli errori di codifica in `swprintf_s` può essere diverso da quello di `sprintf_s`. Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
 Sono disponibili versioni `sprintf_s` che offrono un controllo maggiore su ciò che accade se il buffer è troppo piccolo. Per altre informazioni, vedere [\_snprintf\_s, \_snprintf\_s\_l, \_snwprintf\_s, \_snwprintf\_s\_l](../../c-runtime-library/reference/snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_stprintf_s`|`sprintf_s`|`sprintf_s`|`swprintf_s`|  
|`_stprintf_s_l`|`_sprintf_s_l`|`_sprintf_s_l`|`_swprintf_s_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`sprintf_s`, `_sprintf_s_l`|C: \<stdio.h\><br /><br /> C\+\+: \<cstdio\> o \<stdio.h\>|  
|`swprintf_s`, `_swprintf_s_l`|C: \<stdio.h\> o \<wchar.h\><br /><br /> C\+\+: \<cstdio\>, \<cwchar\>, \<stdio.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_sprintf_s.c  
// This program uses sprintf_s to format various  
// data and place them in the string named buffer.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   char  buffer[200], s[] = "computer", c = 'l';  
   int   i = 35, j;  
   float fp = 1.7320534f;  
  
   // Format and print various data:   
   j  = sprintf_s( buffer, 200,     "   String:    %s\n", s );  
   j += sprintf_s( buffer + j, 200 - j, "   Character: %c\n", c );  
   j += sprintf_s( buffer + j, 200 - j, "   Integer:   %d\n", i );  
   j += sprintf_s( buffer + j, 200 - j, "   Real:      %f\n", fp );  
  
   printf_s( "Output:\n%s\ncharacter count = %d\n", buffer, j );  
}  
```  
  
```Output  
Output: String:    computer Character: l Integer:   35 Real:      1.732053 character count = 79  
```  
  
## Esempio  
  
```  
// crt_swprintf_s.c  
// wide character example  
// also demonstrates swprintf_s returning error code  
#include <stdio.h>  
  
int main( void )  
{  
   wchar_t buf[100];  
   int len = swprintf_s( buf, 100, L"%s", L"Hello world" );  
   printf( "wrote %d characters\n", len );  
   len = swprintf_s( buf, 100, L"%s", L"Hello\xffff world" );  
   // swprintf_s fails because string contains WEOF (\xffff)  
   printf( "wrote %d characters\n", len );  
}  
```  
  
```Output  
wrote 11 characters wrote -1 characters  
```  
  
## Equivalente .NET Framework  
 [System::String::Format](https://msdn.microsoft.com/en-us/library/system.string.format.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)