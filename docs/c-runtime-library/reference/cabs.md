---
title: _cabs
ms.date: 4/2/2020
api_name:
- _cabs
- _o__cabs
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
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _cabs
helpviewer_keywords:
- cabs function
- absolute values
- _cabs function
- calculating absolute values
ms.assetid: fea292ee-1a39-4a0a-b416-4a189346ff26
ms.openlocfilehash: e77e1811cb6f002c06e514b5f737b8a92ea84282
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81333688"
---
# <a name="_cabs"></a>_cabs

Calcola il valore assoluto di un numero complesso.

## <a name="syntax"></a>Sintassi

```C
double _cabs(
   struct _complex z
);
```

### <a name="parameters"></a>Parametri

*Z*<br/>
Numero complesso.

## <a name="return-value"></a>Valore restituito

**_cabs** restituisce il valore assoluto del relativo argomento se ha esito positivo. In caso di overflow, **_cabs** restituisce **HUGE_VAL** e imposta **errno** su **ERANGE**. È possibile modificare la gestione degli errori con [_matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_cabs** calcola il valore assoluto di un numero complesso, che deve essere una struttura di tipo [_complex](../../c-runtime-library/standard-types.md). La struttura *z* è composta da un componente reale *x* e da un componente immaginario *y*. Una chiamata a **_cabs** produce un valore `sqrt( z.x * z.x + z.y * z.y )`equivalente a quello dell'espressione .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_cabs**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_cabs.c
// Using _cabs, this program calculates
// the absolute value of a complex number.

#include <math.h>
#include <stdio.h>

int main( void )
{
   struct _complex number = { 3.0, 4.0 };
   double d;

   d = _cabs( number );
   printf( "The absolute value of %f + %fi is %f\n",
           number.x, number.y, d );
}
```

```Output
The absolute value of 3.000000 + 4.000000i is 5.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
[fabs, fabsf, fabsl](fabs-fabsf-fabsl.md)
