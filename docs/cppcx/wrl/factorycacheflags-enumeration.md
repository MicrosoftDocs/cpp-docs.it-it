---
title: Enumerazione FactoryCacheFlags
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::FactoryCacheFlags
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
ms.openlocfilehash: 250c8c8e7ade72bd1a9cd63f0b515774058f0723
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214006"
---
# <a name="factorycacheflags-enumeration"></a>Enumerazione FactoryCacheFlags

Determina se gli oggetti factory vengono memorizzati nella cache.

## <a name="syntax"></a>Sintassi

```cpp
enum FactoryCacheFlags;
```

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, i criteri di memorizzazione nella cache di factory vengono specificati come parametro di modello [ModuleType](moduletype-enumeration.md) quando si crea un oggetto [modulo](module-class.md) . Per eseguire l'override di questo criterio, specificare un valore **FactoryCacheFlags** quando si crea un oggetto Factory.

|||
|-|-|
|`FactoryCacheDefault`|Vengono utilizzati i criteri di memorizzazione nella cache dell'oggetto `Module`.|
|`FactoryCacheEnabled`|Abilita la memorizzazione nella cache della Factory indipendentemente dal parametro di modello `ModuleType` usato per creare un oggetto `Module`.|
|`FactoryCacheDisabled`|Disabilita la memorizzazione nella cache di Factory indipendentemente dal parametro di modello `ModuleType` usato per creare un oggetto `Module`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)
