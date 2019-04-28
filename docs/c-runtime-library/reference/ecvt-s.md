---
title: _ecvt_s
ms.date: 04/05/2018
apiname:
- _ecvt_s
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
- ecvt_s
- _ecvt_s
helpviewer_keywords:
- _ecvt_s function
- ecvt_s function
- numbers, converting
- converting double numbers
ms.assetid: d52fb0a6-cb91-423f-80b3-952a8955d914
ms.openlocfilehash: 0123c618eb5ba614bd8e5b5b3f1f4b0aff539c4c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62288253"
---
# <a name="ecvts"></a>_ecvt_s

Converte un **doppie** numeri in una stringa. Questa è una versione di [_ecvt](ecvt.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md) (Funzionalità di sicurezza in CRT).

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

Zero in caso di esito positivo. Il valore restituito è un codice di errore se si verifica un errore. I codici di errore sono definiti in Errno.h. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

Se uno parametro non è valido, come elencato nella tabella seguente, questa funzione chiama il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, la funzione imposta **errno** al **EINVAL** e restituisce **EINVAL**.

### <a name="error-conditions"></a>Condizioni di errore

|*_Buffer*|*_SizeInBytes*|_Value|_Count|_Dec|_Sign|Valore restituito|Valore in *buffer*|
|---------------|--------------------|-------------|-------------|-----------|------------|------------------|-----------------------|
|**NULL**|qualsiasi|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|Non modificato.|
|Non **NULL** (punta alla memoria valida)|<=0|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**EINVAL**|Non modificato.|
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**NULL**|qualsiasi|**EINVAL**|Non modificato.|
|qualsiasi|qualsiasi|qualsiasi|qualsiasi|qualsiasi|**NULL**|**EINVAL**|Non modificato.|

## <a name="security-issues"></a>Problemi relativi alla sicurezza

**ecvt_s** potrebbe generare una violazione di accesso se *buffer* punta alla memoria valida e non è **NULL**.

## <a name="remarks"></a>Note

Il **ecvt_s** funzione converte un numero a virgola mobile in una stringa di caratteri. Il *Value* parametro indica il numero a virgola mobile da convertire. Questa funzione consente di archiviare fino a *conteggio* cifre *Value* sotto forma di stringa e aggiunge un carattere null ('\0'). Se il numero di cifre nella *Value* supera *Count*, la cifra meno significativa viene arrotondata. Se ci sono meno *conteggio* cifre, la stringa viene riempita con zeri.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *Value* può essere ottenuto dalla *_Dec* e *_Sign* dopo la chiamata. Il *_Dec* punta a un valore integer che indica la posizione del separatore decimale rispetto all'inizio della stringa parametro. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il *_Sign* parametro punta a un numero intero che indica il segno del numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.

Un buffer di lunghezza **_CVTBUFSIZE** è sufficiente per qualsiasi valore a virgola mobile.

La differenza tra **ecvt_s** e **fcvt_s** consiste nell'interpretazione dei *Count* parametro. **ecvt_s** interpreta *Count* come numero totale di cifre nella stringa di output, mentre **fcvt_s** interpreta *Count* come il numero di cifre dopo il il separatore decimale.

In C++ l'uso di questa funzione è semplificato da un overload del modello. L'overload può dedurre la lunghezza del buffer automaticamente, evitando la necessità di specificare un argomento di dimensione. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

Le versioni di debug di questa funzione riempiono prima il buffer con 0xFD. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazione facoltativa|
|--------------|---------------------|---------------------|
|**_ecvt_s**|\<stdlib.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt](ecvt.md)<br/>
[_fcvt_s](fcvt-s.md)<br/>
[_gcvt_s](gcvt-s.md)<br/>
