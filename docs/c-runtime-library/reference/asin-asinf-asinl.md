---
title: asin, asinf, asinl
ms.date: 4/2/2020
api_name:
- asinf
- asinl
- asin
- _o_asin
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
ms.assetid: ca05f9ea-b711-49f6-9f32-2f4019abfd69
ms.openlocfilehash: 98f7babfbfcbfcdbf36b79b70aac33f002e3bc90
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87189441"
---
# <a name="asin-asinf-asinl"></a>asin, asinf, asinl

Calcola l'arcoseno.

## <a name="syntax"></a>Sintassi

```C
double asin( double x );
float asinf ( float x );
long double asinl( long double x );
```

```cpp
float asin( float x );  // C++ only
long double asin( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore di cui deve essere calcolato l'arcoseno.

## <a name="return-value"></a>Valore restituito

La funzione **Asin** restituisce arcoseno (funzione inversa del seno) di *x* nell'intervallo compreso tra-π/2 e π/2 radianti.

Per impostazione predefinita, se *x* è minore di-1 o maggiore di 1, **Asin** restituisce un valore indefinito.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± ∞|**Non valido**|**_DOMAIN**|
|± **QNAN**, **IND**|none|**_DOMAIN**|
|&#124;x&#124;>1|**Non valido**|**_DOMAIN**|

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare gli overload di **Asin** con **`float`** **`long double`** i valori e. In un programma C, **Asin** accetta sempre e restituisce un **`double`** .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**Asin**, **asinf**, **asinl**|\<math.h>|\<cmath> o \<math.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere [acos, acosf, acosl](acos-acosf-acosl.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
