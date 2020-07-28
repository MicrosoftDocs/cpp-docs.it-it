---
title: EnableIf (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::EnableIf
helpviewer_keywords:
- EnableIf structure
ms.assetid: 7825b283-e6b2-4f39-a4b9-c03bcd431b8e
ms.openlocfilehash: f43166920f3582ab681b67d2c89563dcf78ff0f1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220496"
---
# <a name="enableif-structure"></a>EnableIf (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <bool b, typename T = void>
struct EnableIf;

template <typename T>
struct EnableIf<true, T>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo.

*b*<br/>
Espressione booleana.

## <a name="remarks"></a>Osservazioni

Definisce un membro dati del tipo specificato dal secondo parametro di modello se il primo parametro di modello restituisce **`true`** .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`|Se il parametro di modello *b* restituisce **`true`** , la specializzazione parziale definisce il membro dati `type` di tipo `T` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EnableIf`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)
