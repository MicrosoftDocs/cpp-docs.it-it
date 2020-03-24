---
title: Metodo CompareStringOrdinal
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::CompareStringOrdinal
ms.assetid: ffa997fd-8cd7-40a5-b9e7-f55d40b072f4
ms.openlocfilehash: 1291084395b02602b7a3de9013df6720d2e237fc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214097"
---
# <a name="comparestringordinal-method"></a>Metodo CompareStringOrdinal

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline INT32 CompareStringOrdinal(
   HSTRING lhs,
   HSTRING rhs)
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo HSTRING da confrontare.

*rhs*<br/>
Secondo HSTRING da confrontare.

## <a name="return-value"></a>Valore restituito

|valore|Condizione|
|-----------|---------------|
|-1|*LHS* è minore di *RHS*.|
|0|*LHS* equivale a *RHS*.|
|1|*LHS* è maggiore di *RHS*.|

## <a name="remarks"></a>Osservazioni

Confronta due oggetti HSTRING specificati e restituisce un intero che ne indica la posizione relativa in un ordinamento.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](microsoft-wrl-wrappers-details-namespace.md)
