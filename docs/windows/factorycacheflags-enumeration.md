---
title: Enumerazione FactoryCacheFlags
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::FactoryCacheFlags
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
ms.openlocfilehash: 8320563991981f7a49d4775a2bad9c487124d907
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50595650"
---
# <a name="factorycacheflags-enumeration"></a>Enumerazione FactoryCacheFlags

Determina se gli oggetti factory vengono memorizzati nella cache.

## <a name="syntax"></a>Sintassi

```cpp
enum FactoryCacheFlags;
```

## <a name="remarks"></a>Note

Per impostazione predefinita, la factory dei criteri di memorizzazione nella cache è specificata come la [ModuleType](../windows/moduletype-enumeration.md) parametro di modello quando si crea un [modulo](../windows/module-class.md) oggetto. Per eseguire l'override di questo criterio, specificare una **FactoryCacheFlags** valore quando si crea un oggetto factory.

|||
|-|-|
|`FactoryCacheDefault`|I criteri di memorizzazione nella cache il `Module` oggetto viene usato.|
|`FactoryCacheEnabled`|Abilita la memorizzazione nella cache di factory indipendentemente i `ModuleType` parametro di modello che viene usato per creare un `Module` oggetto.|
|`FactoryCacheDisabled`|Disabilita la memorizzazione nella cache di factory indipendentemente i `ModuleType` parametro di modello che viene usato per creare un `Module` oggetto.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)