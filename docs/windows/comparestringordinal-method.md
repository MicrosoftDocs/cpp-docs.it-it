---
title: Metodo CompareStringOrdinal | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::CompareStringOrdinal
dev_langs:
- C++
ms.assetid: ffa997fd-8cd7-40a5-b9e7-f55d40b072f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0dc85bad774260f3db589d4f2649e0c39de2a530
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50067202"
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

*sul lato sinistro*<br/>
Il primo HSTRING da confrontare.

*rhs*<br/>
Il secondo HSTRING da confrontare.

## <a name="return-value"></a>Valore restituito

|Valore|Condizione|
|-----------|---------------|
|-1|*LHS* è minore di *rhs*.|
|0|*LHS* è uguale a *rhs*.|
|1|*LHS* è maggiore di quella *rhs*.|

## <a name="remarks"></a>Note

Confronta due oggetti HSTRING specificati e restituisce un intero che indica la posizione relativa di una sequenza di ordinamento.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)