---
title: 'Metodo srwlocksharedtraits:: Unlock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Unlock method
ms.assetid: 33cdead9-1900-4094-b18e-38fcf1a0bd28
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e00b898fc60953896a9c0d2b7a124e195d3bcbf1
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42593168"
---
# <a name="srwlocksharedtraitsunlock-method"></a>Metodo SRWLockSharedTraits::Unlock

Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.

## <a name="syntax"></a>Sintassi

```cpp
inline static void Unlock(
   _In_ Type srwlock
);
```

### <a name="parameters"></a>Parametri

*SRWLOCK*  
Un handle per un `SRWLock` oggetto.

## <a name="return-value"></a>Valore restituito

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="see-also"></a>Vedere anche

[Struttura SRWLockSharedTraits](../windows/srwlocksharedtraits-structure.md)