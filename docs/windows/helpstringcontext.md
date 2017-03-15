---
title: "helpstringcontext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.helpstringcontext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "helpstringcontext attribute [C++]"
ms.assetid: d4cd135e-d91c-4aa3-9353-8aeb096f52cf
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# helpstringcontext
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica l'ID di un argomento della Guida in un file CHM o di .hlp.  
  
## Sintassi  
  
```  
  
      [ helpstringcontext(  
   contextID  
) ]  
```  
  
#### Parametri  
 `contextID`  
 Un identificatore di contesto della guida a 32 bit nel file della Guida.  
  
## Note  
 **helpstringcontext** L'attributo di C\+\+ ha la stessa funzionalità di  [helpstringcontext](http://msdn.microsoft.com/library/windows/desktop/aa366858) Attributi ODL.  
  
## Esempio  
  
```  
// cpp_attr_ref_helpstringcontext.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[   object,   
   helpstring("help string"),   
   helpstringcontext(1),   
   uuid="11111111-1111-1111-1111-111111111111"  
]  
__interface IMyI   
{  
   HRESULT xx();  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `interface`, un metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [modulo](../windows/module-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)