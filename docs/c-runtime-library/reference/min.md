---
title: __min
ms.date: 04/05/2018
apiname:
- __min
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
apitype: DLLExport
f1_keywords:
- __min
- min
- _min
helpviewer_keywords:
- __min macro
- min macro
- minimum macro
- _min macro
ms.assetid: 2037f26c-b48a-4a69-8870-22519f052a3c
ms.openlocfilehash: f9e867cd1f3e3519e440c91895e61e317d9688a3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50617815"
---
# <a name="min"></a>__min

Una macro del preprocessore che restituisce il meno elevato tra due valori.

## <a name="syntax"></a>Sintassi

```C
#define __min(a,b) (((a) < (b)) ? (a) : (b))
```

### <a name="parameters"></a>Parametri

*una*, *b*<br/>
Valori di qualsiasi tipo che il **<** operatore funziona su.

## <a name="return-value"></a>Valore restituito

Il minore dei due argomenti.

## <a name="remarks"></a>Note

Il **min** macro Confronta due valori e restituisce il valore di quello minore. Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno. Il tipo di dati deve essere lo stesso per entrambi gli argomenti e il valore restituito.

L'argomento restituito viene valutata due volte tramite la macro. Questo può causare risultati imprevisti se l'argomento è un'espressione che modifica il valore quando viene valutata, ad esempio `*p++`.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**__min**|\<stdlib.h>|

## <a name="example"></a>Esempio

```C
// crt_minmax.c

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int a = 10;
   int b = 21;

   printf( "The larger of %d and %d is %d\n",  a, b, __max( a, b ) );
   printf( "The smaller of %d and %d is %d\n", a, b, __min( a, b ) );
}
```

```Output
The larger of 10 and 21 is 21
The smaller of 10 and 21 is 10
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[__max](max.md)<br/>
