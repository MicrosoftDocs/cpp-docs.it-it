---
title: dispinterface (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.dispinterface
dev_langs:
- C++
helpviewer_keywords:
- dispinterface attribute
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3b02244e0576f99cc0a6940f2ee4a13511cfbe6f
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791101"
---
# <a name="dispinterface"></a>dispinterface

Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.

## <a name="syntax"></a>Sintassi

```cpp
[dispinterface]
```

## <a name="remarks"></a>Note

Quando l'attributo **dispinterface** di C++ precede un'interfaccia, quest'ultima viene inserita nel blocco della libreria nel file con estensione idl generato.

A meno che non si specifichi una classe di base, un'interfaccia di dispatch deriverà da `IDispatch`. È necessario specificare un [id](id.md) per i membri di un'interfaccia di dispatch.

L'esempio di utilizzo per [dispinterface](/windows/desktop/Midl/dispinterface) nella documentazione di MIDL:

```cpp
dispinterface helloPro
   { interface hello; };
```

non è valido per l'attributo **dispinterface** .

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](bindable.md) per un esempio di come usare **dispinterface**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`dual`, `object`, `oleautomation`, `local`, `ms_union`|

Per altre informazioni, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi per utilizzo](attributes-by-usage.md)<br/>
[uuid](uuid-cpp-attributes.md)<br/>
[dual](dual.md)<br/>
[custom](custom-cpp.md)<br/>
[object](object-cpp.md)<br/>
[__interface](../../cpp/interface.md)  