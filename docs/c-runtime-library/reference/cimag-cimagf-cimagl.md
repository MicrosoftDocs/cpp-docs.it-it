---
title: cimag, cimagf, cimagl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- cimag
- cimagf
- cimagl
apilocation:
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
apitype: DLLExport
f1_keywords:
- cimagf
- cimagl
- complex/cimag
- complex/cimagf
- complex/cimagl
- cimag
dev_langs:
- C++
helpviewer_keywords:
- cimag function
- cimagf function
- cimagl function
ms.assetid: 0d8836f5-d61d-44cd-8731-6f75cb776def
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c466ad2373686d368cb29c46c68da3aabd68662f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="cimag-cimagf-cimagl"></a>cimag, cimagf, cimagl

Ottiene la parte immaginaria di un numero complesso.

## <a name="syntax"></a>Sintassi

```C
double cimag( _Dcomplex z );
float cimagf( _Fcomplex z );
long double cimagl( _Lcomplex z );
```

```cpp
float cimag( _Fcomplex z );  // C++
long double cimag( _Lcomplex z );  // C++
```

### <a name="parameters"></a>Parametri

*z*<br/>
Numero complesso.

## <a name="return-value"></a>Valore restituito

La parte immaginaria *z*.

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **cimag** che accettano **_Fcomplex** oppure **_Lcomplex** valori, quindi restituiscono **float** o **lungo** **doppie** valori. In un programma C **cimag** ha sempre un **_Dcomplex** valore e restituisce un **doppie** valore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**cimag**, **cimagf**, **cimagl**|\<complex.h>|\<ccomplex>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[carg, cargf, cargl](carg-cargf-cargl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
