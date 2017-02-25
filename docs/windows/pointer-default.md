---
title: "pointer_default | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.pointer_default"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointer_default attribute"
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# pointer_default
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica l'attributo predefinito del puntatore per tutti i puntatori, ad eccezione dei puntatori di livello superiore che vengono visualizzati gli elenchi di parametri.  
  
## Sintassi  
  
```  
  
      [ pointer_default(  
   value  
) ]  
```  
  
#### Parametri  
 *corrispondente*  
 un valore che descrive il tipo di puntatore: **stampante**,  `ref`, o  **univoco**.  
  
## Note  
 **pointer\_default** L'attributo di C\+\+ ha la stessa funzionalità di  [pointer\_default](http://msdn.microsoft.com/library/windows/desktop/aa367141) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [valore predefinito](../windows/defaultvalue.md) per un esempio di utilizzo  **pointer\_default**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)