---
title: "hidden | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.hidden"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hidden attribute"
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# hidden
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica che l'elemento esiste ma non deve essere visualizzata in un browser orientati a tramite.  
  
## Sintassi  
  
```  
  
[hidden]  
  
```  
  
## Note  
 **nascosto** L'attributo di C\+\+ ha la stessa funzionalità di  [nascosto](http://msdn.microsoft.com/library/windows/desktop/aa366861) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [associabile](../windows/bindable.md) per un esempio di utilizzo  **nascosto**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`,  **classe**,  `struct`, metodo, proprietà|  
|**ripetibile**|No|  
|**attributi obbligatori**|**coclasse** \(se applicato a  **classe** o  `struct`\)|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)