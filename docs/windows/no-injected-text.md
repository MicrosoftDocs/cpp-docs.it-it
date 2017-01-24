---
title: "no_injected_text | Microsoft Docs"
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
  - "vc-attr.no_injected_text"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "no_injected_text attribute"
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# no_injected_text
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Impedisce il compilatore di inserire il codice riportato di seguito all'utilizzo dell'attributo.  
  
## Sintassi  
  
```  
  
      [ no_injected_text(  
   boolean  
) ];  
```  
  
#### Parametri  
 `boolean`\(facoltativo\)  
 **true** se non si desidera codice inserito,  **false** per consentire codice da inserire.  **true** è l'impostazione predefinita.  
  
## Note  
 La maggior parte di utilizzo comune di **no\_injected\_text** L'attributo C\+\+ è da  [\/Fx](../build/reference/fx-merge-injected-code.md) opzione del compilatore, che inserisce  **no\_injected\_text** attributo nel file di .mrg.  
  
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
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)