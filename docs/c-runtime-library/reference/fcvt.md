---
title: _fcvt | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _fcvt
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
- _fcvt
dev_langs:
- C++
helpviewer_keywords:
- converting floating point, to strings
- _fcvt function
- floating-point functions, converting number to string
- fcvt function
- floating-point functions
ms.assetid: 74584c88-f0dd-4907-8fca-52da5df583f5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 272b8e4ba5e57d71b4b785bceef7e5ea2f0ac7c2
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
ms.locfileid: "34450420"
---
# <a name="fcvt"></a>_fcvt

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

*valore*<br/>
Numero da convertire.

*count*<br/>
Numero di cifre dopo il separatore decimale.

*dec*<br/>
Puntatore alla posizione del separatore decimale archiviata.

*sign*<br/>
Puntatore all'indicatore di segno archiviato.

## <a name="return-value"></a>Valore restituito

**fcvt** restituisce un puntatore alla stringa di cifre, **NULL** in caso di errore.

## <a name="remarks"></a>Note

Il **fcvt** funzione converte un numero a virgola mobile in una stringa di caratteri con terminazione null. Il *valore* parametro indica il numero a virgola mobile da convertire. **fcvt** archivia le cifre del *valore* sotto forma di stringa e aggiunge un carattere null ('\0'). Il *conteggio* parametro specifica il numero di cifre da archiviare dopo il separatore decimale. Cifre in eccesso vengono arrotondati a *conteggio* inserito. Se ci sono meno di *conteggio* cifre di precisione, la stringa viene riempito di zeri.

Il numero totale di cifre restituito da **fcvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti dalla *dec* e accedere dopo la chiamata. Il *dec* parametro punta a un valore intero; questo valore intero fornisce la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il parametro *sign* punta a un numero intero che indica il segno di *valore*. Il valore integer è impostato su 0 se *valore* è un valore positivo e viene impostato su un numero diverso da zero se *valore* è negativo.

La differenza tra **ecvt** e **fcvt** è l'interpretazione del *conteggio* parametro. **ecvt** interpreta *conteggio* come il numero totale di cifre nella stringa di output, mentre **fcvt** interpreta *conteggio* come il numero di cifre dopo il separatore decimale.

**ecvt** e **fcvt** per la conversione utilizzare un singolo buffer allocato in modo statico. Ogni chiamata a una di queste funzioni elimina definitivamente i risultati della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *dec* oppure *sign* è **NULL**, oppure *conteggio* è 0, viene richiamato il gestore di parametri non validi, come descritto in [parametro Convalida](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e **NULL** viene restituito.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fcvt**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[_ecvt](ecvt.md)<br/>
[_gcvt](gcvt.md)<br/>
