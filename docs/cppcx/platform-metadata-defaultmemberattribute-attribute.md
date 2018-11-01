---
title: Platform::Metadata::DefaultMemberAttribute (attributo)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Metadata::DefaultMemberAttribute
helpviewer_keywords:
- Platform::Metadata::DefaultMemberAttribute Attribute
ms.assetid: d8abda01-c257-4371-aec4-541d4825e0af
ms.openlocfilehash: a4b3d5e8ab5d6ce254560bc84daceac74e2c9ca1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486658"
---
# <a name="platformmetadatadefaultmemberattribute-attribute"></a>Platform::Metadata::DefaultMemberAttribute (attributo)

Indica la funzione preferita da chiamare tra numerose funzioni in overload possibili.

## <a name="syntax"></a>Sintassi

```cpp
public ref class DefaultMember abstract : Attribute
```

## <a name="inheritance"></a>Ereditarietà

[Platform::Object](../cppcx/platform-object-class.md)

[Platform::Metadata::Attribute](../cppcx/platform-metadata-attribute-attribute.md)

### <a name="remarks"></a>Note

Applica l'attributo DefaultMember a un metodo che verrà utilizzato da un'applicazione JavaScript.

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform::Metadata

**Metadati:** platform.winmd

## <a name="see-also"></a>Vedere anche

[Platform::Metadata (spazio dei nomi)](../cppcx/platform-metadata-namespace.md)