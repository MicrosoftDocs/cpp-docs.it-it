---
title: "custom (C++) | Microsoft Docs"
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
  - "vc-attr.custom"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "custom attributes, defining"
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# custom (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce i metadati per un oggetto nella libreria dei tipi.  
  
## Sintassi  
  
```  
  
      [ custom(  
   uuid,   
   value  
) ];  
```  
  
#### Parametri  
 *uuid*  
 ID univoco.  
  
 *corrispondente*  
 Un valore che può essere inserito in una variante.  
  
## Note  
 **personalizzati** L'attributo di C\+\+ determinerà la perdita delle informazioni a essere inserito nella libreria dei tipi.  È necessario disporre di uno strumento che indica il valore personalizzato dalla libreria dei tipi.  
  
 **personalizzati** l'attributo presenta la stessa funzionalità di  [personalizzati](http://msdn.microsoft.com/library/windows/desktop/aa366766) Attributo MIDL.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Non COM `interface`,  **classe**,  `enum`i,  `idl_module` metodi, membri di interfaccia, parametri di interfaccia,  `typedef`i,  **unione**i,  `struct`s|  
|**ripetibile**|Sì|  
|**attributi obbligatori**|**coclasse** \(se utilizzato nella classe\)|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)