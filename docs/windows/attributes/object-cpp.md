---
title: oggetto (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.object
helpviewer_keywords:
- object attribute
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
ms.openlocfilehash: c0f544e84e5110761dfd01e25abef4352f055ff5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407536"
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