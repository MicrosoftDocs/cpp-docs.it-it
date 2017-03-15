---
title: "pragma | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.pragma"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pragma attribute"
ms.assetid: 3f90d023-b8b5-4007-8311-008bb72cbea1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# pragma
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera la stringa specificata nel file generato con estensione .idl senza l'utilizzo delle virgolette.  .  
  
## Sintassi  
  
```  
  
      [ pragma(  
   pragma_statement  
) ];  
```  
  
#### Parametri  
 *pragma\_statement*  
 Il pragma che si desidera immettere file generato con estensione .idl.  
  
## Note  
 **pragma** L'attributo di C\+\+ ha la stessa funzionalità di  [pragma](http://msdn.microsoft.com/library/windows/desktop/aa367143) Attributo MIDL.  
  
## Esempio  
  
```  
// cpp_attr_ref_pragma.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyLib")];  
[pragma(pack(4))];  
  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface A  
{  
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);  
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
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [pack](../preprocessor/pack.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)