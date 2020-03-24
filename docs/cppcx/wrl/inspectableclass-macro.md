---
title: Macro InspectableClass
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::InspectableClass
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
ms.openlocfilehash: 755a8f58ffc290d73d6060b0b0924905ecbf6028
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213876"
---
# <a name="inspectableclass-macro"></a>Macro InspectableClass

Imposta il nome della classe di runtime e il livello di attendibilità.

## <a name="syntax"></a>Sintassi

```cpp
InspectableClass(
   runtimeClassName,
   trustLevel)
```

### <a name="parameters"></a>Parametri

*runtimeClassName*<br/>
Nome testuale completo della classe di Runtime.

*trustLevel*<br/>
Uno dei valori enumerati [trustLevel](/windows/win32/api/inspectable/ne-inspectable-trustlevel) .

## <a name="remarks"></a>Osservazioni

La macro **InspectableClass** può essere utilizzata solo con Windows Runtime tipi.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](runtimeclass-class.md)
