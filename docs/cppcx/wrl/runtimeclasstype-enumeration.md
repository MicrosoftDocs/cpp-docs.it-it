---
title: RuntimeClassType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassType
helpviewer_keywords:
- RuntimeClassType enumeration
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
ms.openlocfilehash: 3b869be00cdc405569b82bdf3730f8d4ca4f3aab
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785705"
---
# <a name="runtimeclasstype-enumeration"></a>RuntimeClassType (enumerazione)

Specifica il tipo della [RuntimeClass](runtimeclass-class.md) istanza in cui è supportata.

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

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)