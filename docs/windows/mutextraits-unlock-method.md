---
title: 'Metodo mutextraits:: Unlock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Unlock method
ms.assetid: 7c4e5664-6d95-498a-95bb-d30b5e866c2c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dd77ffd1f5757b87b210e94399945ea8e42d3e2b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46435389"
---
# <a name="mutextraitsunlock-method"></a>Metodo MutexTraits::Unlock

Rilascia il controllo esclusivo di una risorsa condivisa.

## <a name="syntax"></a>Sintassi

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle per un oggetto mutex.

## <a name="return-value"></a>Valore restituito

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="see-also"></a>Vedere anche

[Struttura MutexTraits](../windows/mutextraits-structure.md)