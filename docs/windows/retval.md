---
title: retval | Microsoft Docs
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
ms.openlocfilehash: d6f17f44e520018f82dc82abe88427a2410d68e7
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39606351"
---
# <a name="retval"></a>retval
Specifica il parametro che riceve il valore restituito del membro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[retval]  
```  
  
## <a name="remarks"></a>Note  
 Il **retval** attributi di C++ ha la stessa funzionalità come la [retval](http://msdn.microsoft.com/library/windows/desktop/aa367158) attributo MIDL.  
  
 **retval** devono essere visualizzati nell'ultimo argomento nella dichiarazione della funzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [associabile](../windows/bindable.md) per un esempio dell'uso dei **retval**.  
  
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