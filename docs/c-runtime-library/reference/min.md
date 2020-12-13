---
description: 'Altre informazioni su: __min'
title: __min
ms.date: 04/05/2018
api_name:
- __min
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
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 337d4fc7226044e41a616dc6da8230e013b2702d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340580"
---
# <a name="__min"></a>__min

Una macro del preprocessore che restituisce il minore di due valori.

## <a name="syntax"></a>Sintassi

```C
#define __min(a,b) (((a) < (b)) ? (a) : (b))
```

### <a name="parameters"></a>Parametri

*a*, *b*<br/>
Valori di qualsiasi tipo utilizzato dall' **<** operatore.

## <a name="return-value"></a>Valore restituito

Il minore dei due argomenti.

## <a name="remarks"></a>Commenti

La macro **__min** Confronta due valori e restituisce il valore di quello più piccolo. Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno. Il tipo di dati deve essere lo stesso per entrambi gli argomenti e il valore restituito.

L'argomento restituito viene valutato due volte dalla macro. Questo può causare risultati imprevisti se l'argomento è un'espressione che modifica il valore quando viene valutato, ad esempio `*p++` .

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[__max](max.md)<br/>
