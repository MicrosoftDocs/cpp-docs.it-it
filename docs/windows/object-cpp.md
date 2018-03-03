---
title: oggetto (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.object
dev_langs:
- C++
helpviewer_keywords:
- object attribute
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5714d7c3bd029c7b1df636044ed1968f53600848
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="object-c"></a>object (C++)
Identifica un'interfaccia personalizzata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[object]  
  
```  
  
## <a name="remarks"></a>Note  
 Quando precede una definizione di interfaccia, il **oggetto** attributo C++ fa sì che l'interfaccia da inserire nel file IDL come un'interfaccia personalizzata.  
  
 Qualsiasi interfaccia contrassegnata con l'oggetto deve ereditare da **IUnknown**. Questa condizione viene soddisfatta se una delle interfacce di base ereditare **IUnknown**. Se nessuna interfaccia di base eredita da **IUnknown**, il compilatore genererà l'interfaccia contrassegnata con **oggetto** da cui derivare **IUnknown**.  
  
## <a name="example"></a>Esempio  
 Vedere [nonbrowsable](../windows/nonbrowsable.md) per un esempio di come utilizzare **oggetto**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [doppia](../windows/dual.md)   
 [interfaccia dispatch](../windows/dispinterface.md)   
 [personalizzato](../windows/custom-cpp.md)   
 [__interface](../cpp/interface.md)   
