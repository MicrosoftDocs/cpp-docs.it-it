---
title: retval | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.retval
dev_langs:
- C++
helpviewer_keywords:
- retval attribute
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1c0bf7ecd989b51a17c853c6d2986db204c3ce34
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33888721"
---
# <a name="retval"></a>retval
Specifica il parametro che riceve il valore restituito del membro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[retval]  
  
```  
  
## <a name="remarks"></a>Note  
 Il **retval** attributo C++ ha la stessa funzionalità come il [retval](http://msdn.microsoft.com/library/windows/desktop/aa367158) attributo MIDL.  
  
 **retval** deve trovarsi nell'ultimo argomento nella dichiarazione della funzione.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [associabili](../windows/bindable.md) per un esempio dell'uso di **retval**.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|**out**|  
|**Attributi non validi**|**in**|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi dei parametri](../windows/parameter-attributes.md)   
 [Attributi di metodo](../windows/method-attributes.md)   
