---
title: snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _snwprintf
- _snprintf
- _snprintf_l
- _snwprintf_l
- snprintf
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- _snprintf
- snprintf_l
- snwprintf_l
- sntprintf
- snprintf
- _sntprintf
- _sntprintf_l
- sntprintf_l
- snwprintf
- _snprintf_l
- _snwprintf
- _snwprintf_l
dev_langs:
- C++
helpviewer_keywords:
- snwprintf_l function
- sntprintf_l function
- snprintf_l function
- _snwprintf_l function
- _sntprintf_l function
- _snwprintf function
- _snprintf function
- _sntprintf function
- _snprintf_l function
- snwprintf function
- snprintf function
- sntprintf function
- formatted text [C++]
ms.assetid: 5976c9c8-876e-4ac9-a515-39f3f7fd0925
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cfaa3b8e7fd8705f23b78b7b4ba4238631cfa4cb
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="snprintf-snprintf-snprintfl-snwprintf-snwprintfl"></a>snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l
Scrive dati formattati in una stringa. Sono disponibili versioni più sicure di queste funzioni. Vedere [_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md).

## <a name="syntax"></a>Sintassi

```C
int snprintf(
   char *buffer,
   size_t count,
   const char *format [,
   argument] ...
);
int _snprintf(
   char *buffer,
   size_t count,
   const char *format [,
   argument] ...
);
int _snprintf_l(
   char *buffer,
   size_t count,
   const char *format,
   locale_t locale [,
   argument] ...
);
int _snwprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format [,
   argument] ...
);
int _snwprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
template <size_t size>
int _snprintf(
   char (&buffer)[size],
   size_t count,
   const char *format [,
   argument] ...
); // C++ only
template <size_t size>
int _snprintf_l(
   char (&buffer)[size],
   size_t count,
   const char *format,
   locale_t locale [,
   argument] ...
); // C++ only
template <size_t size>
int _snwprintf(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format [,
   argument] ...
); // C++ only
template <size_t size>
int _snwprintf_l(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   locale_t locale [,
   argument] ...
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per l'output.

*count*<br/>
Numero massimo di caratteri da archiviare.

*format*<br/>
Stringa di controllo del formato.

*Argomento*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

Let **len** sia la lunghezza della stringa di dati formattata, escluso il carattere di terminazione null. Entrambi **len** e *conteggio* sono in byte per **snprintf** e **snprintf**, caratteri wide per **snwprintf**.

Per tutte le funzioni, se **len** < *conteggio*, **len** caratteri vengono archiviati in *buffer*, viene aggiunto un carattere di terminazione null, e **len** viene restituito.

Il **snprintf** funzione Tronca l'output quando **len** è maggiore o uguale a *conteggio*, inserendo un carattere di terminazione null in `buffer[count-1]`. Il valore restituito sarà **len**, il numero di caratteri che sarebbero andati output se *conteggio* sia abbastanza grande. Il **snprintf** funzione restituisce un valore negativo se si verifica un errore di codifica.

Per tutte le funzioni tranne **snprintf**, se **len** = *conteggio*, **len** caratteri vengono archiviati in  *buffer*, non viene aggiunto alcun carattere di terminazione null e **len** viene restituito. Se **len** > *conteggio*, *conteggio* caratteri vengono archiviati in *buffer*, nessun carattere di terminazione null viene accodato e un valore negativo vengono restituiti valori.

Se *buffer* è un puntatore null e *conteggio* è uguale a zero, **len** viene restituito come numero di caratteri necessari per formattare l'output, escluso il carattere di terminazione null. Per eseguire correttamente una chiamata con lo stesso *argomento* e *delle impostazioni locali* parametri, allocare un buffer contenente almeno **len** + 1 carattere.

Se *buffer* è un puntatore null e *conteggio* è diverso da zero, oppure se *formato* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** alla **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **snprintf** funzione e il **snprintf** famiglia di funzioni formattano e archiviano *conteggio* o un numero inferiore di caratteri in *buffer*. Il **snprintf** funzione archivia sempre un carattere di terminazione null, troncando l'output, se necessario. Il **snprintf** famiglia di funzioni aggiunge un carattere di terminazione null solo se la lunghezza della stringa formattata è rigorosamente minore *conteggio* caratteri. Ogni *argomento* (se presenti) vengono convertiti ed emessi in base alla specifica del formato corrispondente in *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso modulo e funziona come le *formato* argomento per [printf](printf-printf-l-wprintf-wprintf-l.md). Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente. Perché il **snprintf** funzioni non garantiscono una terminazione NULL, in particolare, quando il valore restituito è *conteggio*, assicurarsi che siano seguite da un codice che aggiunge il carattere di terminazione null. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

A partire da UCRT in Visual Studio 2015 e Windows 10 **snprintf** non è più identico a **snprintf**. Il **snprintf** comportamento della funzione è ora conforme allo standard C99.

**snwprintf** è una versione a caratteri wide **snprintf**; gli argomenti puntatori per **snwprintf** sono stringhe a caratteri "wide". Rilevamento degli errori in di codifica **snwprintf** potrebbero essere diversi da quello in **snprintf**. **snwprintf**, nello stesso modo **swprintf**, scrive l'output in una stringa anziché una destinazione di tipo **FILE**.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.

In C++ queste funzioni presentano overload dei modelli che richiamano le relative controparti più sicure e recenti. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**sntprintf**|**_snprintf**|**_snprintf**|**_snwprintf**|
|**sntprintf_l**|**_snprintf_l**|**_snprintf_l**|**_snwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**snprintf**, **snprintf**, **snprintf_l**|\<stdio.h>|
|**snwprintf**, **snwprintf_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_snprintf.c
// compile with: /W3
#include <stdio.h>
#include <stdlib.h>

#if !defined(__cplusplus)
typedef int bool;
const bool true = 1;
const bool false = 0;
#endif

#define FAIL 0 // change to 1 and see what happens

int main(void)
{
   char buffer[200];
   const static char s[] = "computer"
#if FAIL
"computercomputercomputercomputercomputercomputercomputercomputer"
"computercomputercomputercomputercomputercomputercomputercomputer"
"computercomputercomputercomputercomputercomputercomputercomputer"
"computercomputercomputercomputercomputercomputercomputercomputer"
#endif
   ;
   const char c = 'l';
   const int i = 35;
#if FAIL
   const double fp = 1e300; // doesn't fit in the buffer
#else
   const double fp = 1.7320534;
#endif
   /* !subtract one to prevent "squeezing out" the terminal nul! */
   const int bufferSize = sizeof(buffer)/sizeof(buffer[0]) - 1;
   int bufferUsed = 0;
   int bufferLeft = bufferSize - bufferUsed;
   bool bSuccess = true;
   buffer[0] = 0;

   /* Format and print various data: */

   if (bufferLeft > 0)
   {
      int perElementBufferUsed = _snprintf(&buffer[bufferUsed],
      bufferLeft, "   String: %s\n", s ); // C4996
      // Note: _snprintf is deprecated; consider _snprintf_s instead
      if (bSuccess = (perElementBufferUsed >= 0))
      {
         bufferUsed += perElementBufferUsed;
         bufferLeft -= perElementBufferUsed;
         if (bufferLeft > 0)
         {
            int perElementBufferUsed = _snprintf(&buffer[bufferUsed],
            bufferLeft, "   Character: %c\n", c ); // C4996
            if (bSuccess = (perElementBufferUsed >= 0))
            {
               bufferUsed += perElementBufferUsed;
               bufferLeft -= perElementBufferUsed;
               if (bufferLeft > 0)
               {
                  int perElementBufferUsed = _snprintf(&buffer
                  [bufferUsed], bufferLeft, "   Integer: %d\n", i ); // C4996
                  if (bSuccess = (perElementBufferUsed >= 0))
                  {
                     bufferUsed += perElementBufferUsed;
                     bufferLeft -= perElementBufferUsed;
                     if (bufferLeft > 0)
                     {
                        int perElementBufferUsed = _snprintf(&buffer
                        [bufferUsed], bufferLeft, "   Real: %f\n", fp ); // C4996
                        if (bSuccess = (perElementBufferUsed >= 0))
                        {
                           bufferUsed += perElementBufferUsed;
                        }
                     }
                  }
               }
            }
         }
      }
   }

   if (!bSuccess)
   {
      printf("%s\n", "failure");
   }
   else
   {
      /* !store nul because _snprintf doesn't necessarily (if the string
       * fits without the terminal nul, but not with it)!
       * bufferUsed might be as large as bufferSize, which normally is
       * like going one element beyond a buffer, but in this case
       * subtracted one from bufferSize, so we're ok.
       */
      buffer[bufferUsed] = 0;
      printf( "Output:\n%s\ncharacter count = %d\n", buffer, bufferUsed );
   }
   return EXIT_SUCCESS;
}
```

```Output
Output:
   String: computer
   Character: l
   Integer: 35
   Real: 1.732053

character count = 69
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
