---
description: 'Altre informazioni su: Enumerazione RuntimeClassType'
title: RuntimeClassType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassType
helpviewer_keywords:
- RuntimeClassType enumeration
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
ms.openlocfilehash: 10055d79148124e886c4da50e40ffdb7d3d0fec0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135278"
---
# <a name="runtimeclasstype-enumeration"></a>RuntimeClassType (enumerazione)

Specifica il tipo di istanza di [RuntimeClass](runtimeclass-class.md) supportata.

## <a name="syntax"></a>Sintassi

```cpp
enum RuntimeClassType;
```

## <a name="members"></a>Members

### <a name="values"></a>Valori

|Nome|Description|
|----------|-----------------|
|`ClassicCom`|Una classe di runtime COM classica.|
|`Delegate`|Equivalente a `ClassicCom`.|
|`InhibitFtmBase`|Disabilita il `FtmBase` supporto mentre `__WRL_CONFIGURATION_LEGACY__` non è definito.|
|`InhibitWeakReference`|Disabilita il supporto di riferimento debole.|
|`WinRt`|Classe Windows Runtime.|
|`WinRtClassicComMix`|Combinazione di `WinRt` e `ClassicCom`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
