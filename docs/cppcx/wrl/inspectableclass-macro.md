---
description: 'Altre informazioni su: InspectableClass macro'
title: Macro InspectableClass
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::InspectableClass
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
ms.openlocfilehash: cb19db7f35e7bda351cd84fa4dcf1f6a2b2ea2ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229002"
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

## <a name="remarks"></a>Commenti

La macro **InspectableClass** può essere utilizzata solo con Windows Runtime tipi.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Classe RuntimeClass](runtimeclass-class.md)
