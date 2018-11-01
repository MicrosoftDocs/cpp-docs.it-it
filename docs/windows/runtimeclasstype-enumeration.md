---
title: RuntimeClassType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassType
helpviewer_keywords:
- RuntimeClassType enumeration
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
ms.openlocfilehash: 62a82d5fab9fd22e23a5244d4fda3b7f5202304c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50626811"
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