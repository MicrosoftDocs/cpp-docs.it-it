---
title: "export | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.export"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "export attribute"
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# export
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Determina una struttura di dati venga inserita nel file IDL.  
  
## Sintassi  
  
```  
  
[export]  
  
```  
  
## Note  
 **esportazione** Cause dell'attributo di C\+\+ una struttura di dati da inserire nel file IDL e quindi da essere disponibile nella libreria dei tipi in un formato binario\-compatibile che lo rende disponibile disponibile per l'utilizzo con qualsiasi linguaggio.  
  
 Non è possibile applicare **esportazione** attributo a una classe anche se la classe dispone solo di membri pubblici \(l'equivalente di un oggetto  `struct`\).  
  
 Se si esporta senza nome `enum`s o  `struct`oggetti, verranno nomi specificati che iniziano con  **\_\_unnamed**x, dove x è un numero sequenziale.  
  
 I typedef validi per l'esportazione sono tipi di base, strutture, unioni, enumerazioni, o identificatori di tipo.  vedere [typedef](http://msdn.microsoft.com/library/windows/desktop/aa367287) per ulteriori informazioni.  
  
## Esempio  
 Nel codice seguente viene illustrato come utilizzare **esportazione** attributo:  
  
```  
// cpp_attr_ref_export.cpp  
// compile with: /LD  
[module(name="MyLibrary")];  
  
[export]  
struct MyStruct {  
   int i;  
};  
```  
  
## Requisiti  
  
### contesto di attributo  
  
|||  
|-|-|  
|**Si applica a**|**unione**,  `typedef`,  `enum`,  `struct`, o  `interface`|  
|**ripetibile**|No|  
|**attributi obbligatori**|Nessuno|  
|**attributi non validi**|Nessuno|  
  
 Per ulteriori informazioni, vedere [Associare ai contesti](../windows/attribute-contexts.md).  
  
## Vedere anche  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Attributes Samples](http://msdn.microsoft.com/it-it/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)