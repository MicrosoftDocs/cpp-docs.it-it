---
title: "retval | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.retval"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "retval attribute"
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# retval
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce il parametro che riceve il valore restituito del membro.  
  
## Sintassi  
  
```  
  
[retval]  
  
```  
  
## Note  
 **retval** L'attributo di C\+\+ ha la stessa funzionalità di  [retval](http://msdn.microsoft.com/library/windows/desktop/aa367158) Attributo MIDL.  
  
 **retval** deve trovarsi nell'ultimo argomento in una dichiarazione di funzione.  
  
## Esempio  
 Vedere l'esempio relativo a [associabile](../windows/bindable.md) per un esempio di utilizzo  **retval**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|parametro di interfaccia, metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|**out**|  
|**attributi non validi**|**in**|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)