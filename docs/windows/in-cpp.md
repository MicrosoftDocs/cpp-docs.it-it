---
title: "in (C++) | Microsoft Docs"
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
  - "vc-attr.in"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "in attribute"
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# in (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.  
  
## Sintassi  
  
```  
  
[in]  
  
```  
  
## Note  
 **in** L'attributo di C\+\+ ha la stessa funzionalità di  [in](http://msdn.microsoft.com/library/windows/desktop/aa367051) Attributo MIDL.  
  
## Esempio  
 vedere [associabile](../windows/bindable.md) per un esempio di utilizzo  **in**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|parametro di interfaccia, metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|**retval**|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [defaultvalue](../windows/defaultvalue.md)   
 [id](../windows/id.md)   
 [out](../windows/out-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)