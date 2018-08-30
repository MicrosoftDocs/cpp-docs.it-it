---
title: interfaccia dispatch | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 6a98c9016281a67211a41d1c63fcb9886a0b3c35
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43222510"
---
# <a name="dispinterface"></a>dispinterface

Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.

## <a name="syntax"></a>Sintassi

```cpp
[dispinterface]
```

## <a name="remarks"></a>Note

Quando l'attributo **dispinterface** di C++ precede un'interfaccia, quest'ultima viene inserita nel blocco della libreria nel file con estensione idl generato.

A meno che non si specifichi una classe di base, un'interfaccia di dispatch deriverà da `IDispatch`. È necessario specificare un [id](../windows/id.md) per i membri di un'interfaccia di dispatch.

L'esempio di utilizzo per [dispinterface](/windows/desktop/Midl/dispinterface) nella documentazione di MIDL:

```cpp
dispinterface helloPro
   { interface hello; };
```

non è valido per l'attributo **dispinterface** .

## <a name="example"></a>Esempio

Per informazioni su come usare [dispinterface](../windows/bindable.md) , vedere l'esempio relativo a **bindable**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`dual`, `object`, `oleautomation`, `local`, `ms_union`|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi per utilizzo](../windows/attributes-by-usage.md)  
[uuid](../windows/uuid-cpp-attributes.md)  
[dual](../windows/dual.md)  
[custom](../windows/custom-cpp.md)  
[object](../windows/object-cpp.md)  
[__interface](../cpp/interface.md)  