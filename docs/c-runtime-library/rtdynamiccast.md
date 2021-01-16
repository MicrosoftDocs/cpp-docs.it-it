---
description: 'Altre informazioni su: __RTDynamicCast'
title: __RTDynamicCast
ms.date: 1/14/2021
api_name:
- __RTDynamicCast
api_location:
- msvcr90.dll
- msvcr110.dll
- msvcr120.dll
- msvcrt.dll
- msvcr100.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __RTDynamicCast
helpviewer_keywords:
- __RTDynamicCast
ms.assetid: 56aa2d7a-aa47-46ef-830d-e37175611239
ms.openlocfilehash: cefd5248e0409b72f97c959d08aa30b1c0167e26
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98243112"
---
# <a name="__rtdynamiccast"></a>__RTDynamicCast

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
**`true`** Se l'input è un riferimento; **`false`** se l'input è un puntatore.

## <a name="return-value"></a>Valore restituito

Puntatore all'oggetto secondario appropriato, in caso di esito positivo; in caso contrario, **null**.

## <a name="exceptions"></a>Eccezioni

`bad_cast()` se l'input a `dynamic_cast<>` è un riferimento e il cast ha esito negativo.

## <a name="remarks"></a>Commenti

Converte `inptr` in un oggetto del tipo `TargetType`. Il tipo di `inptr` deve essere un puntatore se `TargetType` è un puntatore o un l-value se `TargetType` è un riferimento. `TargetType` deve essere un puntatore o un riferimento a un tipo di classe definito in precedenza oppure un puntatore a void.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__RTDynamicCast|rtti.h|
