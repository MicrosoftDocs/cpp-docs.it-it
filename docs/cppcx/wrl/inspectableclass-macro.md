---
title: Macro InspectableClass
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::InspectableClass
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
ms.openlocfilehash: ee2a76edb967923a03ce6720b4163baf1cc48c32
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69500484"
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

## <a name="remarks"></a>Note

La macro **InspectableClass** può essere utilizzata solo con Windows Runtime tipi.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](runtimeclass-class.md)