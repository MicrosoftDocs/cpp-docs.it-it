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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: a017ed58b962520793d5b10b088793dbc9b8a83d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81347421"
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

*Valore*<br/>
Numero da convertire.

*count*<br/>
Numero di cifre dopo il separatore decimale.

*Dicembre*<br/>
Puntatore alla posizione del separatore decimale archiviata.

*Segno*<br/>
Puntatore all'indicatore di segno archiviato.

## <a name="return-value"></a>Valore restituito

**_fcvt** restituisce un puntatore alla stringa di cifre, **NULL** in caso di errore.

## <a name="remarks"></a>Osservazioni

La funzione **_fcvt** converte un numero a virgola mobile in una stringa di caratteri con terminazione null. Il parametro *value* è il numero a virgola mobile da convertire. **_fcvt** archivia le cifre del *valore* come stringa e aggiunge un carattere nullo (''0'). Il parametro *count* consente di specificare il numero di cifre da memorizzare dopo il separatore decimale. Le cifre in eccesso vengono arrotondate per *contare* i luoghi. Se sono presenti meno di *count* cifre di precisione, la stringa viene riempita con zeri.

Il numero totale di cifre restituite da **_fcvt** non supererà **_CVTBUFSIZE**.

Nella stringa vengono archiviate solo cifre. La posizione del separatore decimale e il segno di *valore* possono essere ottenuti da *dec* e sign dopo la chiamata. Il *dec* dec parametro punta a un valore intero; questo valore intero fornisce la posizione del separatore decimale rispetto all'inizio della stringa. Uno zero o un valore intero negativo indica che il separatore decimale si trova a sinistra della prima cifra. Il segno di *parametro* punta a un numero intero che indica il segno di *valore*. Il numero intero è impostato su 0 se *value* è positivo ed è impostato su un numero diverso da zero se *value* è negativo.

La differenza tra **_ecvt** e **_fcvt** è nell'interpretazione del parametro *count.* **_ecvt** interpreta il *conteggio* come il numero totale di cifre nella stringa di output, mentre **_fcvt** interpreta *il conteggio* come numero di cifre dopo il separatore decimale.

**_ecvt** e **_fcvt** utilizzano un singolo buffer allocato in modo statico per la conversione. Ogni chiamata a una di queste funzioni elimina definitivamente i risultati della chiamata precedente.

Questa funzione convalida i relativi parametri. Se *dec* o *sign* è **NULL**o *count* è 0, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EINVAL** e viene restituito **NULL.**

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
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
