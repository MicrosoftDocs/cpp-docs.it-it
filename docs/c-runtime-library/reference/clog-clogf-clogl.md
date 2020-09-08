---
title: clog, clogf, clogl
description: Informazioni di riferimento sulle API per intasamento, clogf e zoccolo; che recuperano il logaritmo naturale di un numero complesso, con un ramo tagliato lungo l'asse reale negativo.
ms.date: 11/04/2016
api_name:
- clog
- clogf
- clogl
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
- clog
- clogf
- clogl
- complex/clog
- complex/clogf
- complex/clogl
helpviewer_keywords:
- clog function
- clogf function
- clogl function
ms.assetid: 870b9b0b-6618-46f3-bfcf-da595cbd5e18
ms.openlocfilehash: 255f83a93c5c7a0c724fad143f028c2832be3173
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555072"
---
# <a name="clog-clogf-clogl"></a>clog, clogf, clogl

Ottiene il logaritmo naturale di un numero complesso, con discontinuità della funzione lungo l'asse negativo reale.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex clog(
   _Dcomplex z
);
_Fcomplex clog(
   _Fcomplex z
);  // C++ only
_Lcomplex clog(
   _Lcomplex z
);  // C++ only
_Fcomplex clogf(
   _Fcomplex z
);
_Lcomplex clogl(
   _Lcomplex z
);
```

### <a name="parameters"></a>Parametri

*z*\
Base del logaritmo.

## <a name="return-value"></a>Valore restituito

Logaritmo naturale della *z*. Il risultato è unbounded lungo l'asse reale e nell'intervallo [-Iπ, + Iπ] lungo l'asse immaginario.

I possibili valori restituiti sono:

|parametro z|Valore restituito|
|-----------------|------------------|
|Positivo|Logaritmo in base 10 di z|
|Zero|- ∞|
|Negativo|NaN|
|NaN|NaN|
|+ ∞|+ ∞|

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **intasamento** che accettano e restituiscono **_Fcomplex** e **_Lcomplex** valori. In un programma C, lo **zoccolo** accetta sempre e restituisce un valore **_Dcomplex** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**intasamento**,               **clogf**, **zoccolo**|\<complex.h>|\<ccomplex>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[cexp, cexpf, cexpl](cexp-cexpf-cexpl.md)<br/>
[cpow, cpowf, cpowl](cpow-cpowf-cpowl.md)<br/>
[clog10, clog10f, clog10l](clog10-clog10f-clog10l.md)<br/>
