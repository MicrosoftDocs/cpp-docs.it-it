---
title: Enumerazione ModuleType
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ModuleType
helpviewer_keywords:
- ModuleType enumeration
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
ms.openlocfilehash: 8425a15d594f7b8b30027d3576ee86015b656130
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213720"
---
# <a name="moduletype-enumeration"></a>Enumerazione ModuleType

Specifica se un modulo deve supportare un server in-process o un server out-of-process.

## <a name="syntax"></a>Sintassi

```cpp
enum ModuleType;
```

## <a name="members"></a>Members

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`InProc`|Un server in-process.|
|`OutOfProc`|Un server out-of-process.|
|`DisableCaching`|Disabilitare il meccanismo di memorizzazione nella cache sul modulo.|
|`InProcDisableCaching`|Combinazione di `InProc` e `DisableCaching`.|
|`OutOfProcDisableCaching`|Combinazione di `OutOfProc` e `DisableCaching`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)
