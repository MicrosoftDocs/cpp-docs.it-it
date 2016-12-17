---
title: "dispinterface | Microsoft Docs"
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
  - "vc-attr.dispinterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dispinterface (attributo)"
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# dispinterface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.  
  
## Sintassi  
  
```  
  
[dispinterface]  
  
```  
  
## Note  
 Quando l'attributo **dispinterface** di C\+\+ precede un'interfaccia, quest'ultima viene inserita nel blocco della libreria nel file con estensione idl generato.  
  
 A meno che non si specifichi una classe di base, un'interfaccia di dispatch deriverà da `IDispatch`. È necessario specificare un [id](../windows/id.md) per i membri di un'interfaccia di dispatch.  
  
 L'esempio d'uso relativo a [dispinterface](http://msdn.microsoft.com/library/windows/desktop/aa366802) nella documentazione di MIDL:  
  
```  
dispinterface helloPro   
   { interface hello; };   
```  
  
 non è valido per l'attributo **dispinterface**.  
  
## Esempio  
 Per informazioni su come usare **dispinterface**, vedere l'esempio relativo a [bindable](../windows/bindable.md).  
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|**dual**, **object**, **oleautomation**, `local`, **ms\_union**|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Attributes by Usage](../windows/attributes-by-usage.md)   
 [uuid](../windows/uuid-cpp-attributes.md)   
 [dual](../windows/dual.md)   
 [custom](../windows/custom-cpp.md)   
 [object](../windows/object-cpp.md)   
 [\_\_interface](../cpp/interface.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)