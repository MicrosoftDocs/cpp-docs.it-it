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
ms.openlocfilehash: ea3ece20ac6df0fab00f1e21d27c41ae6e115517
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50065902"
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

L'esempio d'uso relativo a [dispinterface](/windows/desktop/Midl/dispinterface) nella documentazione di MIDL:

```cpp
dispinterface helloPro
   { interface hello; };
```

non è valido per l'attributo **dispinterface** .

## <a name="example"></a>Esempio

Per informazioni su come usare [dispinterface](bindable.md) , vedere l'esempio relativo a **bindable**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`dual`, `object`, `oleautomation`, `local`, `ms_union`|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi per utilizzo](attributes-by-usage.md)<br/>
[uuid](uuid-cpp-attributes.md)<br/>
[dual](dual.md)<br/>
[custom](custom-cpp.md)<br/>
[object](object-cpp.md)<br/>
[__interface](../../cpp/interface.md)