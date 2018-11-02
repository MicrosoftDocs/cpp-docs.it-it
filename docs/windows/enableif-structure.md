---
title: EnableIf (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::EnableIf
helpviewer_keywords:
- EnableIf structure
ms.assetid: 7825b283-e6b2-4f39-a4b9-c03bcd431b8e
ms.openlocfilehash: e42ebfefe37342f29a00547beb258a405b3c1668
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50487288"
---
# <a name="enableif-structure"></a>EnableIf (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

## <a name="remarks"></a>Note

Definisce un membro dati di tipo specificato dal secondo parametro di modello, se il primo parametro di modello restituisce **true**.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`|Se il parametro di modello *b* restituisca **true**, la parziale specializzazione definisce il membro dati `type` sia di tipo `T`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EnableIf`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)