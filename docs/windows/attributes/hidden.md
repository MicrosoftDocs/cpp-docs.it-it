---
title: nascosto (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.hidden
dev_langs:
- C++
helpviewer_keywords:
- hidden attribute
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9934f1f66bf520e8da65953dc3355d447d1844e6
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50072960"
---
# <a name="hidden"></a>hidden

Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.

## <a name="syntax"></a>Sintassi

```cpp
[hidden]
```

## <a name="remarks"></a>Note

Il **nascosto** attributi di C++ ha la stessa funzionalità come il [nascosto](/windows/desktop/Midl/hidden) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](bindable.md) per un esempio di come usare **nascosto**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **classe**, **struct**, metodo, proprietà|
|**Ripetibile**|No|
|**Attributi obbligatori**|**Coclasse** (quando applicato a **classe** oppure **struct**)|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)