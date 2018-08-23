---
title: 'Metodo criticalsectiontraits:: Getinvalidvalue | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue
dev_langs:
- C++
helpviewer_keywords:
- GetInvalidValue method
ms.assetid: 665f30a6-ca9c-4968-8c03-8f84e6b2329b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4a23445cc9df0553a40d4f78a7ce3095a343d5d0
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599236"
---
# <a name="criticalsectiontraitsgetinvalidvalue-method"></a>Metodo CriticalSectionTraits::GetInvalidValue

Specializza una **CriticalSection** modello in modo che il modello è sempre valido.

## <a name="syntax"></a>Sintassi

```cpp
inline static Type GetInvalidValue();
```

## <a name="return-value"></a>Valore restituito

Restituisce sempre un puntatore a una sezione critica non è valida.

## <a name="remarks"></a>Note

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="see-also"></a>Vedere anche

[Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)