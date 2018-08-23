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
ms.openlocfilehash: 6ce3e391ac0da93ed7571a95ce328a5260a8dd44
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42593607"
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

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)  
[Funzione Make](../windows/make-function.md)