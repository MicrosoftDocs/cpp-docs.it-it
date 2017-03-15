---
title: "restricted | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.restricted"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "restricted attribute"
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# restricted
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica che un membro di un modulo, di un'interfaccia, o di un'interfaccia dispatch non può essere chiamato in modo arbitrario.  
  
## Sintassi  
  
```  
  
      [ restricted(  
   interfaces  
) ]  
```  
  
#### Parametri  
 `interfaces`  
 Una o più interfacce che non possono essere chiamate arbitrariamente su un oggetto COM.  Questo parametro è valido solo una volta applicato a una classe.  
  
## Note  
 **limitato** L'attributo di C\+\+ ha la stessa funzionalità di  [limitato](http://msdn.microsoft.com/library/windows/desktop/aa367157) Attributo MIDL.  
  
## Esempio  
 Nel codice seguente viene illustrato come utilizzare **limitato** attributo:  
  
```  
// cpp_attr_ref_restricted.cpp  
// compile with: /LD  
#include "windows.h"  
#include "unknwn.h"  
[module(name="MyLib")];  
  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface a  
{  
};  
  
[object, uuid("00000000-0000-0000-0000-000000000002")]  
__interface b  
{  
};  
  
[coclass, restricted(a,b), uuid("00000000-0000-0000-0000-000000000003")]  
class c : public a, public b  
{  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|metodo di interfaccia, `interface`,  **classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|**coclasse** \(se applicato a  **classe** o  `struct`\)|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)