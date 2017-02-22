---
title: "ms_union | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.ms_union"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ms_union attribute"
ms.assetid: bb548689-6962-457e-af56-8ffdf68987eb
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# ms_union
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Controllare l'allineamento della rappresentazione dei dati della rete di unioni nonencapsulated.  
  
## Sintassi  
  
```  
  
[ms_union]  
  
```  
  
## Note  
 **ms\_union** L'attributo di C\+\+ ha la stessa funzionalità di  [ms\_union](http://msdn.microsoft.com/library/windows/desktop/aa367100) Attributo MIDL.  
  
## Esempio  
 Il codice riportato di seguito viene illustrata la posizione di **ms\_union**:  
  
```  
// cpp_attr_ref_ms_union.cpp  
// compile with: /LD  
#include <unknwn.h>  
[object, ms_union, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl {  
   HRESULT DisplayString([in, string] char * p1);  
};  
  
[export, switch_type(short)] union _WILLIE_UNION_TYPE  {  
   [case(24)]  
      float fMays;  
   [case(25)]  
      double dMcCovey;  
   [default]  
      int x;  
 };  
  
[public] typedef _WILLIE_UNION_TYPE WILLIE_UNION_TYPE;  
  
[module(name="ATLFIRELib")];  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Unioni di Nonencapsulated|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|**dispinterface**|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)