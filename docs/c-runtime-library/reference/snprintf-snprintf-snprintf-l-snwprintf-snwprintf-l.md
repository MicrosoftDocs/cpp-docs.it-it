---
title: snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l
description: Riferimento API per snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_, che scrivono i dati formattati in una stringa.
ms.date: 08/27/2020
api_name:
- _snwprintf
- _snprintf
- _snprintf_l
- _snwprintf_l
- snprintf
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: b4d8865d5297afe3d48f2bb48cc85a0d10535dfd
ms.sourcegitcommit: c8f1605354724a13566bc3b0fac3c5d98265f1d0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/28/2020
ms.locfileid: "89062198"
---
# <a name="snprintf-_snprintf-_snprintf_l-_snwprintf-_snwprintf_l"></a>snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l

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

*argument*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

Per altre informazioni, vedere [Sintassi per la specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="return-value"></a>Valore restituito

Lasciare che **Len** sia la lunghezza della stringa di dati formattata, escluso il valore null di terminazione. Sia **Len** che **count** sono il numero di caratteri per **snprintf** e **_snprintf**e il numero di caratteri wide per **_snwprintf**.

Per tutte le funzioni, **se**  <  il*conteggio*Len, i caratteri **Len** vengono archiviati nel *buffer*, viene aggiunto un carattere di terminazione null e viene restituito **Len** .

La funzione **snprintf** tronca l'output quando **Len** è maggiore o uguale al *conteggio*, inserendo un carattere di terminazione null in `buffer[count-1]` . Il valore restituito è **Len**, il numero di caratteri che sarebbe stato restituito se il *conteggio* era sufficientemente grande. La funzione **snprintf** restituisce un valore negativo se si verifica un errore di codifica.

Per tutte le funzioni diverse **da snprintf**, se **Len**  =  *count*, **Len** characters vengono archiviati nel *buffer*, non viene aggiunto alcun carattere di terminazione null e viene restituito **Len** . Se **len**  >  il*conteggio*Len, i caratteri di *conteggio* vengono archiviati nel *buffer*, non viene aggiunto alcun carattere di terminazione null e viene restituito un valore negativo.

Se *buffer* è un puntatore null e *count* è zero, **Len** viene restituito come numero di caratteri necessari per formattare l'output, escluso il carattere null di terminazione. Per eseguire correttamente una chiamata con lo stesso *argomento* e i parametri delle *impostazioni locali* , allocare un buffer contenente almeno **Len** + 1 caratteri.

Se il *buffer* è un puntatore null e *count* è diverso da zero oppure se *Format* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in convalida dei [parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1 e impostano **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **snprintf** e la famiglia **_snprintf** di funzioni formattano e archiviano il *numero* di caratteri nel *buffer*. La funzione **snprintf** archivia sempre un carattere di terminazione null, troncando l'output, se necessario. Il **_snprintf** famiglia di funzioni aggiunge un carattere di terminazione null solo se la lunghezza della stringa formattata è rigorosamente minore dei caratteri di *conteggio* . Ogni *argomento* , se presente, viene convertito e viene restituito in base alla specifica di formato corrispondente nel *formato*. Il formato è costituito da caratteri ordinari e ha lo stesso formato e la stessa funzione dell'argomento *Format* per [printf](printf-printf-l-wprintf-wprintf-l.md). Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente. Poiché le funzioni **_snprintf** non garantiscono la terminazione null, in particolare quando il valore restituito è *count*, assicurarsi che siano seguite dal codice che aggiunge il carattere di terminazione null. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

A partire da UCRT in Visual Studio 2015 e Windows 10, **snprintf** non è più identico a **_snprintf**. Il comportamento della funzione **snprintf** è ora conforme allo standard C99.

**_snwprintf** è una versione a caratteri wide di **_snprintf**; gli argomenti del puntatore per **_snwprintf** sono stringhe a caratteri wide. Il rilevamento degli errori di codifica in **_snwprintf** potrebbe differire da quello **_snprintf**. **_snwprintf**, proprio come **swprintf**, scrive l'output in una stringa anziché in una destinazione di tipo **file**.

Le versioni di queste funzioni che hanno il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.

In C++ queste funzioni presentano overload dei modelli che richiamano le relative controparti più sicure e recenti. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_sntprintf**|**_snprintf**|**_snprintf**|**_snwprintf**|
|**_sntprintf_l**|**_snprintf_l**|**_snprintf_l**|**_snwprintf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**snprintf**, **_snprintf**,  **_snprintf_l**|\<stdio.h>|
|**_snwprintf**, **_snwprintf_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
   /* !subtract one to prevent "squeezing out" the terminal null! */
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
      /* !store null because _snprintf doesn't necessarily (if the string
       * fits without the terminal null, but not with it)!
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
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
