---
title: getc, getwc
ms.date: 11/04/2016
api_name:
- getwc
- getc
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _gettc
- getwc
- _gettchar
- getc
helpviewer_keywords:
- characters, reading
- _gettc function
- getwchar function
- streams, reading characters from
- reading characters from streams
- getc function
- getwc function
- gettc function
ms.assetid: 354ef514-d0c7-404b-92f5-995f6a834bb3
ms.openlocfilehash: ceb3ca117271e7074c6cb72c9c1f9e74ebe3bc10
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70955489"
---
# <a name="getc-getwc"></a>getc, getwc

Legge un carattere dal flusso.

## <a name="syntax"></a>Sintassi

```C
int getc(
   FILE *stream
);
wint_t getwc(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*stream*<br/>
Flusso di input.

## <a name="return-value"></a>Valore restituito

Restituisce il carattere letto. Per indicare una condizione di errore di lettura o di fine file, **GETC** restituisce **EOF**e **getwc** restituisce **WEOF**. Per **GETC**, usare **Ferrer** o **feof** per verificare la presenza di un errore o della fine del file. Se il *flusso* è **null**, **GETC** e **getwc** richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EOF** (o **WEOF** per **getwc**) e impostano **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ogni routine legge un singolo carattere da un file alla posizione corrente e incrementa il puntatore del file associato (se definito) per puntare al carattere successivo. Il file è associato al *flusso*.

Queste funzioni bloccano il thread chiamante e pertanto sono thread-safe. Per una versione che non blocca i thread, vedere [_getc_nolock, _getwc_nolock](getc-nolock-getwc-nolock.md).

Seguono note specifiche per le routine.

|Routine|Note|
|-------------|-------------|
|**getc**|Uguale a **fgetc**, ma implementato come funzione e come macro.|
|**getwc**|Versione a caratteri wide di **GETC**. Legge un carattere multibyte o un carattere wide a seconda che il *flusso* venga aperto in modalità testo o in modalità binaria.|

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_gettc**|**getc**|**getc**|**getwc**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**getc**|\<stdio.h>|
|**getwc**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_getc.c
// Use getc to read a line from a file.

#include <stdio.h>

int main()
{
    char buffer[81];
    int i, ch;
    FILE* fp;

    // Read a single line from the file "crt_getc.txt".

    fopen_s(&fp, "crt_getc.txt", "r");
    if (!fp)
    {
       printf("Failed to open file crt_getc.txt.\n");
       exit(1);
    }

    for (i = 0; (i < 80) && ((ch = getc(fp)) != EOF)
                         && (ch != '\n'); i++)
    {
        buffer[i] = (char) ch;
    }

    // Terminate string with a null character
    buffer[i] = '\0';
    printf( "Input was: %s\n", buffer);

    fclose(fp);
}
```

### <a name="input-crt_getctxt"></a>Input: crt_getc.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Input was: Line one.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
[ungetc, ungetwc](ungetc-ungetwc.md)<br/>
