---
description: 'Altre informazioni su: _Cmulcr, _FCmulcr, _LCmulcr'
title: _Cmulcr, _FCmulcr, _LCmulcr
ms.date: 03/30/2018
api_name:
- _Cmulcr
- _FCmulcr
- _LCmulcr
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
- _Cmulcr
- _FCmulcr
- _LCmulcr
- complex/_Cmulcr
- complex/_FCmulcr
- complex/_LCmulcr
helpviewer_keywords:
- _Cmulcr function
- _FCmulcr function
- _LCmulcr function
ms.openlocfilehash: ea1dbbcea6890246b1e318da238fb8cc2ee3abb0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97260722"
---
# <a name="_cmulcr-_fcmulcr-_lcmulcr"></a>_Cmulcr, _FCmulcr, _LCmulcr

Moltiplica un numero complesso per un numero a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex _Cmulcr( _Dcomplex x, double y );
_Fcomplex _FCmulcr( _Fcomplex x, float y );
_Lcomplex _LCmulcr( _Lcomplex x, long double y );
```

### <a name="parameters"></a>Parametri

*x*<br/>
Uno degli operandi complessi da moltiplicare.

*y*<br/>
Operando a virgola mobile da moltiplicare.

## <a name="return-value"></a>Valore restituito

Struttura **_Dcomplex**, **_Fcomplex** o **_Lcomplex** che rappresenta il prodotto complesso del numero complesso *x* e del numero di punto flaoting *y*.

## <a name="remarks"></a>Commenti

Poiché gli operatori aritmetici incorporati non funzionano nell'implementazione Microsoft dei tipi complessi, le funzioni **_Cmulcr**, **_FCmulcr** e **_LCmulcr** semplificano la moltiplicazione dei tipi complessi in base ai tipi a virgola mobile.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**_Cmulcr**, **_FCmulcr**, **_LCmulcr**|\<complex.h>|\<complex.h>|

Queste funzioni sono specifiche di Microsoft. I tipi **_Dcomplex**, **_Fcomplex** e **_Lcomplex** sono equivalenti specifici di Microsoft ai tipi nativi C99 non implementati, rispettivamente **Double _Complex**, **float _Complex** e **long double _Complex**. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[_Cbuild, _FCbuild, _LCbuild](cbuild-fcbuild-lcbuild.md)<br/>
[_Cmulcc, _FCmulcc, _LCmulcc](cmulcc-fcmulcc-lcmulcc.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
