---
title: InterfaceList (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceList
helpviewer_keywords:
- InterfaceList structure
ms.assetid: 6ec3228d-eb3e-4b7e-aef1-7dcf17bdf61a
ms.openlocfilehash: 7fd06f71bc4d8097366dc0e87d7ff92c5a12a790
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213863"
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

## <a name="remarks"></a>Osservazioni

Utilizzato per creare un elenco ricorsivo di interfacce.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`FirstT`|Sinonimo del parametro di modello *T*.|
|`RestT`|Sinonimo del parametro di modello *U*.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceList`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
