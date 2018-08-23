---
title: 'Operatore comptr:: Operator = = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator==
dev_langs:
- C++
ms.assetid: 6a26e936-29d4-4b7d-b44a-7c575ad07509
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 24ca52eccc814b82e5f9bdd6ddac6458fb5992fe
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42607136"
---
# <a name="comptroperator-operator"></a>Operatore ComPtr::operator==

Indica se due **ComPtr** oggetti sono uguali.

## <a name="syntax"></a>Sintassi

```cpp
bool operator==(
   const ComPtr<T>& a,
   const ComPtr<U>& b
);

bool operator==(
   const ComPtr<T>& a,
   decltype(__nullptr)  
);

bool operator==(
   decltype(__nullptr),
   const ComPtr<T>& a
);
```

### <a name="parameters"></a>Parametri

*a*  
Un riferimento a un **ComPtr** oggetto.

*b*  
Un riferimento a un'altra **ComPtr** oggetto.

## <a name="return-value"></a>Valore restituito

Primo operatore rese **true** se oggetti *una* è uguale all'oggetto *b*; in caso contrario, **false**.

Il secondo e terzo operatore yield **true** se oggetti *una* è uguale a **nullptr**; in caso contrario, **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)  
[Classe ComPtr](../windows/comptr-class.md)