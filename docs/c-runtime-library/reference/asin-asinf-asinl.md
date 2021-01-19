---
title: asin, asinf, asinl
description: Informazioni di riferimento sulle API per Asin, asinf e asinl; che calcola l'arcoseno di un valore a virgola mobile.
ms.date: 1/15/2021
api_name:
- asinf
- asinl
- asin
- _o_asin
- _o_asinf
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
- asin
- asinl
- asinf
helpviewer_keywords:
- asin function
- asinl function
- asinf function
- trigonometric functions
- arcsine function
ms.openlocfilehash: 04b68e9b5933d763cecbdc06af3e34a5b7c01223
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98564043"
---
# <a name="asin-asinf-asinl"></a>`asin`, `asinf`, `asinl`

Calcola l'arcoseno.

## <a name="syntax"></a>Sintassi

```C
double asin( double x );
float asinf ( float x );
long double asinl( long double x );
#define asin(X) // Requires C11 or higher

float asin( float x );  // C++ only
long double asin( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*`x`*\
Valore di cui deve essere calcolato l'arcoseno.

## <a name="return-value"></a>Valore restituito

La **`asin`** funzione restituisce arcoseno (funzione inversa del seno) di *`x`* nell'intervallo compreso tra-π/2 e π/2 radianti.

Per impostazione predefinita, se *`x`* è minore di-1 o maggiore di 1, **`asin`** restituisce un valore indefinito.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± ∞|**`INVALID`**|**`_DOMAIN`**|
|± **`QNAN`**, **`IND`**|Nessuno|**`_DOMAIN`**|
|&#124;x&#124;>1|**`INVALID`**|**`_DOMAIN`**|

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare gli overload di **`asin`** con **`float`** **`long double`** i valori e. In un programma C, a meno che non si stia usando la `<tgmath.h>` macro per chiamare questa funzione, **`asin`** accetta sempre e restituisce un **`double`** .

Se si usa la `<tgmath.h>` `asin()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**`asin`**, **`asinf`**, **`asinl`**|`<math.h>`|`<cmath>` o `<math.h>`|
|**`asin()`** macro | `<tgmath.h>` ||

## <a name="example"></a>Esempio

Per ulteriori informazioni, vedere [ `acos` , `acosf` , `acosl` ](acos-acosf-acosl.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`acos`, `acosf`, `acosl`](acos-acosf-acosl.md)\
[`atan`, `atanf`, `atanl`, `atan2`, `atan2f`, `atan2l`](atan-atanf-atanl-atan2-atan2f-atan2l.md)\
[`cos`, `cosf`, `cosl`](cos-cosf-cosl.md)\
[`_matherr`](matherr.md)\
[`sin`, `sinf`, `sinl`](sin-sinf-sinl.md)\
[`tan`, `tanf`, `tanl`](tan-tanf-tanl.md)