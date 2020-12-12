---
description: 'Altre informazioni su: CAB, cabsf, Cabl'
title: cabs, cabsf, cabsl
ms.date: 11/04/2016
api_name:
- cabs
- cabsf
- cabsl
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- cabs
- cabsf
- cabsl
- complex/cabs
- complex/cabsf
- complex/cabsl
helpviewer_keywords:
- cabs function
- cabsf function
- cabsl function
ms.assetid: 6b8eb453-cc8f-4972-bebf-351cbdfdfc15
ms.openlocfilehash: 2ae24a0b7c158c2a13a595e946ee79b0760d75ec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97171660"
---
# <a name="cabs-cabsf-cabsl"></a>cabs, cabsf, cabsl

Ottiene il valore assoluto di un numero complesso.

## <a name="syntax"></a>Sintassi

```C
double cabs(
   _Dcomplex z
);
float cabs(
   _Fcomplex z
);  // C++ only
long double cabs(
   _Lcomplex z
);  // C++ only
float cabsf(
   _Fcomplex z
);
long double cabsl(
   _Lcomplex z
);
```

### <a name="parameters"></a>Parametri

*z*<br/>
Numero complesso.

## <a name="return-value"></a>Valore restituito

Valore assoluto di *z*.

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare overload di **CAB** che accettano valori **_Fcomplex** o **_Lcomplex** e restituiscono **`float`** **`long double`** valori o. In un programma C, i **CAB** accetta sempre un valore **_Dcomplex** e restituisce un **`double`** valore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**CAB**,               **cabsf**, **CAB**|\<complex.h>|\<ccomplex>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
