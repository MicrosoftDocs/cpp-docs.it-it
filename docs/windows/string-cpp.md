---
title: "string (C++) | Microsoft Docs"
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
  - "vc-attr.string"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "string attribute"
ms.assetid: ddde900a-2e99-4fcd-86e8-57e1bdba7c93
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# string (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

indica che l'unidimensionale `char`,  `wchar_t`,  **byte** \(o equivalente\) la matrice o un puntatore a una matrice deve essere considerato come stringa.  
  
## Sintassi  
  
```  
  
[string]  
  
```  
  
## Note  
 **stringa** L'attributo di C\+\+ ha la stessa funzionalità di  [stringa](http://msdn.microsoft.com/library/windows/desktop/aa367270) Attributo MIDL.  
  
## Esempio  
 Nel codice seguente viene illustrato come utilizzare **stringa** in un'interfaccia e un typedef:  
  
```  
// cpp_attr_ref_string.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="ATLFIRELib")];  
[export, string] typedef char a[21];  
[dispinterface, restricted, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl  
{  
   [id(1)] HRESULT Method3([in, string] char *pC);  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Una matrice o un puntatore a una matrice, parametro di interfaccia, metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Array Attributes](../windows/array-attributes.md)   
 [export](../windows/export.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)