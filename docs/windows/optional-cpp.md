---
title: "optional (C++) | Microsoft Docs"
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
  - "vc-attr.optional"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "optional attribute"
ms.assetid: 86656a66-8e11-4589-8e30-9b0f34eeed03
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# optional (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

specifica un parametro facoltativo per una funzione membro.  
  
## Sintassi  
  
```  
  
[optional]  
  
```  
  
## Note  
 **facoltativo** L'attributo di C\+\+ ha la stessa funzionalità di  [facoltativo](http://msdn.microsoft.com/library/windows/desktop/aa367132) Attributo MIDL.  
  
## Esempio  
 Nel codice seguente viene illustrato come **facoltativo** può essere utilizzato:  
  
```  
// cpp_attr_ref_optional.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl : IDispatch  
{  
   [id(1)] long procedure ([in, optional] VARIANT i);  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|parametro di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)