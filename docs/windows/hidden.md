---
title: nascosto | Documenti Microsoft
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
ms.openlocfilehash: 444994f046b58fbd54dcd3982836bb7fc4d53ed1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="hidden"></a>hidden
Indica che l'elemento esiste ma non deve essere visualizzato in un visualizzatore per utente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[hidden]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **nascosto** attributo C++ ha la stessa funzionalità come il [nascosto](http://msdn.microsoft.com/library/windows/desktop/aa366861) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [associabili](../windows/bindable.md) per un esempio di come utilizzare **nascosto**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`, **classe**, `struct`, metodo, proprietà|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**coclass** (quando applicato a **class** o `struct`)|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi di metodo](../windows/method-attributes.md)   
