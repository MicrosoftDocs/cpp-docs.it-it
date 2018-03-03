---
title: locale (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- vc-attr.local
dev_langs:
- C++
helpviewer_keywords:
- local attribute
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3543adfe0cb25f7946e6ed6c81c4bd66a7b60324
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="local-c"></a>local (C++)
Quando utilizzato nell'intestazione di interfaccia, consente di usare il compilatore MIDL come generatore di intestazione. Quando utilizzato in una singola funzione, indica una procedura locale per il quale non vengono generati stub.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
[local]  
  
```  
  
## <a name="remarks"></a>Note  
 Il `local` attributo C++ ha la stessa funzionalità come il [locale](http://msdn.microsoft.com/library/windows/desktop/aa367071) attributo MIDL.  
  
## <a name="example"></a>Esempio  
 Vedere [call_as](../windows/call-as.md) per un esempio di come utilizzare `local`.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`, metodo di interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|**dispinterface**|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi IDL](../windows/idl-attributes.md)   
 [Attributi di interfaccia](../windows/interface-attributes.md)   
 [Attributi del metodo](../windows/method-attributes.md)   
 [call_as](../windows/call-as.md)   
