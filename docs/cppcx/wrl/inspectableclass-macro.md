---
title: Macro InspectableClass
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::InspectableClass
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
ms.openlocfilehash: 9d194f5a87ac4a142301bc896cb3ed172f119473
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398193"
---
# <a name="inspectableclass-macro"></a>Macro InspectableClass

Imposta il nome e la relazione di trust a livello di classe runtime.

## <a name="syntax"></a>Sintassi

```cpp
InspectableClass(
   runtimeClassName,
   trustLevel)
```

### <a name="parameters"></a>Parametri

*runtimeClassName*<br/>
Il nome testuale completo della classe di runtime.

*trustLevel*<br/>
Uno dei [TrustLevel](/windows/desktop/api/inspectable/ne-inspectable-trustlevel) valori enumerati.

## <a name="remarks"></a>Note

Il **InspectableClass** macro può essere usata solo con tipi Windows Runtime.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](runtimeclass-class.md)