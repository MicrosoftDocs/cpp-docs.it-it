---
title: cproj, cprojf, cprojl
description: Informazioni di riferimento sulle API per cproj, cprojf e cprojl; che recuperano la proiezione di un numero complesso sulla sfera Reimann.
ms.date: 9/2/2020
api_name:
- cproj
- cprojf
- cprojl
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
- cproj
- cprojf
- cprojl
- complex/cproj
- complex/cprojf
- complex/cprojl
helpviewer_keywords:
- cproj function
- cprojf function
- cprojl function
ms.assetid: 32b49623-13bf-4cae-802e-7912d75030fe
ms.openlocfilehash: fcc3c0a42c8c6392130ad58ed12c4985e7ad4907
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555943"
---
# <a name="cproj-cprojf-cprojl"></a>cproj, cprojf, cprojl

Recupera la proiezione di un numero complesso sulla sfera di Reimann.

## <a name="syntax"></a>Sintassi

```C
_Dcomplex cproj(
   _Dcomplex z
);
_Fcomplex cproj(
   _Fcomplex z
);  // C++ only
_Lcomplex cproj(
   _Lcomplex z
);  // C++ only
_Fcomplex cprojf(
   _Fcomplex z
);
_Lcomplex cprojl(
   _Lcomplex z
);
#define cproj(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*z*\
Numero complesso.

## <a name="return-value"></a>Valore restituito

Proiezione della *z* sulla sfera Reimann.

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **cproj** che accettano e restituiscono valori **_Fcomplex** e **_Lcomplex** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **cproj** accetta sempre e restituisce un valore **_Dcomplex** .

Se si usa la \<tgmath.h> `cproj()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**cproj**, **cprojf**, **cprojl**|\<complex.h>|\<ccomplex>|
|**cproj** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
