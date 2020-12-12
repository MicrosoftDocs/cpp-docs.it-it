---
description: 'Altre informazioni su: struttura di interfacet'
title: InterfaceList (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceList
helpviewer_keywords:
- InterfaceList structure
ms.assetid: 6ec3228d-eb3e-4b7e-aef1-7dcf17bdf61a
ms.openlocfilehash: 660ae5137b7ff41129ce3866f0d289045f7dee9c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124579"
---
# <a name="interfacelist-structure"></a>InterfaceList (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T, typename U>
struct InterfaceList;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Nome di interfaccia; prima interfaccia nell'elenco ricorsivo.

*U*<br/>
Nome di interfaccia; interfacce rimanenti nell'elenco ricorsivo.

## <a name="remarks"></a>Commenti

Utilizzato per creare un elenco ricorsivo di interfacce.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`FirstT`|Sinonimo del parametro di modello *T*.|
|`RestT`|Sinonimo del parametro di modello *U*.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceList`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)
