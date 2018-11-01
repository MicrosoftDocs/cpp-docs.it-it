---
title: oggetto (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.object
helpviewer_keywords:
- object attribute
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
ms.openlocfilehash: 1cae9e6b014f33dfbbcccdeb4172d6f35349e307
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50526163"
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