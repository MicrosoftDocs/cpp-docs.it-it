---
description: 'Altre informazioni su: Enumerazione FactoryCacheFlags'
title: Enumerazione FactoryCacheFlags
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::FactoryCacheFlags
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
ms.openlocfilehash: 68a86049bf1f6287a84ae4df2e27dbe3c63c91c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198505"
---
# <a name="factorycacheflags-enumeration"></a>Enumerazione FactoryCacheFlags

Determina se gli oggetti factory vengono memorizzati nella cache.

## <a name="syntax"></a>Sintassi

```cpp
enum FactoryCacheFlags;
```

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, i criteri di memorizzazione nella cache di factory vengono specificati come parametro di modello [ModuleType](moduletype-enumeration.md) quando si crea un oggetto [modulo](module-class.md) . Per eseguire l'override di questo criterio, specificare un valore **FactoryCacheFlags** quando si crea un oggetto Factory.

| Criteri | Description |
|-|-|
|`FactoryCacheDefault`|Vengono utilizzati i criteri di memorizzazione nella cache dell' `Module` oggetto.|
|`FactoryCacheEnabled`|Abilita la memorizzazione nella cache della Factory indipendentemente dal `ModuleType` parametro di modello utilizzato per creare un `Module` oggetto.|
|`FactoryCacheDisabled`|Disabilita la memorizzazione nella cache di Factory indipendentemente dal `ModuleType` parametro di modello utilizzato per creare un `Module` oggetto.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
