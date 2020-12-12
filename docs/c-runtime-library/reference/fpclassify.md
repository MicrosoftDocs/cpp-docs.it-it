---
description: 'Altre informazioni su: fpclassify'
title: fpclassify
ms.date: 04/05/2018
api_name:
- fpclassify
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
api_type:
- HeaderDef
f1_keywords:
- fpclassify
- math/fpclassify
helpviewer_keywords:
- fpclassify macro
- fpclassify function
ms.assetid: bf549499-7ff9-4a58-8692-f2d1cb6bab81
ms.openlocfilehash: 716684f15e82fb439c16239a61401b892a244f93
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164835"
---
# <a name="fpclassify"></a>fpclassify

Restituisce la classificazione a virgola mobile dell'argomento.

## <a name="syntax"></a>Sintassi

```C
int fpclassify(
   /* floating-point */ x
);

int fpclassify(
   float x
); // C++ only

int fpclassify(
   double x
); // C++ only

int fpclassify(
   long double x
); // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile da verificare.

## <a name="return-value"></a>Valore restituito

**fpclassify** restituisce un valore intero che indica la classe a virgola mobile dell'argomento *x*. Questa tabella mostra i valori possibili restituiti da **fpclassify**, definiti in \<math.h> .

|Valore|Description|
|-----------|-----------------|
|**FP_NAN**|NaN silenzioso, segnalatore o indeterminato|
|**FP_INFINITE**|Infinito positivo o negativo|
|**FP_NORMAL**|Valore diverso da zero normalizzato positivo o negativo|
|**FP_SUBNORMAL**|Valore denormalizzato positivo o negativo|
|**FP_ZERO**|Valore zero positivo o negativo|

## <a name="remarks"></a>Commenti

In C, **fpclassify** è una macro. in C++, **fpclassify** è una funzione in overload con i tipi di argomento **`float`** , **`double`** o **`long double`** . In entrambi i casi, il valore restituito dipende dal tipo effettivo dell'espressione argomento e non da qualsiasi rappresentazione intermedia. Un valore normale o, ad esempio, **`double`** **`long double`** può diventare un valore infinito, denormalizzato o zero quando viene convertito in un oggetto **`float`** .

## <a name="requirements"></a>Requisiti

|Funzione/Macro|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|---------------------|---------------------------|-------------------------------|
|**fpclassify**|\<math.h>|\<math.h> o \<cmath>|

Le funzioni macro e **fpclassify** di **fpclassify** sono conformi alle specifiche ISO C99 e c++ 11. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
