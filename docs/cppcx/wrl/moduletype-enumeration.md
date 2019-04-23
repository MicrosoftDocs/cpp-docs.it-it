---
title: ModuleType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ModuleType
helpviewer_keywords:
- ModuleType enumeration
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
ms.openlocfilehash: 3c7486cbc761975dd133f229f23dcf0b70e7e3ac
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59039156"
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