---
title: "include (C++) | Microsoft Docs"
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
  - "vc-attr.include"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "include attribute"
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# include (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica uno o più file di intestazione da includere nel file generato con estensione .idl.  
  
## Sintassi  
  
```  
  
      [ include(  
   header_file  
) ];  
```  
  
#### Parametri  
 *header\_file*  
 Il nome di un file che si desidera sia incluso nel file generato con estensione .idl.  
  
## Note  
 **importare** l'attributo di C\+\+ causa  `#include` istruzione da inserire in  `import "docobj.idl"` istruzione nel file generato con estensione .idl.  
  
 **importare** L'attributo di C\+\+ ha la stessa funzionalità di  [importare](http://msdn.microsoft.com/library/windows/desktop/aa367052) Attributo MIDL.  
  
## Esempio  
 Il codice seguente viene illustrato un esempio di come utilizzare **importare**.  Per questo esempio, il file include.h contiene una sola istruzione \#include.  
  
```  
// cpp_attr_ref_include.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[include(cpp_attr_ref_include.h)];  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [import](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [includelib](../windows/includelib-cpp.md)   
 [importlib](../windows/importlib.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)