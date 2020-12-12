---
description: 'Altre informazioni su: Struttura EnableIf'
title: EnableIf (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::EnableIf
helpviewer_keywords:
- EnableIf structure
ms.assetid: 7825b283-e6b2-4f39-a4b9-c03bcd431b8e
ms.openlocfilehash: 098dd5fdc7e37a7754d7124eba3e146575c127be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272851"
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

## <a name="remarks"></a>Commenti

Definisce un membro dati del tipo specificato dal secondo parametro di modello se il primo parametro di modello restituisce **`true`** .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`type`|Se il parametro di modello *b* restituisce **`true`** , la specializzazione parziale definisce il membro dati `type` di tipo `T` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EnableIf`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)
