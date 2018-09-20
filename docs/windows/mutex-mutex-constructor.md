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
ms.openlocfilehash: b7436aeb470804bd47dcc647ff0fe9a13faaae95
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444281"
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

*h*<br/>
Un handle o un riferimento rvalue a un handle a un **Mutex** oggetto.

## <a name="remarks"></a>Note

Il primo costruttore inizializza un **Mutex** oggetto dall'handle specificato. Il secondo costruttore inizializza un **Mutex** oggetto dall'handle specificato, quindi passa la proprietà del mutex all'attuale **Mutex** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe Mutex](../windows/mutex-class1.md)