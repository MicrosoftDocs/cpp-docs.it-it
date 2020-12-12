---
description: 'Altre informazioni su: Enumerazione ModuleType'
title: ModuleType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ModuleType
helpviewer_keywords:
- ModuleType enumeration
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
ms.openlocfilehash: 148f9594fd16a6c8a2af70ac0ff2ac03cd1f62e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209373"
---
# <a name="moduletype-enumeration"></a>ModuleType (enumerazione)

Specifica se un modulo deve supportare un server in-process o un server out-of-process.

## <a name="syntax"></a>Sintassi

```cpp
enum ModuleType;
```

## <a name="members"></a>Members

### <a name="values"></a>Valori

|Nome|Description|
|----------|-----------------|
|`InProc`|Un server in-process.|
|`OutOfProc`|Un server out-of-process.|
|`DisableCaching`|Disabilitare il meccanismo di memorizzazione nella cache sul modulo.|
|`InProcDisableCaching`|Combinazione di `InProc` e `DisableCaching` .|
|`OutOfProcDisableCaching`|Combinazione di `OutOfProc` e `DisableCaching` .|

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
