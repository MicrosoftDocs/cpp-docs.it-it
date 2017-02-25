---
title: "usesgetlasterror | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.usesgetlasterror"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "usesgetlasterror attribute"
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# usesgetlasterror
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica al chiamante che se c " è un errore durante la chiamata alla funzione, il chiamante quindi possibile chiamare `GetLastError` per recuperare il codice di errore.  
  
## Sintassi  
  
```  
  
[usesgetlasterror]  
  
```  
  
## Note  
 **usesgetlasterror** L'attributo di C\+\+ ha la stessa funzionalità di  [usesgetlasterror](http://msdn.microsoft.com/library/windows/desktop/aa367297) Attributo MIDL.  
  
## Esempio  
 vedere [idl\_module](../windows/idl-module.md) esempio per un esempio di utilizzo  **usesgetlasterror**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**modulo** attributo|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)