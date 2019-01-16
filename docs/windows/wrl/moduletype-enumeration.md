---
title: ModuleType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ModuleType
helpviewer_keywords:
- ModuleType enumeration
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
ms.openlocfilehash: 937649eada481f7c45359fa0816266f62dc03875
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336579"
---
# <a name="moduletype-enumeration"></a>ModuleType (enumerazione)

Specifica se un modulo deve supportare un server in-process o un server out-of-process.

## <a name="syntax"></a>Sintassi

```cpp
enum ModuleType;
```

## <a name="members"></a>Membri

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`InProc`|Un server in-process.|
|`OutOfProc`|Un server out-of-process.|
|`DisableCaching`|Disabilitare il meccanismo di memorizzazione nella cache sul modulo.|
|`InProcDisableCaching`|Combinazione di `InProc` e `DisableCaching`.|
|`OutOfProcDisableCaching`|Combinazione di `OutOfProc` e `DisableCaching`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)