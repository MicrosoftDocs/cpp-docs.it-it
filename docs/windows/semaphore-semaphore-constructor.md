---
title: 'Costruttore Semaphore:: Semaphore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::Semaphore
dev_langs:
- C++
helpviewer_keywords:
- Semaphore, constructor
ms.assetid: 91c22ae7-181e-460d-ad40-70c3a53b26fd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a585f052c42453f0eb9fe8a39a21a5561d4b00c3
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42598960"
---
# <a name="semaphoresemaphore-constructor"></a>Costruttore Semaphore::Semaphore

Inizializza una nuova istanza di **semaforo** classe.

## <a name="syntax"></a>Sintassi

```cpp
explicit Semaphore(
   HANDLE h
);

WRL_NOTHROW Semaphore(
   _Inout_ Semaphore&& h
);
```

### <a name="parameters"></a>Parametri

*h*  
Un handle o un riferimento rvalue a un **semaforo** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche
[Classe Semaphore](../windows/semaphore-class.md)