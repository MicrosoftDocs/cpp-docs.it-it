---
title: 'Metodo SRWLOCK:: Trylockshared | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockShared
dev_langs:
- C++
helpviewer_keywords:
- TryLockShared method
ms.assetid: 10cc198d-39a0-4d18-aa78-706744948668
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bcad153145432997841753828b3b01b728ff365d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42608173"
---
# <a name="srwlocktrylockshared-method"></a>Metodo SRWLock::TryLockShared

Prova ad acquisire un **SRWLock** oggetto in modalità condivisa per il correnti o specificate **SRWLock** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW SyncLockShared TryLockShared();
WRL_NOTHROW static SyncLockShared TryLockShared(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*  
Puntatore a un **SRWLock** oggetto.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, un **SRWLock** oggetto in modalità condivisa e il thread chiamante assume la proprietà del blocco. In caso contrario, un **SRWLock** oggetto il cui stato non è valido.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe SRWLock](../windows/srwlock-class.md)