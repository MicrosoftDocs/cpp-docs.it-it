---
description: 'Altre informazioni su: vscanf_s, vwscanf_s'
title: vscanf_s, vwscanf_s
ms.date: 11/04/2016
api_name:
- vscanf_s
- vwscanf_s
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _vtscanf_s
- vscanf_s
- vwscanf_s
ms.assetid: 23a1c383-5b01-4887-93ce-534a1e38ed93
ms.openlocfilehash: 4bd44b3e89ec1358482ed6161907fd30f13e062d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342205"
---
# <a name="vscanf_s-vwscanf_s"></a>vscanf_s, vwscanf_s

Legge i dati formattati dal flusso di input standard. Queste versioni di [vscanf, vwscanf](vscanf-vwscanf.md) includono miglioramenti per sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int vscanf_s(
   const char *format,
   va_list arglist
);
int vwscanf_s(
   const wchar_t *format,
   va_list arglist
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Stringa di formato controllo.

*arglist*<br/>
Elenco di argomenti variabili.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di campi che vengono convertiti ed assegnati correttamente; il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito è **EOF** per un errore o se viene rilevato il carattere di fine del file o il carattere di fine della stringa nel primo tentativo di leggere un carattere. Se *Format* è un puntatore **null** , viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **vscanf_s** e **vwscanf_s** restituire **EOF** e impostare **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **vscanf_s** legge i dati dal flusso di input standard **stdin** e scrive i dati nelle posizioni fornite dall'elenco di argomenti *arglist* . Ogni argomento nell'elenco deve essere un puntatore a una variabile di un tipo che corrisponde a un identificatore di tipo nel *formato*. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

**vwscanf_s** è una versione a caratteri wide di **vscanf_s**; l'argomento *Format* per **vwscanf_s** è una stringa di caratteri wide. **vwscanf_s** e **vscanf_s** si comportano in modo identico se il flusso viene aperto in modalità ANSI. **vscanf_s** non supporta l'input da un flusso Unicode.

A differenza di **vscanf** e **vwscanf**, **vscanf_s** e **vwscanf_s** richiedono la specifica delle dimensioni del buffer per tutti i parametri di input di tipo **c**, **c**, **s**, **s** o set di controlli stringa racchiusi tra **[]**. La dimensione del buffer in caratteri viene passata come parametro aggiuntivo segue immediatamente dopo il puntatore del buffer o della variabile. La dimensione del buffer in caratteri per una **`wchar_t`** stringa non corrisponde alle dimensioni in byte.

La dimensione del buffer include il carattere di terminazione null. È possibile usare un campo di specifica della larghezza per assicurarsi che il token che viene letto possa essere inserito nel buffer. Se non viene utilizzato alcun campo di specifica di larghezza e il token letto è troppo grande per entrare nel buffer, non vengono scritti dati nel buffer.

> [!NOTE]
> Il parametro *size* è di tipo **`unsigned`** , non **size_t**.

Per altre informazioni, vedere [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vtscanf_s**|**vscanf_s**|**vscanf_s**|**vwscanf_s**|

Per altre informazioni, vedere [Campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**vscanf_s**|\<stdio.h>|
|**wscanf_s**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console, **stdin**, **stdout** e **stderr** devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_vscanf_s.c
// compile with: /W3
// This program uses the vscanf_s and vwscanf_s functions
// to read formatted input.

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int call_vscanf_s(char *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vscanf_s(format, arglist);
    va_end(arglist);
    return result;
}

int call_vwscanf_s(wchar_t *format, ...)
{
    int result;
    va_list arglist;
    va_start(arglist, format);
    result = vwscanf_s(format, arglist);
    va_end(arglist);
    return result;
}

int main( void )
{
    int   i, result;
    float fp;
    char  c, s[81];
    wchar_t wc, ws[81];
    result = call_vscanf_s("%d %f %c %C %s %S", &i, &fp, &c, 1,
                           &wc, 1, s, _countof(s), ws, _countof(ws) );
    printf( "The number of fields input is %d\n", result );
    printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
    result = call_vwscanf_s(L"%d %f %hc %lc %S %ls", &i, &fp, &c, 2,
                            &wc, 1, s, _countof(s), ws, _countof(ws) );
    wprintf( L"The number of fields input is %d\n", result );
    wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);
}
```

Quando questo programma riceve l'input nell'esempio, produce l'output seguente:

```Input
71 98.6 h z Byte characters
36 92.3 y n Wide characters
```

```Output
The number of fields input is 6
The contents are: 71 98.599998 h z Byte characters
The number of fields input is 6
The contents are: 36 92.300003 y n Wide characters
```

## <a name="see-also"></a>Vedi anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[vscanf, vwscanf](vscanf-vwscanf.md)<br/>
