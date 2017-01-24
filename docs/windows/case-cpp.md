---
title: "case (C++) | Microsoft Docs"
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
  - "vc-attr.case"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "case attribute"
ms.assetid: 6fb883c3-0526-4932-a901-b4564dcaeb7d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# case (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

utilizzato con [switch\_type](../windows/switch-type.md) attributo a l  **unione**.  
  
## Sintassi  
  
```  
  
      [ case(  
   value  
) ]  
```  
  
#### Parametri  
 *corrispondente*  
 Un valore di input possibile per il quale si desidera fornire l'elaborazione.  il tipo di **valore** può essere uno dei seguenti tipi:  
  
-   `int`  
  
-   `char`  
  
-   **boolean**  
  
-   `enum`  
  
 o un identificatore di tale tipo.  
  
## Note  
 **evento** L'attributo di C\+\+ ha la stessa funzionalità di  **evento** Attributo MIDL.  Questo attributo viene utilizzato solo con [switch\_type](../windows/switch-type.md) attributo.  
  
## Esempio  
 Il codice seguente viene illustrato un utilizzo di **evento** attributo:  
  
```  
// cpp_attr_ref_case.cpp  
// compile with: /LD  
#include <unknwn.h>  
[export]  
struct SizedValue2 {  
   [switch_type(char), switch_is(kind)] union {  
      [case(1), string]  
          wchar_t* wval;  
      [default, string]  
          char* val;  
   };  
    char kind;  
};  
[module(name="ATLFIRELib")];  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Membro di un oggetto **classe** o  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)