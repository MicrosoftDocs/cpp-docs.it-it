---
title: printf_s, _printf_s_l, wprintf_s, _wprintf_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _printf_s_l
- wprintf_s
- _wprintf_s_l
- printf_s
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
apitype: DLLExport
f1_keywords:
- wprintf_s
- printf_s
dev_langs:
- C++
helpviewer_keywords:
- wprintf_s function
- tprintf_s function
- _tprintf_s function
- printf_s_l function
- printf_s function
- _printf_s_l function
- printf function, format specification fields
- printf function, using
- _tprintf_s_l function
- wprintf_s_l function
- formatted text [C++]
- tprintf_s_l function
- _wprintf_s_l function
ms.assetid: 044ebb2e-5cc1-445d-bb4c-f084b405615b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2ffe17ed1fc562b61d306294e970a070b03186e7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="printfs-printfsl-wprintfs-wprintfsl"></a>printf_s, _printf_s_l, wprintf_s, _wprintf_s_l

Stampa output formattato nel flusso di output standard. Queste versioni di [printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int printf_s(
   const char *format [,
   argument]...
);
int _printf_s_l(
   const char *format,
   locale_t locale [,
   argument]...
);
int wprintf_s(
   const wchar_t *format [,
   argument]...
);
int _wprintf_s_l(
   const wchar_t *format,
   locale_t locale [,
   argument]...
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Controllo del formato.

*Argomento*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri stampati o un valore negativo se si verifica un errore.

## <a name="remarks"></a>Note

Il **printf_s** funzione formatta e visualizza una serie di caratteri e valori nel flusso di output standard **stdout**. Se gli argomenti seguono il *formato* stringa, la *formato* stringa deve contenere specifiche che determinano il formato di output per gli argomenti.

La differenza principale tra **printf_s** e **printf** consiste nel fatto che **printf_s** controlla la stringa di formato per i caratteri di formattazione validi, mentre **printf**  verifica solo se la stringa di formato è un puntatore null. Se il controllo non riesce, viene richiamato un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e imposta **errno** alla **EINVAL**.

Per informazioni sul **errno** e codici di errore, vedere [doserrno, errno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

**printf_s** e **fprintf_s** si comportano in modo identico con la differenza che **printf_s** scritto l'output **stdout** anziché in una destinazione di tipo **FILE**. Per altre informazioni, vedere [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md).

**wprintf_s** è una versione a caratteri wide **printf_s**; *formato* è una stringa di caratteri "wide". **wprintf_s** e **printf_s** comportarsi in modo analogo, se il flusso viene aperto in modalità ANSI. **printf_s** attualmente non supporta output in un flusso UNICODE.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_unicode definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tprintf_s**|**printf_s**|**printf_s**|**wprintf_s**|
|**tprintf_s_l**|**_printf_s_l**|**_printf_s_l**|**_wprintf_s_l**|

Il *formato* argomento è costituito da caratteri ordinari, le sequenze di escape, e (se argomenti seguire *formato*) specifiche di formato. I caratteri ordinari e le sequenze di escape vengono copiate **stdout** in ordine di visualizzazione. Ad esempio, la riga di comando

```C
printf_s("Line one\n\t\tLine two\n");
```

produce l'output

```Output
Line one
        Line two
```

[Le specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md) iniziano sempre con un segno di percentuale (**%**) e vengono letti da sinistra a destra. Quando si **printf_s** rileva prima specifica di formato (se presente), converte il valore del primo argomento dopo *formato* e di conseguenza. La seconda specifica di formato fa sì che venga convertito e restituito il secondo argomento e così via. Se sono presenti più argomenti che specifiche di formato, gli argomenti aggiuntivi vengono ignorati. I risultati sono indefiniti in mancanza di argomenti sufficienti per tutte le specifiche di formato.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**printf_s**, **printf_s_l**|\<stdio.h>|
|**wprintf_s**, **wprintf_s_l**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app di piattaforma UWP (Universal Windows). Gli handle di flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_printf_s.c
/* This program uses the printf_s and wprintf_s functions
* to produce formatted output.
*/

#include <stdio.h>

int main( void )
{
   char   ch = 'h', *string = "computer";
   int    count = -9234;
   double fp = 251.7366;
   wchar_t wch = L'w', *wstring = L"Unicode";

   /* Display integers. */
   printf_s( "Integer formats:\n"
           "   Decimal: %d  Justified: %.6d  Unsigned: %u\n",
           count, count, count );

   printf_s( "Decimal %d as:\n   Hex: %Xh  C hex: 0x%x  Octal: %o\n",
            count, count, count, count );

   /* Display in different radixes. */
   printf_s( "Digits 10 equal:\n   Hex: %i  Octal: %i  Decimal: %i\n",
            0x10, 010, 10 );

   /* Display characters. */

   printf_s("Characters in field (1):\n%10c%5hc%5C%5lc\n", ch, ch, wch, wch);
   wprintf_s(L"Characters in field (2):\n%10C%5hc%5c%5lc\n", ch, ch, wch, wch);

   /* Display strings. */

   printf_s("Strings in field (1):\n%25s\n%25.4hs\n   %S%25.3ls\n",
   string, string, wstring, wstring);
   wprintf_s(L"Strings in field (2):\n%25S\n%25.4hs\n   %s%25.3ls\n",
       string, string, wstring, wstring);

   /* Display real numbers. */
   printf_s( "Real numbers:\n   %f %.2f %e %E\n", fp, fp, fp, fp );

   /* Display pointer. */
   printf_s( "\nAddress as:   %p\n", &count);

}
```

### <a name="sample-output"></a>Esempio di output

```Output
Integer formats:
   Decimal: -9234  Justified: -009234  Unsigned: 4294958062
Decimal -9234 as:
   Hex: FFFFDBEEh  C hex: 0xffffdbee  Octal: 37777755756
Digits 10 equal:
   Hex: 16  Octal: 8  Decimal: 10
Characters in field (1):
         h    h    w    w
Characters in field (2):
         h    h    w    w
Strings in field (1):
                 computer
                     comp
   Unicode                      Uni
Strings in field (2):
                 computer
                     comp
   Unicode                      Uni
Real numbers:
   251.736600 251.74 2.517366e+002 2.517366E+002

Address as:   0012FF78

```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)<br/>
