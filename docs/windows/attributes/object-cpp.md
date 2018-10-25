---
title: oggetto (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.object
dev_langs:
- C++
helpviewer_keywords:
- object attribute
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8828ada429875245d583c30d65259300a01f6a5d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50067436"
---
# <a name="object-c"></a>object (C++)

Identifica un'interfaccia personalizzata.

## <a name="syntax"></a>Sintassi

```cpp
[object]
```

## <a name="remarks"></a>Note

Quando precede una definizione di interfaccia, il **oggetto** C++ attributo causa l'interfaccia da inserire nel file con estensione idl come un'interfaccia personalizzata.

Qualsiasi interfaccia contrassegnata con l'oggetto deve ereditare da `IUnknown`. Questa condizione viene soddisfatta se una delle interfacce di base ereditare `IUnknown`. Se nessuna interfaccia di base non eredita da `IUnknown`, il compilatore genererà l'interfaccia contrassegnata con **oggetto** da cui derivare `IUnknown`.

## <a name="example"></a>Esempio

Visualizzare [nonbrowsable](nonbrowsable.md) per un esempio di come usare **oggetto**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[dual](dual.md)<br/>
[dispinterface](dispinterface.md)<br/>
[custom](custom-cpp.md)<br/>
[__interface](../../cpp/interface.md)