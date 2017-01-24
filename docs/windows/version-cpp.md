---
title: "version (C++) | Microsoft Docs"
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
  - "vc-attr.version"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "version attribute"
  - "version information, version attribute"
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# version (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Identifica una versione specifica tra più versioni di una classe.  
  
## Sintassi  
  
```  
  
      [ version(  
   "version"  
) ]  
```  
  
#### Parametri  
 *versione*  
 Il numero di versione della coclasse.  Se non specificato, 1,0 verranno inseriti nel file IDL.  
  
## Note  
 **versione** L'attributo di C\+\+ ha la stessa funzionalità di  [versione](http://msdn.microsoft.com/library/windows/desktop/aa367306) L'attributo MIDL e viene passato al file generato con estensione .idl.  
  
## Esempio  
 vedere [associabile](../windows/bindable.md) esempio per un esempio di utilizzo  **versione**.  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**classe**,  `struct`|  
|**ripetibile**|No|  
|**attributi obbligatori**|**coclasse**|  
|**attributi non validi**|Nessuno|  
  
 per ulteriori informazioni sui contesti di attributo, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)