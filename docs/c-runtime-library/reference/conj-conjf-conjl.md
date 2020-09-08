---
title: conj, conjf, conjl
description: Informazioni di riferimento sulle API per CONJ, conjf e conjl; che recuperano il complesso coniugato di un numero complesso.
ms.date: 9/2/2020
api_name:
- conj
- conjf
- conjl
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
- conj
- conjf
- conjl
- complex/conj
- complex/conjf
- complex/conjl
helpviewer_keywords:
- conj function
- conjf function
- conjl function
ms.assetid: 792fccfa-19c6-4890-99f9-a3b89effccd6
ms.openlocfilehash: b779eb2d92893b204a73b2fa4f5c89928933ffeb
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556353"
---
# <a name="conj-conjf-conjl"></a>conj, conjf, conjl

Restituisce il complesso coniugato di un numero complesso.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex conj(
   _Dcomplex z
);
_Fcomplex conj(
   _Fcomplex z
);  // C++ only
_Lcomplex conj(
   _Lcomplex z
);  // C++ only
_Fcomplex conjf(
   _Fcomplex z
);
_Lcomplex conjl(
   _Lcomplex z
);
#define conj(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*z*\
Numero complesso.

## <a name="return-value"></a>Valore restituito

Coniugato complesso di *z*.  Il risultato ha la stessa parte reale e immaginaria della *z*, ma con segno opposto.

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **CONJ** che accettano e restituiscono valori **_Fcomplex** e **_Lcomplex** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **CONJ** accetta sempre e restituisce un valore **_Dcomplex** .

Se si usa la \<tgmath.h> `conj()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**CONJ**, **conjf**, **conjl**|\<complex.h>|\<ccomplex>|
|**CONJ** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
