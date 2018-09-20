---
title: DontUseNewUseMake (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::DontUseNewUseMake
dev_langs:
- C++
helpviewer_keywords:
- DontUseNewUseMake class
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dc2b2f03cfbd488de8358b2e4b123716efcbfe15
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431308"
---
# <a name="dontusenewusemake-class"></a>DontUseNewUseMake (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class DontUseNewUseMake;
```

## <a name="remarks"></a>Note

Impedisce usando l'operatore **nuove** in `RuntimeClass`. Di conseguenza, è necessario usare il [rendere funzione](../windows/make-function.md) invece.

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore DontUseNewUseMake::operator new](../windows/dontusenewusemake-operator-new-operator.md)|Operatore di overload **nuove** e impedisce l'utilizzo `RuntimeClass`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DontUseNewUseMake`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)<br/>
[Funzione Make](../windows/make-function.md)