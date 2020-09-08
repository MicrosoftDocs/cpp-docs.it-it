---
title: cimag, cimagf, cimagl
description: Informazioni di riferimento sulle API per Cimag, cimagf e cimagl; che recupera la parte immaginaria di un numero complesso.
ms.date: 9/2/2020
api_name:
- cimag
- cimagf
- cimagl
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
- cimagf
- cimagl
- complex/cimag
- complex/cimagf
- complex/cimagl
- cimag
helpviewer_keywords:
- cimag function
- cimagf function
- cimagl function
ms.assetid: 0d8836f5-d61d-44cd-8731-6f75cb776def
ms.openlocfilehash: 41631a161a47e247b12a39e312a3f40084c8f22f
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555840"
---
# <a name="cimag-cimagf-cimagl"></a>cimag, cimagf, cimagl

Ottiene la parte immaginaria di un numero complesso.

## <a name="syntax"></a>Sintassi

```C
double cimag( _Dcomplex z );
float cimagf( _Fcomplex z );
long double cimagl( _Lcomplex z );
#define cimag(X) // Requires C11 or higher

float cimag( _Fcomplex z );  // C++ only
long double cimag( _Lcomplex z );  // C++ only
```

### <a name="parameters"></a>Parametri

*z*\
Numero complesso.

## <a name="return-value"></a>Valore restituito

Parte immaginaria della *z*.

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **Cimag** che accettano valori **_Fcomplex** o **_Lcomplex** e restituiscono **`float`** **`long double`** valori o. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **Cimag** accetta sempre un valore **_Dcomplex** e restituisce un **`double`** valore.

Se si usa la \<tgmath.h> `cimag()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**Cimag**, **cimagf**, **cimagl**|\<complex.h>|\<ccomplex>|
|**Cimag** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
