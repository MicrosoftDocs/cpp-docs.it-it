---
title: fputc, fputwc
ms.date: 11/04/2016
apiname:
- fputc
- fputwc
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
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
ms.openlocfilehash: fc06c9f2060baae63071339768cef11fc5f34023
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62288019"
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

*c*<br/>
Carattere da scrivere.

*stream*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il carattere scritto. Per la **fputc**, un valore restituito **EOF** indica un errore. Per la **fputwc**, un valore restituito **WEOF** indica un errore. Se *stream* viene **NULL**, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, restituiscono **EOF** e impostare **errno** al **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ognuna di queste funzioni scrive il carattere singolo *c* in un file in corrispondenza della posizione indicata dall'indicatore di posizione file associato (se definiti) e sposta in avanti l'indicatore come appropriato. Nel caso del **fputc** e **fputwc**, è associato il file *flusso*. Se il file non è in grado di supportare le richieste di posizionamento o è stato aperto in modalità Append, il carattere viene aggiunto alla fine del flusso.

Le due funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **fputc** non supporta attualmente l'output in un flusso UNICODE.

Le versioni con suffisso **_nolock** sono identiche, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread. Per altre informazioni, vedere [_fputc_nolock, _fputwc_nolock](fputc-nolock-fputwc-nolock.md).

Seguono note specifiche per le routine.

|Routine|Note|
|-------------|-------------|
|**fputc**|Equivalente a **putc**, ma implementata solo come funzione, anziché come una funzione e macro.|
|**fputwc**|Versione a caratteri Wide di **fputc**. Scrive *c* come un carattere multibyte o un carattere Wide a seconda se *stream* viene aperto in modalità testo o binario.|

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_fputtc**|**fputc**|**fputc**|**fputwc**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fputc**|\<stdio.h>|
|**fputwc**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle App Universal Windows Platform (UWP). L'handle del flusso standard associati con la console —**stdin**, **stdout**, e **stderr**, ovvero devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
