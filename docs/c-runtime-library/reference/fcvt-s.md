---
title: _fcvt_s
ms.date: 04/05/2018
apiname:
- _fcvt_s
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- fcvt_s
- _fcvt_s
helpviewer_keywords:
- fcvt_s function
- converting floating point, to strings
- floating-point functions, converting number to string
- _fcvt_s function
ms.assetid: 48671197-1d29-4c2b-a5d8-d2368f5f68a1
ms.openlocfilehash: 51ff3c675f1f53aee9beab629b17193164a2e7eb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62334866"
---
# <a name="fcvts"></a>_fcvt_s

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

*dec*<br/>
Puntatore alla posizione del separatore decimale archiviata.

*sign*<br/>
Puntatore all'indicatore di segno archiviato.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se uno parametro non è valido, come elencato nella tabella seguente, questa funzione chiama il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*sizeInBytes*|predefinito|count|dec|segno|INVIO|Valore in *buffer*|
|--------------|-------------------|-----------|-----------|---------|----------|------------|-----------------------|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|Non modificato.|
|Non **NULL** (punta alla memoria valida)|<=0|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|Non modificato.|
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**NULL**|qualsiasi|**EINVAL**|Non modificato.|
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**NULL**|**EINVAL**|Non modificato.|

## <a name="security-issues"></a>Problemi relativi alla sicurezza

**fcvt_s** potrebbe generare una violazione di accesso se *buffer* punta alla memoria valida e non è **NULL**.

## <a name="remarks"></a>Note

Il **fcvt_s** funzione converte un numero a virgola mobile in una stringa di caratteri con terminazione null. Il *valore* parametro indica il numero a virgola mobile da convertire. **fcvt_s** archivia le cifre del *valore* sotto forma di stringa e aggiunge un carattere null ('\0'). Il *conteggio* parametro specifica il numero di cifre da archiviare dopo il separatore decimale. Cifre in eccesso vengono arrotondate alle *conteggio* inserisce. Se ci sono meno *conteggio* cifre di precisione, la stringa viene riempita con zeri.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* può essere ottenuto dalla *dec* e *sign* dopo la chiamata. Il *dec* parametro punta a un valore intero; questo valore intero indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro *sign* punta a un numero intero che indica il segno dei *valore*. Il valore integer viene impostato su 0 se *valore* è un valore positivo e viene impostato su un numero diverso da zero se *valore* è negativo.

Un buffer di lunghezza **_CVTBUFSIZE** è sufficiente per Mobile valore del punto.

La differenza tra **ecvt_s** e **fcvt_s** consiste nell'interpretazione dei *conteggio* parametro. **ecvt_s** interpreta *conteggio* come numero totale di cifre nella stringa di output, e **fcvt_s** interpreta *conteggio* come il numero di cifre dopo il separatore decimale.

In C++ l'uso di questa funzione è semplificato da un overload del modello. L'overload può dedurre la lunghezza del buffer automaticamente, evitando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di questa funzione riempiono prima il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_fcvt_s**|\<stdlib.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

**Librerie:** Tutte le versioni del [funzionalità della libreria CRT](../../c-runtime-library/crt-library-features.md).

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt_s](ecvt-s.md)<br/>
[_gcvt_s](gcvt-s.md)<br/>
[_fcvt](fcvt.md)<br/>
