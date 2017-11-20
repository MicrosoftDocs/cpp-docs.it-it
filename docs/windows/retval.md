---
title: retval | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: vc-attr.retval
dev_langs: C++
helpviewer_keywords: retval attribute
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f4e6a49f62b38c83b3cda8b92812aebcc10997bc
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
