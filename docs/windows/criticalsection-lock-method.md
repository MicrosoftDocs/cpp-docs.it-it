---
title: 'Metodo criticalsection:: lock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::Lock
dev_langs:
- C++
helpviewer_keywords:
- Lock method
ms.assetid: 37cb184c-e13c-49ef-b6a0-13908a956414
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f13af220107ba8d5bc5c26c65c2034f125a39454
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46382453"
---
# <a name="criticalsectionlock-method"></a>Metodo CriticalSection::Lock

Attende che la proprietà dell'oggetto specificato sezione critica. La funzione restituisce quando il thread chiamante è concessa la proprietà.

## <a name="syntax"></a>Sintassi

```cpp
SyncLock Lock();

   static SyncLock Lock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*cs*<br/>
Un oggetto specificato dall'utente sezione critica.

## <a name="return-value"></a>Valore restituito

Un oggetto di blocco che può essere utilizzato per sbloccare la sezione critica corrente.

## <a name="remarks"></a>Note

Il primo **blocco** function viene applicata l'oggetto corrente di sezione critica. La seconda **blocco** function viene applicata a una sezione critica specificato dall'utente.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe CriticalSection](../windows/criticalsection-class.md)