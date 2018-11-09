---
title: __RTDynamicCast
ms.date: 11/04/2016
apiname:
- __RTDynamicCast
apilocation:
- msvcr90.dll
- msvcr110.dll
- msvcr120.dll
- msvcrt.dll
- msvcr100.dll
- msvcr80.dll
- msvcr110_clr0400.dll
apitype: DLLExport
f1_keywords:
- __RTDynamicCast
helpviewer_keywords:
- __RTDynamicCast
ms.assetid: 56aa2d7a-aa47-46ef-830d-e37175611239
ms.openlocfilehash: f4bf4895af99b2d5c2d61e739c9d49d59cecb020
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50485735"
---
# <a name="rtdynamiccast"></a>__RTDynamicCast

Implementazione in fase di esecuzione dell'operatore [dynamic_cast](../cpp/dynamic-cast-operator.md).

## <a name="syntax"></a>Sintassi

```cpp
PVOID __RTDynamicCast (
   PVOID inptr,
   LONG VfDelta,
   PVOID SrcType,
   PVOID TargetType,
   BOOL isReference
   ) throw(...)
```

#### <a name="parameters"></a>Parametri

*inptr*<br/>
Puntatore a un oggetto polimorfico.

*VfDelta*<br/>
Offset del puntatore a funzione virtuale nell'oggetto.

*SrcType*<br/>
Tipo statico dell'oggetto puntato dal parametro `inptr`.

*TargetType*<br/>
Risultato di cast desiderato.

*isReference*<br/>
**true** se l'input è un riferimento; **false** se l'input è un puntatore.

## <a name="return-value"></a>Valore restituito

Puntatore all'oggetto secondario appropriato, in caso di esito positivo, in caso contrario **NULL**.

## <a name="exceptions"></a>Eccezioni

`bad_cast()` se l'input a `dynamic_cast<>` è un riferimento e il cast ha esito negativo.

## <a name="remarks"></a>Note

Converte `inptr` in un oggetto del tipo `TargetType`. Il tipo di `inptr` deve essere un puntatore se `TargetType` è un puntatore o un l-value se `TargetType` è un riferimento. `TargetType` deve essere un puntatore o un riferimento a un tipo di classe definito in precedenza oppure un puntatore a void.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__RTDynamicCast|rtti.h|