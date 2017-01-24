---
title: "switch_type | Microsoft Docs"
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
  - "vc-attr.switch_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "switch_type attribute"
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# switch_type
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Identifica il tipo della variabile utilizzata come un'unione discriminante.  
  
## Sintassi  
  
```  
  
[switch_type(  
type  
}]  
  
```  
  
#### Parametri  
 `type`  
 Il tipo di opzione, può essere un numero intero, un carattere, un valore booleano, o un tipo di enumerazione.  
  
## Note  
 **switch\_type** L'attributo di C\+\+ ha la stessa funzionalità di  [switch\_type](http://msdn.microsoft.com/library/windows/desktop/aa367276) Attributo MIDL.  
  
 Gli attributi C\+\+ non supportano [unioni incapsulati](http://msdn.microsoft.com/library/windows/desktop/aa366811).  [Unioni di Nonencapsulated](http://msdn.microsoft.com/library/windows/desktop/aa367119) essere supportato solo nel formato seguente:  
  
```  
// cpp_attr_ref_switch_type.cpp  
// compile with: /LD  
#include <windows.h>  
[module(name="MyLibrary")];  
[ export ]  
struct SizedValue2 {  
   [switch_type("char"), switch_is(kind)] union {  
      [case(1), string]  
         wchar_t* wval;  
      [default, string]  
         char* val;  
   };  
   char kind;  
};  
```  
  
## Esempio  
 vedere [evento](../windows/case-cpp.md) esempio per un esempio di utilizzo  **switch\_type**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`typedef`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [export](../windows/export.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)