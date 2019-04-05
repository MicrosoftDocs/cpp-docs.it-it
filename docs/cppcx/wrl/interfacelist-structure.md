---
title: InterfaceList (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceList
helpviewer_keywords:
- InterfaceList structure
ms.assetid: 6ec3228d-eb3e-4b7e-aef1-7dcf17bdf61a
ms.openlocfilehash: 745348e81888b5a87c57fbb99d397fcd423c3ee1
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59025549"
---
# <a name="interfacelist-structure"></a>InterfaceList (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T, typename U>
struct InterfaceList;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un nome di interfaccia. la prima interfaccia nell'elenco ricorsiva.

*G*<br/>
Un nome di interfaccia. le interfacce rimanenti nell'elenco ricorsiva.

## <a name="remarks"></a>Note

Utilizzato per creare un elenco ricorsivo di interfacce.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`FirstT`|Sinonimo di parametro di modello *T*.|
|`RestT`|Sinonimo di parametro di modello *U*.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceList`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)