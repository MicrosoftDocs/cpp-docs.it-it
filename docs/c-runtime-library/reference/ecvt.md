---
title: _ecvt
ms.date: 04/05/2018
api_name:
- _ecvt
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
ms.openlocfilehash: 9f91733c566c1782d5ccfc9a7c01e490a5915a85
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70942052"
---
# <a name="_ecvt"></a>_ecvt

Converte un numero **doppio** in una stringa. È disponibile una versione più sicura di questa funzione; vedere [_ecvt_s](ecvt-s.md).

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

*value*<br/>
Numero da convertire.

*count*<br/>
Numero di cifre archiviate.

*dec*<br/>
Posizione del separatore decimale archiviata.

*sign*<br/>
Segno del numero convertito.

## <a name="return-value"></a>Valore restituito

**_ecvt** restituisce un puntatore alla stringa di cifre; **Null** se si è verificato un errore.

## <a name="remarks"></a>Note

La funzione **_ecvt** converte un numero a virgola mobile in una stringa di caratteri. Il parametro *value* è il numero a virgola mobile da convertire. Questa funzione Archivia fino a *contare* le cifre del *valore* come stringa e aggiunge un carattere null (' \ 0'). Se il numero di cifre in *value* supera il *conteggio*, la cifra di ordine inferiore viene arrotondata. Se sono presenti meno di un *numero* di cifre, la stringa viene riempita con zeri.

Il numero totale di cifre restituite da **_ecvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti da *Dec* e *firmare* dopo la chiamata. Il parametro *Dec* punta a un valore integer che indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro *Sign* punta a un Integer che indica il segno del numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.

La differenza tra **_ecvt** e **_fcvt** è l'interpretazione del parametro *count* . **_ecvt** interpreta *count* come il numero totale di cifre nella stringa di output, mentre **_fcvt** interpreta il *conteggio* come numero di cifre dopo il separatore decimale.

**_ecvt** e **_fcvt** usano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste routine elimina definitivamente i risultati della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *Dec* o *Sign* è **null**o *count* è 0, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e viene restituito **null** .

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_ecvt**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_fcvt](fcvt.md)<br/>
[_gcvt](gcvt.md)<br/>
