---
title: "v1_enum | Microsoft Docs"
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
  - "vc-attr.v1_enum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "v1_enum attribute"
ms.assetid: 2fe92d92-81b9-4a1c-b6ce-437d0eb770ca
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# v1_enum
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ordina che il tipo enumerato specificato sia trasmesse come entità a 32 bit anziché il valore predefinito di 16 bit.  
  
## Sintassi  
  
```  
  
[v1_enum]  
  
```  
  
## Note  
 **v1\_enum** L'attributo di C\+\+ ha la stessa funzionalità di  [v1\_enum](http://msdn.microsoft.com/library/windows/desktop/aa367303) Attributo MIDL.  
  
## Esempio  
 Il codice seguente viene illustrato un utilizzo di **v1\_enum**:  
  
```  
// cpp_attr_ref_v1_enum.cpp  
// compile with: /LD  
[module(name="MyLibrary")];  
  
[export, v1_enum]   
enum eList {   
   e1 = 1,   
   e2 = 2  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|tipo enumerato|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)