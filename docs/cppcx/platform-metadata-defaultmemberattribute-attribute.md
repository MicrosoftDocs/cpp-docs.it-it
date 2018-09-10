---
title: DefaultMemberAttribute (attributo) | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Metadata::DefaultMemberAttribute
dev_langs:
- C++
helpviewer_keywords:
- Platform::Metadata::DefaultMemberAttribute Attribute
ms.assetid: d8abda01-c257-4371-aec4-541d4825e0af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 54959b293752ac0453ba383f86ab225e0b45e471
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44107001"
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