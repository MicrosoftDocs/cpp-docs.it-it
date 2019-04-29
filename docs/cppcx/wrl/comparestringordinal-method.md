---
title: Metodo CompareStringOrdinal
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::CompareStringOrdinal
ms.assetid: ffa997fd-8cd7-40a5-b9e7-f55d40b072f4
ms.openlocfilehash: a1ac0576bdd374daa5cbd445af480e7652b61e45
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398706"
---
# <a name="comparestringordinal-method"></a>Metodo CompareStringOrdinal

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline INT32 CompareStringOrdinal(
   HSTRING lhs,
   HSTRING rhs)
```

### <a name="parameters"></a>Parametri

*lhs*<br/>
Il primo HSTRING da confrontare.

*rhs*<br/>
Il secondo HSTRING da confrontare.

## <a name="return-value"></a>Valore restituito

|Value|Condizione|
|-----------|---------------|
|-1|*LHS* è minore di *rhs*.|
|0|*LHS* è uguale a *rhs*.|
|1|*LHS* è maggiore di quella *rhs*.|

## <a name="remarks"></a>Note

Confronta due oggetti HSTRING specificati e restituisce un intero che indica la posizione relativa di una sequenza di ordinamento.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](microsoft-wrl-wrappers-details-namespace.md)