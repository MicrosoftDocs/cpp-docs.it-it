---
description: 'Altre informazioni su: catanh, catanhf, catanhl'
title: catanh, catanhf, catanhl
ms.date: 11/04/2016
api_name:
- catanh
- catanhf
- catanhl
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
- catanh
- catanhf
- catanhl
- complex/catanh
- complex/catanhf
- complex/catanhl
helpviewer_keywords:
- catanh function
- catanhf function
- catanhl function
ms.assetid: 1b6021cb-647a-41b4-9d7f-919cc8b57b86
ms.openlocfilehash: 9f69ee7644c295fe36b0d907d858d33db27f1c99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275165"
---
# <a name="catanh-catanhf-catanhl"></a>catanh, catanhf, catanhl

Recupera la tangente iperbolica inversa di un numero complesso, con tagli di rami al di fuori dell'intervallo [-1; + 1] lungo l'asse reale.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex catanh(
   _Dcomplex z
);
_Fcomplex catanh(
   _Fcomplex z
);  // C++ only
_Lcomplex catanh(
   _Lcomplex z
);  //  C++ only
_Fcomplex catanhf(
   _Fcomplex z
);
_Lcomplex catanhl(
   _Lcomplex z
);
```

### <a name="parameters"></a>Parametri

*z*<br/>
Numero complesso che rappresenta un angolo, espresso in radianti.

## <a name="return-value"></a>Valore restituito

Tangente iperbolica inversa di *z*, in radianti. Il risultato è unbounded lungo l'asse reale e nell'intervallo [-Iπ/2; + Iπ/2] lungo l'asse immaginario. Si verificherà un errore di dominio se *z* non è compreso nell'intervallo [-1, + 1]. Si verificherà un errore Pole se *z* è-1 o + 1.

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare overload di **catanh** che accettano e restituiscono valori **_Fcomplex** e **_Lcomplex** . In un programma C **catanh** accetta e restituisce sempre un valore **_Dcomplex** .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**catanh**,               **catanhf**, **catanhl**|\<complex.h>|\<ccomplex>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[ctanh, ctanhf, ctanhl](ctanh-ctanhf-ctanhl.md)<br/>
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
