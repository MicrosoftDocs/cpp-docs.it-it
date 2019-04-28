---
title: _ecvt
ms.date: 04/05/2018
apiname:
- _ecvt
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
- _ecvt
helpviewer_keywords:
- _ecvt function
- numbers, converting
- converting double numbers
- ecvt function
ms.assetid: a916eb05-92d1-4b5c-8563-093acdb49dc8
ms.openlocfilehash: 36c9cb2e8cd9eb4dd67bb91e9e4dbd36d8d1fc8e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62288672"
---
# <a name="ecvt"></a>_ecvt

Converte un **doppie** numeri in una stringa. È disponibile una versione più sicura di questa funzione; vedere [_ecvt_s](ecvt-s.md).

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

**ecvt** restituisce un puntatore alla stringa di cifre. **NULL** se si è verificato un errore.

## <a name="remarks"></a>Note

Il **ecvt** funzione converte un numero a virgola mobile in una stringa di caratteri. Il *valore* parametro indica il numero a virgola mobile da convertire. Questa funzione consente di archiviare fino a *conteggio* cifre *valore* sotto forma di stringa e aggiunge un carattere null ('\0'). Se il numero di cifre nella *valore* supera *conteggio*, la cifra meno significativa viene arrotondata. Se ci sono meno *conteggio* cifre, la stringa viene riempita con zeri.

Il numero totale di cifre restituito da **ecvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* può essere ottenuto dalla *dec* e *sign* dopo la chiamata. Il *dec* parametro punta a un valore intero che indica la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il *sign* parametro punta a un numero intero che indica il segno del numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.

La differenza tra **ecvt** e **fcvt** consiste nell'interpretazione dei *conteggio* parametro. **ecvt** interpreta *conteggio* come numero totale di cifre nella stringa di output, mentre **fcvt** interpreta *conteggio* come il numero di cifre dopo il separatore decimale.

**ecvt** e **fcvt** usano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste routine elimina definitivamente i risultati della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *dic* o *sign* viene **NULL**, oppure *conteggio* è 0, viene richiamato il gestore di parametri non validi, come descritto in [parametro Convalida](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e **NULL** viene restituito.

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
