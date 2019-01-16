---
title: Macro InspectableClass
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::InspectableClass
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
ms.openlocfilehash: bdc3dc5b54aa28280f22b1481a9be20ee0be22c6
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336763"
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
Uno dei [TrustLevel](https://msdn.microsoft.com/library/br224625.aspx) valori enumerati.

## <a name="remarks"></a>Note

Il **InspectableClass** macro può essere usata solo con tipi Windows Runtime.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](runtimeclass-class.md)