---
title: fpclassify
ms.date: 04/05/2018
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
ms.openlocfilehash: a25897a110d96923a45695d61f923dc7818c7e3a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62287941"
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

**fpclassify** restituisce un valore integer che indica la classe a virgola mobile dell'argomento *x*. Questa tabella mostra i valori possibili restituiti da **fpclassify**, definito nel \<Math. h >.

|Value|Descrizione|
|-----------|-----------------|
|**FP_NAN**|NaN silenzioso, segnalatore o indeterminato|
|**FP_INFINITE**|Infinito positivo o negativo|
|**FP_NORMAL**|Valore diverso da zero normalizzato positivo o negativo|
|**FP_SUBNORMAL**|Valore denormalizzato positivo o negativo|
|**FP_ZERO**|Valore zero positivo o negativo|

## <a name="remarks"></a>Note

In C **fpclassify** è una macro; in C++ **fpclassify** è una funzione di overload che usa i tipi di argomento **float**, **double**, o **lungo** **doppie**. In entrambi i casi, il valore restituito dipende dal tipo effettivo dell'espressione argomento e non da qualsiasi rappresentazione intermedia. Ad esempio, una normale **doppie** o **long** **double** valore possa diventare un numero infinito, denormalizzato o zero valore quando convertito in un **float**.

## <a name="requirements"></a>Requisiti

|Funzione/Macro|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|---------------------|---------------------------|-------------------------------|
|**fpclassify**|\<math.h>|\<math.h> o \<cmath>|

Il **fpclassify** macro e **fpclassify** funzioni è conforme a ISO C99 e C++11 11 specifiche. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
