---
title: RuntimeClassType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassType
helpviewer_keywords:
- RuntimeClassType enumeration
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
ms.openlocfilehash: 53f0172968c28762bb1305e274bbd47494cdaf4c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213577"
---
# <a name="runtimeclasstype-enumeration"></a>RuntimeClassType (enumerazione)

Specifica il tipo di istanza di [RuntimeClass](runtimeclass-class.md) supportata.

## <a name="syntax"></a>Sintassi

```cpp
enum RuntimeClassType;
```

## <a name="members"></a>Members

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`ClassicCom`|Una classe di runtime COM classica.|
|`Delegate`|È equivalente a `ClassicCom`.|
|`InhibitFtmBase`|Disabilita il supporto di `FtmBase` mentre `__WRL_CONFIGURATION_LEGACY__` non è definito.|
|`InhibitWeakReference`|Disabilita il supporto di riferimento debole.|
|`WinRt`|Classe Windows Runtime.|
|`WinRtClassicComMix`|Combinazione di `WinRt` e `ClassicCom`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)
