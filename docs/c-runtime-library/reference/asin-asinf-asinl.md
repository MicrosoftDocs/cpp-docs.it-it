---
title: asin, asinf, asinl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- asinf
- asinl
- asin
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
- api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- asin
- asinl
- asinf
dev_langs:
- C++
helpviewer_keywords:
- asin function
- asinl function
- asinf function
- trigonometric functions
- arcsine function
ms.assetid: ca05f9ea-b711-49f6-9f32-2f4019abfd69
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6dd1399042e1055d124cd3c53363a6979d4256d3
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Il **asin** funzione restituisce l'arcoseno (la funzione inversa del seno) dei *x* nell'intervallo - π/2 in π/2 radianti.

Per impostazione predefinita, se *x* è minore di -1 o maggiore di 1 **asin** restituisce un valore indefinito.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± ∞|**NON VALIDO**|**DOMAIN**|
|± **QNAN**, **IND**|none|**DOMAIN**|
|&#124;x&#124;>1|**NON VALIDO**|**DOMAIN**|

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **asin** con **float** e **lungo** **doppie** valori. In un programma C **asin** accetta e restituisce sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**asin**, **asinf**, **asinl**|\<math.h>|\<cmath> o \<math.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere [acos, acosf, acosl](acos-acosf-acosl.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acos, acosf, acosl](acos-acosf-acosl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)<br/>
