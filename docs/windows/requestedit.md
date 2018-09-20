---
title: requestedit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.requestedit
dev_langs:
- C++
helpviewer_keywords:
- requestedit attribute
ms.assetid: b3c24790-3c4a-4646-8722-03d7b51172ee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5555a71ae9bbe8daf0de9361a01d11431574e574
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46422363"
---
# <a name="requestedit"></a>requestedit

Indica che la proprietà supporta il `OnRequestEdit` notifica.

## <a name="syntax"></a>Sintassi

```cpp
[requestedit]
```

## <a name="remarks"></a>Note

Il **requestedit** attributi di C++ ha la stessa funzionalità come la [requestedit](/windows/desktop/Midl/requestedit) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](../windows/bindable.md) per un esempio dell'uso dei **requestedit**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi di metodo](../windows/method-attributes.md)<br/>
[Attributi di membro dati](../windows/data-member-attributes.md)<br/>
[defaultbind](../windows/defaultbind.md)<br/>
[displaybind](../windows/displaybind.md)<br/>
[immediatebind](../windows/immediatebind.md)  