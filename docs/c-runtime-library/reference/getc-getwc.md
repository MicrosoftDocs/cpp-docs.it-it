---
title: getc, getwc
ms.date: 11/04/2016
apiname:
- getwc
- getc
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
ms.openlocfilehash: bbaee79eac6802959a11f7f1ba30eaf590ecf2f6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50664867"
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

*flusso*<br/>
Flusso di input.

## <a name="return-value"></a>Valore restituito

Restituisce il carattere letto. Per indicare una condizione di fine del file, o un errore di lettura **getc** restituisce **EOF**, e **getwc** restituisce **WEOF**. Per la **getc**, usare **ferror** oppure **feof** per verificare un errore o la fine del file. Se *stream* viene **NULL**, **getc** e **getwc** richiamano il gestore di parametri non validi, come descritto in [parametro Convalida](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EOF** (o **WEOF** per **getwc**) e impostare **errno** a  **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ogni routine legge un singolo carattere da un file alla posizione corrente e incrementa il puntatore del file associato (se definito) per puntare al carattere successivo. Il file è associato *flusso*.

Queste funzioni bloccano il thread chiamante e pertanto sono thread-safe. Per una versione che non blocca i thread, vedere [_getc_nolock, _getwc_nolock](getc-nolock-getwc-nolock.md).

Seguono note specifiche per le routine.

|Routine|Note|
|-------------|-------------|
|**getc**|Uguale allo **fgetc**, ma vengono implementati come una funzione o una macro.|
|**getwc**|Versione a caratteri Wide di **getc**. Legge un carattere multibyte o un carattere Wide a seconda se *flusso* viene aperto in modalità testo o binario.|

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**gettc**|**getc**|**getc**|**getwc**|

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

### <a name="input-crtgetctxt"></a>Input: crt_getc.txt

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
