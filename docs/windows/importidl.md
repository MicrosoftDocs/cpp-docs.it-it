---
title: "importidl | Microsoft Docs"
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
  - "vc-attr.importidl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "importidl attribute"
ms.assetid: 4b0a4b55-6c57-4e6e-bc7b-a12cc8063941
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# importidl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Inserisce il file specificato con estensione .idl nel file generato con estensione .idl.  
  
## Sintassi  
  
```  
  
      [ importidl(  
   idl_file  
) ];  
```  
  
#### Parametri  
 `idl_file`  
 Identifica il nome del file IDL che si desidera unire al file IDL che verrà generato per l'applicazione.  
  
## Note  
 **importidl** L'attributo di C\+\+ posiziona la sezione all'esterno del blocco di libreria \(in  `idl_file`nel file generato IDL del programma e nella sezione di libreria \(in  `idl_file`\) nella sezione della libreria del file generato IDL del programma.  
  
 È possibile utilizzare **importidl**, ad esempio, se si desidera utilizzare un file manualmente codificato IDL con il file generato con estensione .idl.  
  
## Esempio  
  
```  
// cpp_attr_ref_importidl.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[importidl("import.idl")];  
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
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Stand\-Alone Attributes](../windows/stand-alone-attributes.md)   
 [import](../windows/import.md)   
 [importlib](../windows/importlib.md)   
 [include](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)