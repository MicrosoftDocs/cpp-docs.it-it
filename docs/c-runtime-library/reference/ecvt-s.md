---
title: _ecvt_s
ms.date: 4/2/2020
api_name:
- _ecvt_s
- _o__ecvt_s
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ecvt_s
- _ecvt_s
helpviewer_keywords:
- _ecvt_s function
- ecvt_s function
- numbers, converting
- converting double numbers
ms.assetid: d52fb0a6-cb91-423f-80b3-952a8955d914
ms.openlocfilehash: e33840e772de770e0f05ae45d2c2d4bec7e09939
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81348052"
---
# <a name="_ecvt_s"></a>_ecvt_s

Converte un numero **double** in una stringa. Questa è una versione di [_ecvt](ecvt.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md) (Funzionalità di sicurezza in CRT).

## <a name="syntax"></a>Sintassi

```C
errno_t _ecvt_s(
   char * _Buffer,
   size_t _SizeInBytes,
   double _Value,
   int _Count,
   int *_Dec,
   int *_Sign
);
template <size_t size>
errno_t _ecvt_s(
   char (&_Buffer)[size],
   double _Value,
   int _Count,
   int *_Dec,
   int *_Sign
); // C++ only
```

### <a name="parameters"></a>Parametri

*_Buffer*<br/>
Contiene il puntatore alla stringa di cifre, il risultato della conversione.

*_SizeInBytes*<br/>
Dimensione del buffer in byte.

*_Value*<br/>
Numero da convertire.

*_Count*<br/>
Numero di cifre archiviate.

*_Dec*<br/>
Posizione del separatore decimale archiviata.

*_Sign*<br/>
Segno del numero convertito.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Se uno parametro non è valido, come elencato nella tabella seguente, questa funzione chiama il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, questa funzione imposta **errno** su **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*_Buffer*|*_SizeInBytes*|_Value|_Count|_Dec|_Sign|Valore restituito|Valore nel *buffer*|
|---------------|--------------------|-------------|-------------|-----------|------------|------------------|-----------------------|
|**Null**|any|any|any|any|any|**Einval**|Non modificato.|
|Non **NULL** (punta alla memoria valida)|<=0|any|any|any|any|**Einval**|Non modificato.|
|any|any|any|any|**Null**|any|**Einval**|Non modificato.|
|any|any|any|any|any|**Null**|**Einval**|Non modificato.|

## <a name="security-issues"></a>Problemi di sicurezza

**_ecvt_s** potrebbe generare una violazione di accesso se *buffer* non punta a memoria valida e non è **NULL**.

## <a name="remarks"></a>Osservazioni

La funzione **_ecvt_s** converte un numero a virgola mobile in una stringa di caratteri. Il *parametro _Value* è il numero a virgola mobile da convertire. Questa funzione archivia fino a *contare* le cifre di *_Value* come stringa e aggiunge un carattere nullo (''0'). Se il numero di cifre in *_Value* supera *_Count*, la cifra meno significativa viene arrotondata. Se sono presenti meno di *count* cifre, la stringa viene riempita con zeri.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *_Value* possono essere ottenuti da *_Dec* e *_Sign* dopo la chiamata. Il *_Dec* parametro punta a un valore intero che indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il *parametro _Sign* punta a un numero intero che indica il segno del numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.

Un buffer di lunghezza **_CVTBUFSIZE** è sufficiente per qualsiasi valore a virgola mobile.

La differenza tra **_ecvt_s** e **_fcvt_s** è nell'interpretazione del parametro *_Count.* **_ecvt_s** interpreta *_Count* come il numero totale di cifre nella stringa di output, mentre **_fcvt_s** interpreta *_Count* come il numero di cifre dopo il separatore decimale.

In C++ l'uso di questa funzione è semplificato da un overload del modello. L'overload può dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

La versione di debug di questa funzione riempie innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_ecvt_s**|\<stdlib.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// ecvt_s.c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main( )
{
    char * buf = 0;
    int decimal;
    int sign;
    int err;

    buf = (char*) malloc(_CVTBUFSIZE);
    err = _ecvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);

    if (err != 0)
    {
        printf("_ecvt_s failed with error code %d\n", err);
        exit(1);
    }

    printf("Converted value: %s\n", buf);
}
```

```Output
Converted value: 12000
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt](ecvt.md)<br/>
[_fcvt_s](fcvt-s.md)<br/>
[_gcvt_s](gcvt-s.md)<br/>
