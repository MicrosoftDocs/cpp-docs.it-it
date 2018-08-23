---
title: 'Metodo criticalsectiontraits:: Unlock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Unlock method
ms.assetid: 8fb382f5-6eda-407e-9673-71d77bda4962
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 003bb9c845ef8124ade1262a25368d3d4cb34fa6
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606431"
---
# <a name="criticalsectiontraitsunlock-method"></a>Metodo CriticalSectionTraits::Unlock

Specializza un `CriticalSection` modello in modo che non supporta il rilascio del proprietario dell'oggetto specificato sezione critica.

## <a name="syntax"></a>Sintassi

```cpp
inline static void Unlock(
   _In_ Type cs
);
```

### <a name="parameters"></a>Parametri

*cs*  
Un puntatore a un oggetto sezione critica.

## <a name="remarks"></a>Note

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

Per altre informazioni, vedere **funzione LeaveCriticalSection** nel **funzioni di sincronizzazione** sezione della documentazione dell'API di Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="see-also"></a>Vedere anche

[Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)