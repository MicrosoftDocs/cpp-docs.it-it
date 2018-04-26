---
title: ctanh, ctanhf, ctanhl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- ctanh
- ctahf
- ctahl
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
- ctanh
- ctanhf
- ctanhl
- complex/ctanh
- complex/ctanhf
- complex/ctanhl
dev_langs:
- C++
helpviewer_keywords:
- ctanh function
- ctanhl function
- ctanhf function
ms.assetid: 807f2cd1-8740-4988-afff-5911c346385b
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e9a16e0e4afb901fce5c025165f62f9f0196065c
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="ctanh-ctanhf-ctanhl"></a>ctanh, ctanhf, ctanhl

Calcola la tangente iperbolica complessa di un numero complesso.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex ctanh(
   _Dcomplex z
);
_Fcomplex ctanh(
   _Fcomplex z
);  // C++ only
_Lcomplex ctanh(
   _Lcomplex z
);  // C++ only
_Fcomplex ctanhf(
   _Fcomplex z
);
_Lcomplex ctanhl(
   _Lcomplex z
);
```

### <a name="parameters"></a>Parametri

*z*<br/>
Numero complesso che rappresenta un angolo, espresso in radianti.

## <a name="return-value"></a>Valore restituito

La tangente iperbolica complessa *z*.

|Input|Eccezione SEH|**matherr** (eccezione)|
|-----------|-------------------|--------------------------|
|± ∞, QNAN, IND|none|_DOMAIN|
|± ∞ (tan, tanf)|NON VALIDO|_DOMAIN|

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **ctanh** che accettano e restituiscono **_Fcomplex** e **_Lcomplex** valori. In un programma C **ctanh** accetta e restituisce sempre un **_Dcomplex** valore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**ctanh**, **ctanhf**, **ctanhl**|\<complex.h>|\<ccomplex>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[catanh, catanhf, catanhl](catanh-catanhf-catanhl.md)<br/>
[catan, catanf, catanl](catan-catanf-catanl.md)<br/>
[csinh, csinhf, csinhl](csinh-csinhf-csinhl.md)<br/>
[casinh, casinhf, casinhl](casinh-casinhf-casinhl.md)<br/>
[ccosh, ccoshf, ccoshl](ccosh-ccoshf-ccoshl.md)<br/>
[cacosh, cacoshf, cacoshl](cacosh-cacoshf-cacoshl.md)<br/>
[cacos, cacosf, cacosl](cacos-cacosf-cacosl.md)<br/>
[ctan, ctanf, ctanl](ctan-ctanf-ctanl.md)<br/>
[csin, csinf, csinl](csin-csinf-csinl.md)<br/>
[casin, casinf, casinl](casin-casinf-casinl.md)<br/>
[ccos, ccosf, ccosl](ccos-ccosf-ccosl.md)<br/>
[csqrt, csqrtf, csqrtl](csqrt-csqrtf-csqrtl.md)<br/>
