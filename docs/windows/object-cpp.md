---
title: "object (C++) | Microsoft Docs"
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
  - "vc-attr.object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "object attribute"
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# object (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

identifica un'interfaccia personalizzata.  
  
## Sintassi  
  
```  
  
[object]  
  
```  
  
## Note  
 Nel precedente una definizione di interfaccia, **oggetto** Cause dell'attributo di C\+\+ l'interfaccia da inserire nel file IDL come interfaccia personalizzata.  
  
 Qualsiasi interfaccia contrassegnata con oggetto deve ereditare da **IUnknown**.  Questa condizione viene soddisfatta se una delle interfacce di base ereditano da **IUnknown**.  Se nessuna interfaccia di base eredita da **IUnknown**, il compilatore genera l'interfaccia contrassegnata con  **oggetto** per derivare da  **IUnknown**.  
  
## Esempio  
 vedere [nonbrowsable](../windows/nonbrowsable.md) per un esempio di utilizzo  **oggetto**.  
  
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
 [dual](../windows/dual.md)   
 [dispinterface](../windows/dispinterface.md)   
 [custom](../windows/custom-cpp.md)   
 [\_\_interface](../cpp/interface.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)