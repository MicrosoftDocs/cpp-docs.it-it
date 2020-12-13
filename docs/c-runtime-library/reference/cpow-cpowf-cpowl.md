---
description: 'Altre informazioni su: cpow, cpowf, cpowl'
title: cpow, cpowf, cpowl
ms.date: 11/04/2016
api_name:
- cpow
- cpowf
- cpowl
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
- cpow
- cpowf
- cpowl
- complex/cpow
- complex/cpowf
- complex/copwl
helpviewer_keywords:
- cpow function
- cpowf function
- complex/cpowl function
ms.assetid: 83fe2187-22b7-4295-ab16-4d77abdbb80b
ms.openlocfilehash: 3e12cab3a7ec8c7f3f4bf8cd4739e10f022de8fd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339641"
---
# <a name="cpow-cpowf-cpowl"></a>cpow, cpowf, cpowl

Recupera il valore di un numero elevato alla potenza specificata, in cui la base e l'esponente sono numeri complessi. Questa funzione ha un ramo tagliato per l'esponente lungo l'asse reale negativo.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex cpow(
   _Dcomplex x, _Dcomplex y
);
_Fcomplex cpow(
   _Fcomplex x, _Fcomplex y
);  // C++ only
_Lcomplex cpow(
   _Lcomplex x, _Lcomplex y
);  // C++ only
_Fcomplex cpowf(
   _Fcomplex x, _Fcomplex y
);
_Lcomplex cpowl(
   _Lcomplex x, _Lcomplex y
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
La base.

*y*<br/>
L'esponente.

## <a name="return-value"></a>Valore restituito

Il valore di *x* elevato alla potenza di *y* con un ramo tagliato per *x* lungo l'asse reale negativo.

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare overload di **cpow** che accettano e restituiscono valori **_Fcomplex** e **_Lcomplex** . In un programma C **cpow** accetta e restituisce sempre un valore **_Dcomplex** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**cpow**,               **cpowf**, **cpowl**|\<complex.h>|\<ccomplex>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[cexp, cexpf, cexpl](cexp-cexpf-cexpl.md)<br/>
[clog10, clog10f, clog10l](clog10-clog10f-clog10l.md)<br/>
[clog, clogf, clogl](clog-clogf-clogl.md)<br/>
