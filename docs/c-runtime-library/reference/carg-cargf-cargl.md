---
title: carg, cargf, cargl
description: Informazioni di riferimento sulle API per CARG, cargf e cargl; che recuperano l'argomento di un numero complesso, con un ramo tagliato lungo l'asse reale negativo.
ms.date: 9/2/2020
api_name:
- carg
- cargf
- cargl
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
- carg
- cargf
- cargl
- complex/carg
- complex/cargf
- complex/cargl
helpviewer_keywords:
- carg function
- cargf function
- cargl function
ms.assetid: 610d6a93-b929-46ab-a966-b77db0b804be
ms.openlocfilehash: 907694904b260c44dde84724c739c62dfe46dbde
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555813"
---
# <a name="carg-cargf-cargl"></a>carg, cargf, cargl

Recupera l'argomento di un numero complesso, con un ramo tagliato lungo l'asse reale negativo.

## <a name="syntax"></a>Sintassi

```C
double carg(
   _Dcomplex z
);
float carg(
   _Fcomplex z
);  // C++ only
long double carg(
   _Lcomplex z
);  // C++ only
float cargf(
   _Fcomplex z
);
long double cargl(
   _Lcomplex z
);
#define carg(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*z*\
Numero complesso.

## <a name="return-value"></a>Valore restituito

Argomento (noto anche come fase) della *z*. Il risultato è compreso nell'intervallo [-π, + π].

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **CARG** che accettano valori **_Fcomplex** o **_Lcomplex** e restituiscono **`float`** **`long double`** valori o. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **CARG** accetta sempre un valore **_Dcomplex** e restituisce un **`double`** valore.

Se si usa la \<tgmath.h> `carg()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**CARG**, **cargf**, **cargl**|\<complex.h>|\<ccomplex>|
|**CARG** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
