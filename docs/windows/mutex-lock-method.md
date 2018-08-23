---
title: 'Metodo mutex:: lock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock
dev_langs:
- C++
helpviewer_keywords:
- Lock method
ms.assetid: 61d95072-b690-441e-a080-0bf94a733141
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 38bd11620f8d403bbd1667ab6fa4f3f827362c88
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600873"
---
# <a name="mutexlock-method"></a>Metodo Mutex::Lock

Attende fino a quando l'oggetto corrente, o la **Mutex** oggetto associato all'handle specificato, le versioni è trascorso l'intervallo di timeout specificato o il mutex.

## <a name="syntax"></a>Sintassi

```cpp
SyncLock Lock(
   DWORD milliseconds = INFINITE
);

static SyncLock Lock(
   HANDLE h,
   DWORD milliseconds = INFINITE
);
```

### <a name="parameters"></a>Parametri

*millisecondi*  
L'intervallo di timeout, espresso in millisecondi. Il valore predefinito è INFINITE, che è in attesa per un periodo illimitato.

*h*  
L'handle di una **Mutex** oggetto.

## <a name="return-value"></a>Valore restituito

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche
[Classe Mutex](../windows/mutex-class1.md)