---
title: _fcvt_s
ms.date: 4/2/2020
api_name:
- _fcvt_s
- _o__fcvt_s
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
- api-ms-win-crt-convert-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fcvt_s
- _fcvt_s
helpviewer_keywords:
- fcvt_s function
- converting floating point, to strings
- floating-point functions, converting number to string
- _fcvt_s function
ms.assetid: 48671197-1d29-4c2b-a5d8-d2368f5f68a1
ms.openlocfilehash: 557a1d359c389f0eb7477aab4bf9cbb51558703a
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82920196"
---
# <a name="_fcvt_s"></a>_fcvt_s

Converte un numero a virgola mobile in una stringa. Questa è una versione di [_fcvt](fcvt.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _fcvt_s(
   char* buffer,
   size_t sizeInBytes,
   double value,
   int count,
   int *dec,
   int *sign
);
template <size_t size>
errno_t _fcvt_s(
   char (&buffer)[size],
   double value,
   int count,
   int *dec,
   int *sign
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Buffer specificato che conterrà il risultato della conversione.

*sizeInBytes*<br/>
Dimensioni del buffer in byte.

*value*<br/>
Numero da convertire.

*count*<br/>
Numero di cifre dopo il separatore decimale.

*Dec*<br/>
Puntatore alla posizione del separatore decimale archiviata.

*Sign*<br/>
Puntatore all'indicatore di segno archiviato.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se uno parametro non è valido, come elencato nella tabella seguente, questa funzione chiama il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*sizeInBytes*|value|count|dec|sign|Return|Valore nel *buffer*|
|--------------|-------------------|-----------|-----------|---------|----------|------------|-----------------------|
|**NULL**|any|any|any|any|any|**EINVAL**|Non modificato.|
|Not **null** (punta alla memoria valida)|<=0|any|any|any|any|**EINVAL**|Non modificato.|
|any|any|any|any|**NULL**|any|**EINVAL**|Non modificato.|
|any|any|any|any|any|**NULL**|**EINVAL**|Non modificato.|

## <a name="security-issues"></a>Problemi di sicurezza

**_fcvt_s** potrebbe generare una violazione di accesso se il *buffer* non punta alla memoria valida e non è **null**.

## <a name="remarks"></a>Osservazioni

La funzione **_fcvt_s** converte un numero a virgola mobile in una stringa di caratteri con terminazione null. Il parametro *value* è il numero a virgola mobile da convertire. **_fcvt_s** archivia le cifre del *valore* come stringa e aggiunge un carattere null (' \ 0'). Il parametro *count* specifica il numero di cifre da archiviare dopo la virgola decimale. Le cifre in eccedenza vengono arrotondate per *calcolare* le posizioni. Se sono presenti meno di un *numero* di cifre di precisione, la stringa viene riempita con zeri.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti da *Dec* e *firmare* dopo la chiamata. Il parametro *Dec* punta a un valore integer. Questo valore integer assegna la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il *segno* del parametro punta a un Integer che indica il segno del *valore*. Il valore integer viene impostato su 0 se il *valore* è positivo e viene impostato su un numero diverso da zero se il *valore* è negativo.

Un buffer di lunghezza **_CVTBUFSIZE** è sufficiente per qualsiasi valore a virgola mobile.

La differenza tra **_ecvt_s** e **_fcvt_s** è nell'interpretazione del parametro *count* . **_ecvt_s** interpreta il *conteggio* come il numero totale di cifre nella stringa di output e **_fcvt_s** interpreta il *conteggio* come numero di cifre dopo il separatore decimale.

In C++ l'uso di questa funzione è semplificato da un overload del modello. L'overload può dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

La versione di debug di questa funzione riempie prima di tutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_fcvt_s**|\<stdlib.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

**Librerie:** tutte le versioni delle [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// fcvt_s.c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    char * buf = 0;
    int decimal;
    int sign;
    int err;

    buf = (char*) malloc(_CVTBUFSIZE);
    err = _fcvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);

    if (err != 0)
    {
        printf("_fcvt_s failed with error code %d\n", err);
        exit(1);
    }

    printf("Converted value: %s\n", buf);
}
```

```Output
Converted value: 120000
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt_s](ecvt-s.md)<br/>
[_gcvt_s](gcvt-s.md)<br/>
[_fcvt](fcvt.md)<br/>
