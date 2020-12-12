---
description: 'Altre informazioni su: oleautomation'
title: oleautomation (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.oleautomation
helpviewer_keywords:
- oleautomation attribute
ms.assetid: c1086c91-260b-4dc3-b244-662852d09906
ms.openlocfilehash: 0227b1926d1e78f8f7bbfeb9b75ddd1b6d98aa2f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327426"
---
# <a name="oleautomation"></a>oleautomation

Indica che un'interfaccia è compatibile con l'automazione.

## <a name="syntax"></a>Sintassi

```cpp
[oleautomation]
```

## <a name="remarks"></a>Osservazioni

L'attributo **oleautomation** di C++ ha la stessa funzionalità dell'attributo MIDL di [oleautomation](/windows/win32/Midl/oleautomation) .

## <a name="example"></a>Esempio

Vedere gli esempi per [DefaultValue](defaultvalue.md) e non [estendibile](nonextensible.md) per un esempio di uso di **oleautomation**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|**dispinterface**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
