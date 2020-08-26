---
title: oggetto (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.object
helpviewer_keywords:
- object attribute
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
ms.openlocfilehash: c0c0ff552d8a33ebe70f56b9b186e963cc8e9b3d
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88843105"
---
# <a name="object-c"></a>object (C++)

Identifica un'interfaccia personalizzata.

## <a name="syntax"></a>Sintassi

```cpp
[object]
```

## <a name="remarks"></a>Osservazioni

Quando si precede una definizione di interfaccia, l'attributo C++ dell' **oggetto** causa l'inserimento dell'interfaccia nel file con estensione IDL come interfaccia personalizzata.

Qualsiasi interfaccia contrassegnata con l'oggetto deve ereditare da `IUnknown` . Questa condizione viene soddisfatta se una qualsiasi delle interfacce di base eredita da `IUnknown` . Se nessuna interfaccia di base eredita da `IUnknown` , il compilatore provocherà l'interfaccia contrassegnata con l' **oggetto** da cui derivare `IUnknown` .

## <a name="example"></a>Esempio

Per un esempio su come usare l' **oggetto**, vedere [nonbrowsable](nonbrowsable.md) .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[dual](dual.md)<br/>
[dispinterface](dispinterface.md)<br/>
[personalizzato](custom-cpp.md)<br/>
[__interface](../../cpp/interface.md)
