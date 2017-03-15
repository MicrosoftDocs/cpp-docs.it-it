---
title: "library_block | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.library_block"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "library_block attribute"
ms.assetid: ae7a7ebe-5e1a-4eda-a058-11bbd058ece8
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# library_block
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inserisce un costrutto nel blocco di libreria IDL.  
  
## Sintassi  
  
```  
  
[library_block]  
  
```  
  
## Note  
 Quando si inserisce un costrutto nel blocco di libreria, si garantisce che si trasformerà la libreria dei tipi, indipendentemente dal fatto che si è fatto riferimento.  Per impostazione predefinita, solo costrutti modificati da [coclasse](../windows/coclass.md),  [interfaccia dispatch](../windows/dispinterface.md)e  [idl\_module](../windows/idl-module.md) gli attributi vengono inserite nel blocco di libreria.  
  
## Esempio  
 Nel codice seguente, un'interfaccia personalizzata viene inserito nel blocco di libreria.  
  
```  
// cpp_attr_ref_library_block.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLib")];  
[object, library_block, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface IMyInterface {  
   HRESULT f1();  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)