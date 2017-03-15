---
title: "helpcontext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.helpcontext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "helpcontext attribute"
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# helpcontext
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica un ID di contesto che consente di visualizzare le informazioni utente su questo elemento nel file della Guida.  
  
## Sintassi  
  
```  
  
      [ helpcontext(  
   id  
) ]  
```  
  
#### Parametri  
 `id`  
 ID del contesto dell'argomento della Guida.  vedere [Guida HTML: Guida sensibile al contesto per i programmi](../mfc/html-help-context-sensitive-help-for-your-programs.md) per ulteriori informazioni sul contesto ID.  
  
## Note  
 **helpcontext** L'attributo di C\+\+ ha la stessa funzionalità di  [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [valore predefinito](../windows/defaultvalue.md) per un esempio di utilizzo  **helpcontext**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`,  `typedef`,  **classe**, metodo, proprietà|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [helpfile](../windows/helpfile.md)   
 [helpstring](../windows/helpstring.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)