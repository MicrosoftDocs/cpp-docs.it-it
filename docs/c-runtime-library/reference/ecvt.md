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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 227010fde5dc5ec82fc13c724c8d5a2f43788a8f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87234198"
---
# <a name="_ecvt"></a>_ecvt

Converte un **`double`** numero in una stringa. È disponibile una versione più sicura di questa funzione; vedere [_ecvt_s](ecvt-s.md).

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

*Dec*<br/>
Posizione del separatore decimale archiviata.

*sign*<br/>
Segno del numero convertito.

## <a name="return-value"></a>Valore restituito

**_ecvt** restituisce un puntatore alla stringa di cifre; **Null** se si è verificato un errore.

## <a name="remarks"></a>Osservazioni

La funzione **_ecvt** converte un numero a virgola mobile in una stringa di caratteri. Il parametro *value* è il numero a virgola mobile da convertire. Questa funzione Archivia fino a *contare* le cifre del *valore* come stringa e aggiunge un carattere null (' \ 0'). Se il numero di cifre in *value* supera il *conteggio*, la cifra di ordine inferiore viene arrotondata. Se sono presenti meno di un *numero* di cifre, la stringa viene riempita con zeri.

Il numero totale di cifre restituite da **_ecvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti da *Dec* e *firmare* dopo la chiamata. Il parametro *Dec* punta a un valore integer che indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro *Sign* punta a un Integer che indica il segno del numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.

La differenza tra **_ecvt** e **_fcvt** è nell'interpretazione del parametro *count* . **_ecvt** interpreta *count* come numero totale di cifre nella stringa di output, mentre **_fcvt** interpreta il *conteggio* come numero di cifre dopo il separatore decimale.

**_ecvt** e **_fcvt** utilizzano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste funzioni elimina il risultato della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *Dec* o *Sign* è **null**o *count* è 0, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e viene restituito **null** .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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
[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_fcvt](fcvt.md)<br/>
[_gcvt](gcvt.md)<br/>
