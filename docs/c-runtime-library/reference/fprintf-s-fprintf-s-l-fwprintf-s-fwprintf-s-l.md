---
title: fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _fprintf_s_l
- fwprintf_s
- fprintf_s
- _fwprintf_s_l
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
- _ftprintf_s
- fprintf_s
- fwprintf_s
dev_langs:
- C++
helpviewer_keywords:
- ftprintf_s_l function
- ftprintf_s function
- _fprintf_s_l function
- _ftprintf_s function
- _ftprintf_s_l function
- fwprintf_s_l function
- fwprintf_s function
- fprintf_s_l function
- fprintf_s function
- _fwprintf_s_l function
- print formatted data to streams
ms.assetid: 16067c3c-69ce-472a-8272-9aadf1f5beed
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 70f960302ee5b3a5e0c702e158396ab329aa5121
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="fprintfs-fprintfsl-fwprintfs-fwprintfsl"></a>fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l

Stampare dati formattati in un flusso. Queste sono versioni di [fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int fprintf_s(
   FILE *stream,
   const char *format [,
   argument_list ]
);
int _fprintf_s_l(
   FILE *stream,
   const char *format,
   locale_t locale [,
   argument_list ]
);
int fwprintf_s(
   FILE *stream,
   const wchar_t *format [,
   argument_list ]
);
int _fwprintf_s_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale [,
   argument_list ]
);
```

### <a name="parameters"></a>Parametri

*Flusso*<br/>
Puntatore alla struttura **FILE**.

*format*<br/>
Stringa di controllo del formato.

*argument_list*<br/>
Argomenti facoltativi per la stringa di formato.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**fprintf_s** restituisce il numero di byte scritti. **fwprintf_s** restituisce il numero di caratteri "wide" scritto. Ognuna di queste funzioni restituisce invece un valore negativo quando si verifica un errore di output.

## <a name="remarks"></a>Note

**fprintf_s** formatta e visualizza una serie di caratteri e valori di output *flusso*. Ogni argomento nel *argument_list* (se presente) viene convertita e restituita in base alla specifica del formato corrispondente in *formato*. Il *formato* argomento Usa il [formattare sintassi specifica per le funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

**fwprintf_s** è una versione a caratteri wide **fprintf_s**; nella **fwprintf_s**, *formato* è una stringa di caratteri "wide". Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **fprintf_s** attualmente non supporta output in un flusso UNICODE.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali correnti.

> [!IMPORTANT]
> Assicurarsi che *format* non sia una stringa definita dall'utente.

Ad esempio le versioni non sicure (vedere [fprintf, fprintf_l, fwprintf, fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)), queste funzioni convalidano i relativi parametri e richiamare il gestore di parametri non validi, come descritto in [convalidadeiparametri](../../c-runtime-library/parameter-validation.md), se entrambi *flusso* o *formato* è un puntatore null. La stringa di formato viene convalidata anche. Se sono presenti identificatori di formattazione sconosciuti o non corretti, queste funzioni generano l'eccezione di parametro non valido. In tutti i casi, se l'esecuzione può continuare, le funzioni restituiranno -1 e impostare **errno** alla **EINVAL**. Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**ftprintf_s**|**fprintf_s**|**fprintf_s**|**fwprintf_s**|
|**ftprintf_s_l**|**_fprintf_s_l**|**_fprintf_s_l**|**_fwprintf_s_l**|

Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fprintf_s**, **fprintf_s_l**|\<stdio.h>|
|**fwprintf_s**, **fwprintf_s_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fprintf_s.c
// This program uses fprintf_s to format various
// data and print it to the file named FPRINTF_S.OUT. It
// then displays FPRINTF_S.OUT on the screen using the system
// function to invoke the operating-system TYPE command.

#include <stdio.h>
#include <process.h>

FILE *stream;

int main( void )
{
   int    i = 10;
   double fp = 1.5;
   char   s[] = "this is a string";
   char   c = '\n';

   fopen_s( &stream, "fprintf_s.out", "w" );
   fprintf_s( stream, "%s%c", s, c );
   fprintf_s( stream, "%d\n", i );
   fprintf_s( stream, "%f\n", fp );
   fclose( stream );
   system( "type fprintf_s.out" );
}
```

```Output
this is a string
10
1.500000
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
