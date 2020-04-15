---
title: _ecvt
ms.date: 4/2/2020
api_name:
- _ecvt
- _o__ecvt
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
- _ecvt
helpviewer_keywords:
- _ecvt function
- numbers, converting
- converting double numbers
- ecvt function
ms.assetid: a916eb05-92d1-4b5c-8563-093acdb49dc8
ms.openlocfilehash: 5e1760d5c68e650f6fbf44866d4e368b9d6233b6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81348018"
---
# <a name="_ecvt"></a>_ecvt

Converte un numero **double** in una stringa. È disponibile una versione più sicura di questa funzione; vedere [_ecvt_s](ecvt-s.md).

## <a name="syntax"></a>Sintassi

```C
char *_ecvt(
   double value,
   int count,
   int *dec,
   int *sign
);
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Numero da convertire.

*count*<br/>
Numero di cifre archiviate.

*Dicembre*<br/>
Posizione del separatore decimale archiviata.

*Segno*<br/>
Segno del numero convertito.

## <a name="return-value"></a>Valore restituito

**_ecvt** restituisce un puntatore alla stringa di cifre; **NULL** se si è verificato un errore.

## <a name="remarks"></a>Osservazioni

La funzione **_ecvt** converte un numero a virgola mobile in una stringa di caratteri. Il parametro *value* è il numero a virgola mobile da convertire. Questa funzione archivia fino a *contare* le cifre del *valore* come stringa e aggiunge un carattere nullo (''0'). Se il numero di cifre nel *valore* supera *count*, la cifra meno significativa viene arrotondata. Se sono presenti meno di *count* cifre, la stringa viene riempita con zeri.

Il numero totale di cifre restituite da **_ecvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti da *dec* e *sign* dopo la chiamata. Il parametro *dec* punta a un valore intero che indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro *sign* punta a un numero intero che indica il segno del numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.

La differenza tra **_ecvt** e **_fcvt** è nell'interpretazione del parametro *count.* **_ecvt** interpreta il *conteggio* come il numero totale di cifre nella stringa di output, mentre **_fcvt** interpreta *il conteggio* come numero di cifre dopo il separatore decimale.

**_ecvt** e **_fcvt** utilizzano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste funzioni elimina il risultato della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *dec* o *sign* è **NULL**o *count* è 0, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e viene restituito **NULL.**

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_ecvt**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_ecvt.c
// compile with: /W3
// This program uses _ecvt to convert a
// floating-point number to a character string.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int     decimal,   sign;
   char    *buffer;
   int     precision = 10;
   double  source = 3.1415926535;

   buffer = _ecvt( source, precision, &decimal, &sign ); // C4996
   // Note: _ecvt is deprecated; consider using _ecvt_s instead
   printf( "source: %2.10f   buffer: '%s'  decimal: %d  sign: %d\n",
           source, buffer, decimal, sign );
}
```

```Output
source: 3.1415926535   buffer: '3141592654'  decimal: 1  sign: 0
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_fcvt](fcvt.md)<br/>
[_gcvt](gcvt.md)<br/>
