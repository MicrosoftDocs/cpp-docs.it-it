---
title: "odl | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.odl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "odl attribute"
ms.assetid: 75dcb314-b50f-4a63-9180-507ac1bc78f3
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# odl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

identifica un'interfaccia come interfaccia \(ODL\) di ODL.  il compilatore MIDL non richiede **odl** attributo; viene riconosciuto solo per la compatibilità con i file più recenti di .odl.  
  
## Sintassi  
  
```  
  
[odl]  
  
```  
  
## Note  
 **odl** L'attributo di C\+\+ ha la stessa funzionalità di  [odl](http://msdn.microsoft.com/library/windows/desktop/aa367126) Attributo MIDL.  
  
## Esempio  
  
```  
// cpp_attr_ref_odl.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLIb")];  
  
[odl, oleautomation, dual, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IMyInterface  
{  
   HRESULT x();  
};  
  
[coclass, uuid("00000000-0000-0000-0000-000000000002")]  
class cmyClass : public IMyInterface  
{  
public:  
   HRESULT x(){}  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)