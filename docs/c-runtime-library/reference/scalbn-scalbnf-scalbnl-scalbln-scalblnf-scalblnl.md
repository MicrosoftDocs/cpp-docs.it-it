---
title: scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl
description: Informazioni di riferimento sulle API per scalbn, scalbnf, scalbnl, scalbln, scalblnf e scalblnl; che moltiplica un numero a virgola mobile per una potenza integrale di `FLT_RADIX` .
ms.date: 9/1/2020
api_name:
- scalblnl
- scalbnl
- scalbnf
- scalblnf
- scalbn
- scalbln
- _o_scalbln
- _o_scalblnf
- _o_scalblnl
- _o_scalbn
- _o_scalbnf
- _o_scalbnl
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- scalblnf
- scalbnl
- scalblnl
- scalbln
- scalbn
- scalbnf
helpviewer_keywords:
- scalbn function
- scalbln function
- scalblnl function
- scalbnl function
- scalbnf function
- scalblnf function
ms.assetid: df2f1543-8e39-4af4-a5cf-29307e64807d
ms.openlocfilehash: 1a01811e5fcfb28c0557e0232d76649c867748b1
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556671"
---
# <a name="scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl"></a>scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl

Moltiplica un numero a virgola mobile per una potenza integrale di FLT_RADIX.

## <a name="syntax"></a>Sintassi

```C
double scalbn(
   double x,
   int exp
);
float scalbn(
   float x,
   int exp
);  // C++ only
long double scalbn(
   long double x,
   int exp
);  // C++ only
float scalbnf(
   float x,
   int exp
);
long double scalbnl(
   long double x,
   int exp
);

#define scalbn(X, INT) // Requires C11 or higher

double scalbln(
   double x,
   long exp
);

float scalblnf(
   float x,
   long exp
);
long double scalblnl(
   long double x,
   long exp
);

#define scalbln(X, LONG) // Requires C11 or higher

float scalbln(
   float x,
   long exp
);  // C++ only
long double scalbln(
   long double x,
   long exp
);  // C++ only
```

### <a name="parameters"></a>Parametri

*x*\
Valore a virgola mobile.

*exp*\
Esponente dell'intero.

## <a name="return-value"></a>Valore restituito

Le funzioni **scalbn** restituiscono il valore di *x* \* **FLT_RADIX**<sup>Exp</sup> in caso di esito positivo. In caso di overflow (a seconda del segno di *x*), **scalbn** restituisce +/- **HUGE_VAL**; il valore **errno** è impostato su **ERANGE**.

Per ulteriori informazioni su **errno** e sui possibili valori restituiti degli errori, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

**FLT_RADIX** viene definito \<float.h> come la radice a virgola mobile nativa; nei sistemi binari, ha un valore pari a 2 e **scalbn** è equivalente a [ldexp](ldexp.md).

Poiché C++ consente l'overload, è possibile chiamare gli overload di **scalbn** e **scalbln** che accettano e restituiscono i **`float`** **`long double`** tipi o. In un programma C, a meno che non si usi la \<tgmath.h> macro per chiamare questa funzione, **scalbn** accetta sempre un **`double`** e un **`int`** e restituisce un oggetto e **`double`** **scalbln** accetta sempre un oggetto **`double`** e un oggetto **`long`** e restituisce un oggetto **`double`** .

Se si usano le \<tgmath.h> `scalbn()` `scalbln` macro o, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**scalbn**, **scalbnf**, **scalbnl**, **scalbln**, **scalblnf**, **scalblnl**|\<math.h>|\<cmath>|
|**scalbn () o scalbln (macro)** | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_scalbn.c
// Compile using: cl /W4 crt_scalbn.c
#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 6.4, y;
   int p = 3;

   y = scalbn( x, p );
   printf( "%2.1f times FLT_RADIX to the power of %d is %2.1f\n", x, p, y );
}
```

### <a name="output"></a>Output

```Output
6.4 times FLT_RADIX to the power of 3 is 51.2
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
[ldexp](ldexp.md)<br/>
[modf, modff, modfl](modf-modff-modfl.md)<br/>
