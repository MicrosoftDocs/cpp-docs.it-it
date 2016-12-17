---
title: "propput | Microsoft Docs"
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
  - "vc-attr.propput"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "propput attribute"
ms.assetid: 1f84dda9-9cce-4e16-aaf0-b2c5219827f2
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# propput
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica un funzione di impostazione delle proprietà.  
  
## Sintassi  
  
```  
  
[propput]  
  
```  
  
## Note  
 L'attributo **propput** C\+\+ ha la stessa funzionalità dell'attributo [propput](http://msdn.microsoft.com/library/windows/desktop/aa367146) MIDL.  
  
## Esempio  
 Per un esempio dell'uso di **propput**, vedere l'esempio per [bindable](../windows/bindable.md).  
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Metodo|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|None|  
|**Attributi non validi**|**propget**, **propputref**|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [propget](../windows/propget.md)   
 [propputref](../windows/propputref.md)