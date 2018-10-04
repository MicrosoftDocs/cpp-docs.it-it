---
title: oleautomation (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.oleautomation
dev_langs:
- C++
helpviewer_keywords:
- oleautomation attribute
ms.assetid: c1086c91-260b-4dc3-b244-662852d09906
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a3a0ec5a39d6e99e5ceb6ec4ed089373e3057c1e
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791202"
---
# <a name="oleautomation"></a>oleautomation

Indica che un'interfaccia è compatibile con l'automazione.

## <a name="syntax"></a>Sintassi

```cpp
[oleautomation]
```

## <a name="remarks"></a>Note

Il **oleautomation** attributi di C++ ha la stessa funzionalità come la [oleautomation](/windows/desktop/Midl/oleautomation) attributo MIDL.

## <a name="example"></a>Esempio

Per vedere gli esempi [defaultvalue](defaultvalue.md) e [nonextensible](nonextensible.md) per un esempio dell'uso di **oleautomation**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|**dispinterface**|

Per altre informazioni sui contesti di attributi, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)  