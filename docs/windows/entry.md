---
title: "entry | Microsoft Docs"
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
  - "vc-attr.entry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "entry attribute"
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# entry
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica una funzione o una costante esportata in un modulo identificando il punto di ingresso nella DLL.  
  
## Sintassi  
  
```  
  
      [ entry(  
   id  
) ]  
```  
  
#### Parametri  
 `id`  
 ID del punto di ingresso.  
  
## Note  
 **voce** L'attributo di C\+\+ ha la stessa funzionalità di  [voce](http://msdn.microsoft.com/library/windows/desktop/aa366815) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [idl\_module](../windows/idl-module.md) per un esempio di utilizzo  **voce**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Attributo `idl_module`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)