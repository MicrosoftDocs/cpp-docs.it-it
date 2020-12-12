---
description: 'Altre informazioni su: Metodo CompareStringOrdinal'
title: Metodo CompareStringOrdinal
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::CompareStringOrdinal
ms.assetid: ffa997fd-8cd7-40a5-b9e7-f55d40b072f4
ms.openlocfilehash: 1994d0f3ec4104e27094de10255194a911ae2945
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282848"
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

|Valore|Condizione|
|-----------|---------------|
|-1|*LHS* è minore di *RHS*.|
|0|*LHS* equivale a *RHS*.|
|1|*LHS* è maggiore di *RHS*.|

## <a name="remarks"></a>Commenti

Confronta due oggetti HSTRING specificati e restituisce un intero che ne indica la posizione relativa in un ordinamento.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers::D etails

## <a name="see-also"></a>Vedi anche

[Microsoft:: WRL:: Wrappers: spazio dei nomi:D etails](microsoft-wrl-wrappers-details-namespace.md)
