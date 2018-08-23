---
title: Membro dati EventSource::addRemoveLock_ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::addRemoveLock_
dev_langs:
- C++
helpviewer_keywords:
- addRemoveLock_ data member
ms.assetid: e2d69256-4891-4aad-ad0b-76479c0bb076
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 084a292ed5228f337deced74a87ee20acf0ee5ab
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611735"
---
# <a name="eventsourceaddremovelock-data-member"></a>Membro dati EventSource::addRemoveLock_

Sincronizza l'accesso per il [targets](../windows/eventsource-targets-data-member.md) matrice durante l'aggiunta, rimozione o richiamare i gestori eventi.

## <a name="syntax"></a>Sintassi

```cpp
Wrappers::SRWLock addRemoveLock_;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
[Classe EventSource](../windows/eventsource-class.md)