---
title: "local (C++) | Microsoft Docs"
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
  - "vc-attr.local"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "local attribute"
ms.assetid: 35cdd668-bd8e-492a-b7b8-263e7b662437
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# local (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una volta utilizzato nell'intestazione dell'interfaccia, consente di utilizzare il compilatore MIDL come generatore di intestazione.  Quando viene utilizzato in una singola funzione, definisce una routine locale per il quale non stub viene generato.  
  
## Sintassi  
  
```  
  
[local]  
  
```  
  
## Note  
 `local` L'attributo di C\+\+ ha la stessa funzionalità di  [locale](http://msdn.microsoft.com/library/windows/desktop/aa367071) Attributo MIDL.  
  
## Esempio  
 vedere [call\_as](../windows/call-as.md) per un esempio di utilizzo  `local`.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`, un metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|**dispinterface**|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [call\_as](../windows/call-as.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)