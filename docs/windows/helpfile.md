---
title: "helpfile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.helpfile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "helpfile attribute"
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# helpfile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Imposta il nome del file della Guida per una libreria dei tipi.  
  
## Sintassi  
  
```  
  
      [ helpfile(  
   "filename"  
) ]  
```  
  
#### Parametri  
 *nomefile*  
 Il nome del file contenente gli argomenti della Guida.  
  
## Note  
 **file di** L'attributo di C\+\+ ha la stessa funzionalità di  [file di](http://msdn.microsoft.com/library/windows/desktop/aa366853) Attributo MIDL.  
  
## Esempio  
 Vedere l'esempio relativo a [modulo](../windows/module-cpp.md) per un esempio di utilizzo  **file di**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|`interface`,  `typedef`,  **classe**, metodo, proprietà|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Interface Attributes](../windows/interface-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [helpcontext](../windows/helpcontext.md)   
 [helpstring](../windows/helpstring.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)