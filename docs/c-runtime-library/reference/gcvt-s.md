---
title: _gcvt_s
ms.date: 04/05/2018
apiname:
- _gcvt_s
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
- _gcvt_s
- gcvt_s
helpviewer_keywords:
- _gcvt_s function
- _CVTBUFSIZE
- floating-point functions, converting number to string
- gcvt_s function
- numbers, converting to strings
- conversions, floating point to strings
- strings [C++], converting from floating point
- CVTBUFSIZE
ms.assetid: 0a8d8a26-5940-4ae3-835e-0aa6ec1b0744
ms.openlocfilehash: 168e0657150d072bbe41cd0ad6e914ca1f53e512
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50554962"
---
# <a name="gcvts"></a>_gcvt_s

Converte un valore a virgola mobile in stringa. Questa è una versione di [_gcvt](gcvt.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _gcvt_s(
   char *buffer,
   size_t sizeInBytes,
   double value,
   int digits
);
template <size_t cchStr>
errno_t _gcvt_s(
   char (&buffer)[cchStr],
   double value,
   int digits
); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Buffer per l'archiviazione del risultato della conversione.

*sizeInBytes*<br/>
Dimensioni del buffer.

*valore*<br/>
Valore da convertire.

*cifre*<br/>
Numero di cifre significative archiviate.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Se si verifica un errore a causa di un parametro non valido (vedere la tabella seguente per i valori non validi), viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, viene restituito un codice di errore. I codici di errore sono definiti in Errno.h. Per un elenco di questi errori, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

### <a name="error-conditions"></a>Condizioni di errore

|*buffer*|*sizeInBytes*|*valore*|*cifre*|INVIO|Valore in *buffer*|
|--------------|-------------------|-------------|--------------|------------|-----------------------|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|Non modificato.|
|Non **NULL** (punta alla memoria valida)|zero|qualsiasi|qualsiasi|**EINVAL**|Non modificato.|
|Non **NULL** (punta alla memoria valida)|qualsiasi|qualsiasi|>= *sizeInBytes*|**EINVAL**|Non modificato.|

**Problemi di sicurezza**

**gcvt_s** può generare una violazione di accesso se *buffer* punta alla memoria valida e non è **NULL**.

## <a name="remarks"></a>Note

Il **gcvt_s** funzione converte a virgola mobile *valore* in una stringa di caratteri (che include un separatore decimale e un possibile byte del segno) e archivia la stringa nella *buffer* . *buffer* deve essere sufficientemente grande da contenere il valore convertito oltre a un carattere di terminazione null, che viene aggiunto automaticamente. Un buffer di lunghezza **_CVTBUFSIZE** è sufficiente per Mobile valore del punto. Se una dimensione del buffer *cifre* + 1 viene usato, la funzione non sovrascriverà la fine del buffer, pertanto assicurarsi di specificare un buffer sufficiente per questa operazione. **gcvt_s** tenta di produrre *cifre* cifre nel formato decimale. Se non è possibile, produce *cifre* cifre nel formato esponenziale. Gli zeri finali possono essere eliminati nella conversione.

In C++ l'uso di questa funzione è semplificato da un overload del modello. L'overload può dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di questa funzione riempiono prima il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_gcvt_s**|\<stdlib.h>|\<error.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_gcvt_s.c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    char buf[_CVTBUFSIZE];
    int decimal;
    int sign;
    int err;

    err = _gcvt_s(buf, _CVTBUFSIZE, 1.2, 5);

    if (err != 0)
    {
        printf("_gcvt_s failed with error code %d\n", err);
        exit(1);
    }

    printf("Converted value: %s\n", buf);
}
```

```Output
Converted value: 1.2
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt_s](ecvt-s.md)<br/>
[_fcvt_s](fcvt-s.md)<br/>
[_gcvt](gcvt.md)<br/>
