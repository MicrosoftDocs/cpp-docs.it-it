---
title: _ecvt | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- _ecvt function
- numbers, converting
- converting double numbers
- ecvt function
ms.assetid: a916eb05-92d1-4b5c-8563-093acdb49dc8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 63514db5abe0a7cd531590dd419aa4b5931e7729
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
---
# <a name="ecvt"></a>_ecvt

Converte un **doppie** numero in una stringa. È disponibile una versione più sicura di questa funzione; vedere [_ecvt_s](ecvt-s.md).

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

*valore*<br/>
Numero da convertire.

*count*<br/>
Numero di cifre archiviate.

*dec*<br/>
Posizione del separatore decimale archiviata.

*sign*<br/>
Segno del numero convertito.

## <a name="return-value"></a>Valore restituito

**ecvt** restituisce un puntatore alla stringa di cifre; **NULL** se si è verificato un errore.

## <a name="remarks"></a>Note

Il **ecvt** funzione converte un numero a virgola mobile in una stringa di caratteri. Il *valore* parametro indica il numero a virgola mobile da convertire. Questa funzione consente di archiviare fino a *conteggio* cifre *valore* sotto forma di stringa e aggiunge un carattere null ('\0'). Se il numero di cifre *valore* supera *conteggio*, le cifre di ordine inferiore viene arrotondata. Se ci sono meno di *conteggio* cifre, la stringa viene riempito di zeri.

Il numero totale di cifre restituito da **ecvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti dalla *dec* e *sign* dopo la chiamata. Il *dec* parametro punta a un valore integer che fornisce la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il *sign* parametro punta a un intero che indica il segno di numero convertito. Se il valore intero è 0, il numero è positivo. In caso contrario, il risultato sarà negativo.

La differenza tra **ecvt** e **fcvt** è l'interpretazione del *conteggio* parametro. **ecvt** interpreta *conteggio* come il numero totale di cifre nella stringa di output, mentre **fcvt** interpreta *conteggio* come il numero di cifre dopo il separatore decimale.

**ecvt** e **fcvt** per la conversione utilizzare un singolo buffer allocato in modo statico. Ogni chiamata a una di queste routine elimina definitivamente i risultati della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *dec* oppure *sign* è **NULL**, oppure *conteggio* è 0, viene richiamato il gestore di parametri non validi, come descritto in [parametro Convalida](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e **NULL** viene restituito.

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
