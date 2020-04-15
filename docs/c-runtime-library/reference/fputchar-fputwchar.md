---
title: _fputchar, _fputwchar
ms.date: 4/2/2020
api_name:
- _fputchar
- _fputwchar
- _o__fputchar
- _o__fputwchar
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
- api-ms-win-crt-stdio-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fputtchar
- _fputwchar
- fputwchar
- _fputtchar
- _fputchar
helpviewer_keywords:
- fputchar function
- standard output, writing to
- _fputtchar function
- fputwchar function
- _fputwchar function
- fputtchar function
- _fputchar function
ms.assetid: b92ff600-a924-4f2b-b0e7-3097ee31bdff
ms.openlocfilehash: 29d23dcaba75ad87b462a1a87c7a2ad9c8c7298b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81346161"
---
# <a name="_fputchar-_fputwchar"></a>_fputchar, _fputwchar

Scrive un carattere in **stdout**.

## <a name="syntax"></a>Sintassi

```C
int _fputchar(
   int c
);
wint_t _fputwchar(
   wchar_t c
);
```

### <a name="parameters"></a>Parametri

*C*<br/>
Carattere da scrivere.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il carattere scritto. Ad **_fputchar**, un valore restituito di **EOF** indica un errore. Ad **_fputwchar**, un valore restituito di **WEOF** indica un errore. Se c è **NULL**, queste funzioni generano un'eccezione di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituiscono **EOF** (o **WEOF**) e impostano **errno** su **EINVAL**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Entrambe queste funzioni scrivono il carattere singolo *c* a **stdout** e fa avanzare l'indicatore come appropriato. **_fputchar** è `fputc( stdout )`equivalente a . Equivale anche a **putchar**, ma implementato solo come funzione, anziché come funzione e macro. A differenza di **fputc** e **putchar**, queste funzioni non sono compatibili con lo standard ANSI.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_fputtchar**|**_fputchar**|**_fputchar**|**_fputwchar**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fputchar**|\<stdio.h>|
|**_fputwchar**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app UWP (Universal Windows Platform). Gli handle di flusso standard associati alla console,**stdin**, **stdout**e **stderr**, devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano utilizzarli nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fputchar.c
// This program uses _fputchar
// to send a character array to stdout.

#include <stdio.h>

int main( void )
{
    char strptr[] = "This is a test of _fputchar!!\n";
    char *p = NULL;

    // Print line to stream using _fputchar.
    p = strptr;
    while( (*p != '\0') && _fputchar( *(p++) ) != EOF )
      ;
}
```

```Output
This is a test of _fputchar!!
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
