---
title: "importlib | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.importlib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "importlib attribute"
ms.assetid: f129e459-b8d3-4aca-a0bc-ee53e18b62ed
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# importlib
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.  
  
## Sintassi  
  
```  
  
        [ importlib(  
   "tlb_file"  
) ];  
```  
  
#### Parametri  
 *tlb\_file*  
 Nome di un file tlb, racchiuso tra virgolette, che si desidera importare nella libreria dei tipi del progetto corrente.  
  
## Note  
 L'attributo C\+\+ **importlib** C\+\+ causa l'inserimento di un'istruzione `importlib` nel blocco di libreria del file idl generato.  L'attributo **importlib** C\+\+ ha la stessa funzionalità dell'attributo [importlib](http://msdn.microsoft.com/library/windows/desktop/aa367050) MIDL.  
  
## Esempio  
 Nel codice seguente viene illustrato un esempio di come usare **importlib**:  
  
```  
// cpp_attr_ref_importlib.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[importlib("importlib.tlb")];  
```  
  
## Requisiti  
  
### Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|None|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [import](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [include](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)