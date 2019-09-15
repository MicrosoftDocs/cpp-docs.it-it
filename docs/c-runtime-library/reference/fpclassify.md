---
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
ms.openlocfilehash: e9b5aa1f7dc20cc920a51c2c36371eb907469875
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957070"
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

**fpclassify** restituisce un valore intero che indica la classe a virgola mobile dell'argomento *x*. Questa tabella mostra i valori possibili restituiti da **fpclassify**, definiti in \<Math. h >.

|Value|DESCRIZIONE|
|-----------|-----------------|
|**FP_NAN**|NaN silenzioso, segnalatore o indeterminato|
|**FP_INFINITE**|Infinito positivo o negativo|
|**FP_NORMAL**|Valore diverso da zero normalizzato positivo o negativo|
|**FP_SUBNORMAL**|Valore denormalizzato positivo o negativo|
|**FP_ZERO**|Valore zero positivo o negativo|

## <a name="remarks"></a>Note

In C, **fpclassify** è una macro. in C++ **fpclassify** è una funzione in overload usando i tipi di argomento **float**, **Double**o **Long** **Double**. In entrambi i casi, il valore restituito dipende dal tipo effettivo dell'espressione argomento e non da qualsiasi rappresentazione intermedia. Ad esempio, **un normale valore Double o** **Long** **Double** può diventare un valore infinito, denormalizzato o zero quando viene convertito in un valore **float**.

## <a name="requirements"></a>Requisiti

|Funzione/Macro|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|---------------------|---------------------------|-------------------------------|
|**fpclassify**|\<math.h>|\<math.h> o \<cmath>|

Le funzioni macro e **fpclassify** di **fpclassify** sono conformi alle specifiche ISO C99 e c++ 11. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
