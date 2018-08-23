---
title: RuntimeClassType (enumerazione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassType
dev_langs:
- C++
helpviewer_keywords:
- RuntimeClassType enumeration
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a3358455755ec4c00ebea85fc13fe0022c7b6697
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595454"
---
# <a name="runtimeclasstype-enumeration"></a>RuntimeClassType (enumerazione)

Specifica il tipo della [RuntimeClass](../windows/runtimeclass-class.md) istanza in cui è supportata.

## <a name="syntax"></a>Sintassi

```cpp
enum RuntimeClassType;
```

## <a name="members"></a>Membri

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ClassicCom`|Una classe di runtime classica COM.|
|`Delegate`|Equivalente a `ClassicCom`.|
|`InhibitFtmBase`|Consente di disattivare `FtmBase` supporto durante `__WRL_CONFIGURATION_LEGACY__` non è definito.|
|`InhibitWeakReference`|Disabilita il supporto di riferimento debole.|
|`WinRt`|Una classe di Windows Runtime.|
|`WinRtClassicComMix`|Combinazione di `WinRt` e `ClassicCom`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)