---
title: "import | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.import"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "import attribute"
ms.assetid: ebf07cae-39fb-4047-8b57-54af0a9a83de
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# import
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica un altro IDL, .odl, o file di intestazione contenente le definizioni cui si desidera fare riferimento da IDL principale.  
  
## Sintassi  
  
```  
  
      [ import(  
   idl_file  
) ];  
```  
  
#### Parametri  
 `idl_file`  
 Il nome di un file IDL che si desidera importato nella libreria dei tipi di progetto corrente.  
  
## Note  
 **importazione** l'attributo di C\+\+ causa  `#import` istruzione da inserire in  `import "docobj.idl"` istruzione nel file generato con estensione .idl.  **importazione** l'attributo presenta la stessa funzionalità di  [importazione](http://msdn.microsoft.com/library/windows/desktop/aa367047) Attributo MIDL.  
  
 **importazione** l'attributo consente solo il file specificato nel file IDL che verrà generato dal progetto;   **importazione** l'attributo non consente di chiamare i costrutti nel file specificato dal codice sorgente del progetto.  Per chiamare i costrutti nel file specificato dal codice sorgente del progetto, utilizzare [\#import](../preprocessor/hash-import-directive-cpp.md) e  `embedded_idl` l'attributo o è possibile includere il file h per  `idl_file`, se un file h esiste.  
  
## Esempio  
 Il codice seguente:  
  
```  
// cpp_attr_ref_import.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[import(import.idl)];  
```  
  
 scrive il codice seguente nel file generato con estensione .idl:  
  
```  
import "docobj.idl";  
import "import.idl";  
  
[ uuid(EED3644C-8488-3ECD-BA97-147DB3CDB499), version(1.0) ]  
library MyLib {  
   importlib("stdole2.tlb");  
   importlib("olepro32.dll");  
...  
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
 [importidl](../windows/importidl.md)   
 [importlib](../windows/importlib.md)   
 [include](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)