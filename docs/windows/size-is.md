---
title: "size_is | Microsoft Docs"
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
  - "vc-attr.size_is"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "size_is attribute"
ms.assetid: 70192d09-f6c5-4d52-b3fe-303f8cb10aa5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# size_is
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specificare la dimensione della memoria allocata per i puntatori con dimensioni, puntatori con dimensioni a puntatori con dimensioni e naturale o matrici multidimensionali.  
  
## Sintassi  
  
```  
  
      [ size_is(  
   "expression"  
) ]  
```  
  
#### Parametri  
 *espressione*  
 La dimensione della memoria allocata per i puntatori con dimensioni.  
  
## Note  
 **size\_is** L'attributo di C\+\+ ha la stessa funzionalità di  [size\_is](http://msdn.microsoft.com/library/windows/desktop/aa367164) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [first\_is](../windows/first-is.md) per un esempio di come specificare una sezione di una matrice.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Campo in `struct` o  **unione**, parametro di interfaccia, metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|**max\_is**|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [first\_is](../windows/first-is.md)   
 [last\_is](../windows/last-is.md)   
 [max\_is](../windows/max-is.md)   
 [length\_is](../windows/length-is.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)