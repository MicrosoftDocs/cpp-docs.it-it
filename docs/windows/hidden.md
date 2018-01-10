---
title: nascosto | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.hidden
dev_langs: C++
helpviewer_keywords: hidden attribute
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c038eb4869cb3191dd26b5c4ea8e1c6cc182e366
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi di classe](../windows/class-attributes.md)   
 [Attributi di metodo](../windows/method-attributes.md)   
