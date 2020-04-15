---
title: fputc, fputwc
ms.date: 4/2/2020
api_name:
- fputc
- fputwc
- _o_fputc
- _o_fputwc
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
- fputc
- fputwc
- _fputtc
helpviewer_keywords:
- streams, writing characters to
- fputtc function
- _fputtc function
- fputwc function
- fputc function
ms.assetid: 5a0a593d-43f4-4fa2-a401-ec4e23de4d2f
ms.openlocfilehash: 289e1114a936bdaa41fc59a0526db006536461f7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81346263"
---
# <a name="fputc-fputwc"></a>fputc, fputwc

Scrive un carattere in un flusso.

## <a name="syntax"></a>Sintassi

```C
int fputc(
   int c,
   FILE *stream
);
wint_t fputwc(
   wchar_t c,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*C*<br/>
Carattere da scrivere.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il carattere scritto. Per **fputc**, un valore restituito di **EOF** indica un errore. Per **fputwc**, un valore restituito di **WEOF** indica un errore. Se *stream* è **NULL**, queste funzioni richiamano il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituiscono **EOF** e impostano **errno** su **EINVAL**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Ognuna di queste funzioni scrive il singolo carattere *c* in un file nella posizione indicata dall'indicatore di posizione del file associato (se definito) e fa avanzare l'indicatore come appropriato. Nel caso di **fputc** e **fputwc**, il file è associato al *flusso*. Se il file non è in grado di supportare le richieste di posizionamento o è stato aperto in modalità Append, il carattere viene aggiunto alla fine del flusso.

Le due funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **fputc** attualmente non supporta l'output in un flusso UNICODE.

Le versioni con suffisso **_nolock** sono identiche, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread. Per altre informazioni, vedere [_fputc_nolock, _fputwc_nolock](fputc-nolock-fputwc-nolock.md).

Seguono note specifiche per le routine.

|Routine|Osservazioni|
|-------------|-------------|
|**fputc**|Equivalente a **putc**, ma implementato solo come funzione, anziché come funzione e macro.|
|**fputwc**|Versione a caratteri wide di **fputc**. Scrive *c* come carattere multibyte o carattere wide a seconda che *il flusso* venga aperto in modalità testo o in modalità binaria.|

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_fputtc**|**fputc**|**fputc**|**fputwc**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fputc**|\<stdio.h>|
|**fputwc**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app UWP (Universal Windows Platform). Gli handle di flusso standard associati alla console,**stdin**, **stdout**e **stderr**, devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano utilizzarli nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fputc.c
// This program uses fputc
// to send a character array to stdout.

#include <stdio.h>

int main( void )
{
   char strptr1[] = "This is a test of fputc!!\n";
   char *p;

   // Print line to stream using fputc.
   p = strptr1;
   while( (*p != '\0') && fputc( *(p++), stdout ) != EOF ) ;

}
```

```Output
This is a test of fputc!!
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
