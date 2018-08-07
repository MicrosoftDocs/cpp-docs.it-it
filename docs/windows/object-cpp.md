---
title: oggetto (C++) | Microsoft Docs
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
ms.openlocfilehash: 2c0705c5d841b63cd3f537ab39dbbe9122fea869
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39607910"
---
# <a name="object-c"></a>object (C++)
Identifica un'interfaccia personalizzata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[object]  
```  
  
## <a name="remarks"></a>Note  
 Quando precede una definizione di interfaccia, il **oggetto** C++ attributo causa l'interfaccia da inserire nel file con estensione idl come un'interfaccia personalizzata.  
  
 Qualsiasi interfaccia contrassegnata con l'oggetto deve ereditare da `IUnknown`. Questa condizione viene soddisfatta se una delle interfacce di base ereditare `IUnknown`. Se nessuna interfaccia di base non eredita da `IUnknown`, il compilatore genererà l'interfaccia contrassegnata con **oggetto** da cui derivare `IUnknown`.  
  
## <a name="example"></a>Esempio  
 Visualizzare [nonbrowsable](../windows/nonbrowsable.md) per un esempio di come usare **oggetto**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|**interface**|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Dual](../windows/dual.md)   
 [Interfaccia dispatch](../windows/dispinterface.md)   
 [Personalizzati](../windows/custom-cpp.md)   
 [__interface](../cpp/interface.md)   