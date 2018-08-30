---
title: nascosto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 350f1c7c844bd386191b2a236f5bc4ada4e1672a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43204528"
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

Vedere l'esempio relativo [associabile](../windows/bindable.md) per un esempio di come usare **nascosto**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **classe**, **struct**, metodo, proprietà|
|**Ripetibile**|No|
|**Attributi obbligatori**|**Coclasse** (quando applicato a **classe** oppure **struct**)|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di interfaccia](../windows/interface-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  