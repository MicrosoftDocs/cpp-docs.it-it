---
title: "out (C++) | Microsoft Docs"
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
  - "vc-attr.out"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "out (attributo)"
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# out (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante \(dal server al client\).  
  
## Sintassi  
  
```  
  
[out]  
  
```  
  
## Note  
 L'attributo **out** di C\+\+ ha la stessa funzionalità dell'attributo [out](http://msdn.microsoft.com/library/windows/desktop/aa367136) di MIDL.  
  
## Esempio  
 Per un'illustrazione dell'uso di **out**, vedere l'esempio per [bindable](../windows/bindable.md).  
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Parametro interfaccia|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuna|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [defaultvalue](../windows/defaultvalue.md)   
 [id](../windows/id.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)