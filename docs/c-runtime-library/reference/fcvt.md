---
title: _fcvt
ms.date: 4/2/2020
api_name:
- _fcvt
- _o__fcvt
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
- _fcvt
helpviewer_keywords:
- converting floating point, to strings
- _fcvt function
- floating-point functions, converting number to string
- fcvt function
- floating-point functions
ms.assetid: 74584c88-f0dd-4907-8fca-52da5df583f5
ms.openlocfilehash: 2ca8a7fcd58e91ffa8982f30117b09af587d96cf
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82920191"
---
# <a name="_fcvt"></a>_fcvt

Converte un numero a virgola mobile in una stringa. È disponibile una versione più sicura di questa funzione. Vedere [_fcvt_s](fcvt-s.md).

## <a name="syntax"></a>Sintassi

```C
char *_fcvt(
   double value,
   int count,
   int *dec,
   int *sign
);
```

### <a name="parameters"></a>Parametri

*value*<br/>
Numero da convertire.

*count*<br/>
Numero di cifre dopo il separatore decimale.

*Dec*<br/>
Puntatore alla posizione del separatore decimale archiviata.

*Sign*<br/>
Puntatore all'indicatore di segno archiviato.

## <a name="return-value"></a>Valore restituito

**_fcvt** restituisce un puntatore alla stringa di cifre, **null** in errore.

## <a name="remarks"></a>Osservazioni

La funzione **_fcvt** converte un numero a virgola mobile in una stringa di caratteri con terminazione null. Il parametro *value* è il numero a virgola mobile da convertire. **_fcvt** archivia le cifre del *valore* come stringa e aggiunge un carattere null (' \ 0'). Il parametro *count* specifica il numero di cifre da archiviare dopo la virgola decimale. Le cifre in eccedenza vengono arrotondate per *calcolare* le posizioni. Se sono presenti meno di un *numero* di cifre di precisione, la stringa viene riempita con zeri.

Il numero totale di cifre restituite da **_fcvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti da *Dec* e firmare dopo la chiamata. Il parametro *Dec* punta a un valore integer. Questo valore integer assegna la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il *segno* del parametro punta a un Integer che indica il segno del *valore*. Il valore integer viene impostato su 0 se il *valore* è positivo e viene impostato su un numero diverso da zero se il *valore* è negativo.

La differenza tra **_ecvt** e **_fcvt** è nell'interpretazione del parametro *count* . **_ecvt** interpreta *count* come numero totale di cifre nella stringa di output, mentre **_fcvt** interpreta il *conteggio* come numero di cifre dopo il separatore decimale.

**_ecvt** e **_fcvt** utilizzano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste funzioni elimina definitivamente i risultati della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *Dec* o *Sign* è **null**o *count* è 0, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e viene restituito **null** .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**_fcvt**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fcvt.c
// compile with: /W3
// This program converts the constant
// 3.1415926535 to a string and sets the pointer
// buffer to point to that string.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int  decimal, sign;
   char *buffer;
   double source = 3.1415926535;

   buffer = _fcvt( source, 7, &decimal, &sign ); // C4996
   // Note: _fcvt is deprecated; consider using _fcvt_s instead
   printf( "source: %2.10f   buffer: '%s'   decimal: %d   sign: %d\n",
            source, buffer, decimal, sign );
}
```

```Output
source: 3.1415926535   buffer: '31415927'   decimal: 1   sign: 0
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt](ecvt.md)<br/>
[_gcvt](gcvt.md)<br/>
