---
title: "id | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.id"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "id attribute"
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# id
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica un oggetto `dispid` parametro di una funzione membro \(una proprietà o un metodo, in un'interfaccia o dispinterface\).  
  
## Sintassi  
  
```  
  
      [ id(  
   dispid  
) ]  
```  
  
#### Parametri  
 `dispid`  
 l'ID di invio per il metodo di interfaccia.  
  
## Note  
 **identificazione** L'attributo di C\+\+ ha la stessa funzionalità di  [identificazione](http://msdn.microsoft.com/library/windows/desktop/aa367040) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [associabile](../windows/bindable.md) per un esempio di utilizzo  **identificazione**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|metodo di interfaccia|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Data Member Attributes](../windows/data-member-attributes.md)   
 [defaultvalue](../windows/defaultvalue.md)   
 [in](../windows/in-cpp.md)   
 [out](../windows/out-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)