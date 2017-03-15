---
title: "last_is | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.last_is"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "last_is attribute"
ms.assetid: 9e045ac0-fa38-4249-af55-67bde5d0a58c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# last_is
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica l'indice dell'ultimo elemento di matrice da un flusso.  
  
## Sintassi  
  
```  
  
      [ last_is(  
   "expression"  
) ]  
```  
  
#### Parametri  
 *espressione*  
 Una o più espressioni di C.  Gli slot vuoti dell'argomento sono consentiti.  
  
## Note  
 **last\_is** L'attributo di C\+\+ ha la stessa funzionalità di  [last\_is](http://msdn.microsoft.com/library/windows/desktop/aa367066) Attributo MIDL.  
  
## Esempio  
 vedere [first\_is](../windows/first-is.md) per un esempio di come specificare una sezione di una matrice.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Campo in `struct` o  **unione**, parametro di interfaccia, metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [first\_is](../windows/first-is.md)   
 [max\_is](../windows/max-is.md)   
 [length\_is](../windows/length-is.md)   
 [size\_is](../windows/size-is.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)