---
title: Object (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.object
helpviewer_keywords:
- object attribute
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
ms.openlocfilehash: 4545d899c13a1eabf8ea5fb6fe3918fb5f05b626
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214676"
---
# <a name="object-c"></a>object (C++)

Identifica un'interfaccia personalizzata.

## <a name="syntax"></a>Sintassi

```cpp
[object]
```

## <a name="remarks"></a>Osservazioni

Quando si precede una definizione di interfaccia, l'attributo dell' **oggetto** C++ causa l'inserimento dell'interfaccia nel file con estensione IDL come interfaccia personalizzata.

Qualsiasi interfaccia contrassegnata con l'oggetto deve ereditare da `IUnknown`. Questa condizione viene soddisfatta se una qualsiasi delle interfacce di base eredita da `IUnknown`. Se nessuna interfaccia di base eredita da `IUnknown`, il compilatore provocherà la derivazione dell'interfaccia contrassegnata con l' **oggetto** da `IUnknown`.

## <a name="example"></a>Esempio

Per un esempio su come usare l' **oggetto**, vedere [nonbrowsable](nonbrowsable.md) .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[dual](dual.md)<br/>
[dispinterface](dispinterface.md)<br/>
[custom](custom-cpp.md)<br/>
[__interface](../../cpp/interface.md)
