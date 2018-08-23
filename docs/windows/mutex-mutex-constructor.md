---
title: 'Costruttore mutex:: mutex | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex
dev_langs:
- C++
helpviewer_keywords:
- Mutex, constructor
ms.assetid: 504afcdc-775a-4c98-a06f-4fb4663eba3f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 62a1fc796188c38dfbd3aff004eba15b7e30ea89
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600505"
---
# <a name="mutexmutex-constructor"></a>Costruttore Mutex::Mutex

Inizializza una nuova istanza di **Mutex** classe.

## <a name="syntax"></a>Sintassi

```cpp
explicit Mutex(
   HANDLE h
);

Mutex(
   _Inout_ Mutex&& h
);
```

### <a name="parameters"></a>Parametri

*h*  
Un handle o un riferimento rvalue a un handle a un **Mutex** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore inizializza un **Mutex** oggetto dall'handle specificato. Il secondo costruttore inizializza un **Mutex** oggetto dall'handle specificato, quindi passa la proprietà del mutex all'attuale **Mutex** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche
[Classe Mutex](../windows/mutex-class1.md)