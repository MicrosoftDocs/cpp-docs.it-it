---
title: cexp, cexpf, cexpl
description: Informazioni di riferimento sulle API per cexp, cexpf e cexpl; che calcola l'esponenziale in base e di un numero complesso.
ms.date: 11/04/2016
api_name:
- cexp
- cexpf
- cexpl
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
- cexp
- cexpf
- cexpl
- complex/cepx
- complex/cexpf
- complex/cexpl
helpviewer_keywords:
- cexp function
- cexpl function
- cexpf function
ms.assetid: f27fd5a9-70c7-4957-a7ee-5256d19bd1da
ms.openlocfilehash: 66f7b687e8da12473abef4dbc44831e175956ac0
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555215"
---
# <a name="cexp-cexpf-cexpl"></a>cexp, cexpf, cexpl

Calcola l'esponenziale in base e di un numero complesso.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex cexp( _Dcomplex z );
_Fcomplex cexpf( _Fcomplex z );
_Lcomplex cexpl( _Lcomplex z );

_Fcomplex cexp( _Fcomplex z );  // C++ only
_Lcomplex cexp( _Lcomplex z );  // C++ only
```

### <a name="parameters"></a>Parametri

*z*\
Numero complesso che rappresenta l'esponente.

## <a name="return-value"></a>Valore restituito

Valore di **e** elevato alla potenza della *z*.

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **cexp** che accettano e restituiscono valori **_Fcomplex** e **_Lcomplex** . In un programma C **cexp** accetta e restituisce sempre un valore **_Dcomplex** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**cexp**, **cexpf**, **cexpl**|\<complex.h>|\<complex.h>|

Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)\
[cpow, cpowf, cpowl](cpow-cpowf-cpowl.md)\
[clog10, clog10f, clog10l](clog10-clog10f-clog10l.md)\
[clog, clogf, clogl](clog-clogf-clogl.md)
