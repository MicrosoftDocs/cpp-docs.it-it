---
title: 'Metodo criticalsection:: TryLock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::TryLock
dev_langs:
- C++
helpviewer_keywords:
- TryLock method
ms.assetid: 504bb87c-2cd0-4f54-b458-b3efb9789053
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 44b4e251898ef6386d0642582af2c00881f7a181
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408583"
---
# <a name="criticalsectiontrylock-method"></a>Metodo CriticalSection::TryLock

Tenta di immettere una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante ha la proprietà della sezione critica.

## <a name="syntax"></a>Sintassi

```cpp
SyncLock TryLock();

static SyncLock TryLock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*cs*<br/>
Un oggetto specificato dall'utente sezione critica.

## <a name="return-value"></a>Valore restituito

Un valore diverso da zero se la sezione critica è stato immesso correttamente o il thread corrente è già proprietario della sezione critica. Zero in caso di un altro thread già proprietario della sezione critica.

## <a name="remarks"></a>Note

Il primo **TryLock** function viene applicata l'oggetto corrente di sezione critica. La seconda **TryLock** function viene applicata a una sezione critica specificato dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe CriticalSection](../windows/criticalsection-class.md)