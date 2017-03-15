---
title: "max_is | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.max_is"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "max_is attribute"
ms.assetid: 7c851f5c-6649-4d77-a792-247c37d8f560
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# max_is
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

definisce il valore massimo per un indice valido di matrice.  
  
## Sintassi  
  
```  
  
      [ max_is(  
   "expression"  
) ]  
```  
  
#### Parametri  
 *espressione*  
 Una o più espressioni di C.  Gli slot vuoti dell'argomento sono consentiti.  
  
## Note  
 **max\_is** L'attributo di C\+\+ ha la stessa funzionalità di  [max\_is](http://msdn.microsoft.com/library/windows/desktop/aa367074) Attributo MIDL.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Campo in `struct` o  **unione**, parametro di interfaccia, metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|**size\_is**|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Esempio  
 vedere [first\_is](../windows/first-is.md) per un esempio di come specificare una sezione di una matrice.  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [first\_is](../windows/first-is.md)   
 [last\_is](../windows/last-is.md)   
 [length\_is](../windows/length-is.md)   
 [size\_is](../windows/size-is.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)