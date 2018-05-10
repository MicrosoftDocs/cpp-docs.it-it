---
title: oggetto (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.object
dev_langs:
- C++
helpviewer_keywords:
- object attribute
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 601d67fb48f0ae826474d33e7dca0fbffff9478c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
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
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Doppio](../windows/dual.md)   
 [Interfaccia dispatch](../windows/dispinterface.md)   
 [Personalizzato](../windows/custom-cpp.md)   
 [__interface](../cpp/interface.md)   
