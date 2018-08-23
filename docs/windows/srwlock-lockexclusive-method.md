---
title: 'Metodo SRWLOCK:: Lockexclusive | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockExclusive
dev_langs:
- C++
helpviewer_keywords:
- LockExclusive method
ms.assetid: f361b672-fca6-45cc-a9b4-310cc0d23fdc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6218bfe1bbdc27749bed1395108b7a30533c50b7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42596883"
---
# <a name="srwlocklockexclusive-method"></a>Metodo SRWLock::LockExclusive

Acquisisce un **SRWLock** oggetto in modalità esclusiva.

## <a name="syntax"></a>Sintassi

```cpp
SyncLockExclusive LockExclusive();

static SyncLockExclusive LockExclusive(
   _In_ SRWLOCK* lock
);
```

### <a name="parameters"></a>Parametri

*lock*  
Puntatore a un **SRWLock** oggetto.

## <a name="return-value"></a>Valore restituito

Un' **SRWLock** oggetto in modalità esclusiva.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe SRWLock](../windows/srwlock-class.md)