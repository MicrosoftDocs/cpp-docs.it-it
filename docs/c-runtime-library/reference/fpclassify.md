---
title: fpclassify | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.topic: reference
apiname:
- fpclassify
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
apitype: HeaderDef
f1_keywords:
- fpclassify
- math/fpclassify
helpviewer_keywords:
- fpclassify macro
- fpclassify function
ms.assetid: bf549499-7ff9-4a58-8692-f2d1cb6bab81
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: da55cb87804d178d5a305ed466aa498de4bc1ee5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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

**fpclassify** restituisce un valore intero che indica la classe dell'argomento a virgola mobile *x*. Questa tabella mostra i valori restituiti da **fpclassify**, definito in \<Math. h >.

|Valore|Descrizione|
|-----------|-----------------|
|**FP_NAN**|NaN silenzioso, segnalatore o indeterminato|
|**FP_INFINITE**|Infinito positivo o negativo|
|**FP_NORMAL**|Valore diverso da zero normalizzato positivo o negativo|
|**FP_SUBNORMAL**|Valore denormalizzato positivo o negativo|
|**FP_ZERO**|Valore zero positivo o negativo|

## <a name="remarks"></a>Note

Nel linguaggio C **fpclassify** è una macro; in C++ **fpclassify** è una funzione di overload con tipi di argomento del **float**, **doppie**, o **lungo** **doppie**. In entrambi i casi, il valore restituito dipende dal tipo effettivo dell'espressione argomento e non da qualsiasi rappresentazione intermedia. Ad esempio, un normale **doppie** o **lungo** **doppie** valore può diventare un infinito, denormalizzato o zero valore quando viene convertito in un **float**.

## <a name="requirements"></a>Requisiti

|Funzione/Macro|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|---------------------|---------------------------|-------------------------------|
|**fpclassify**|\<math.h>|\<math.h> o \<cmath>|

Il **fpclassify** macro e **fpclassify** funzioni è conforme a ISO C99 e C + + 11 specifiche. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
