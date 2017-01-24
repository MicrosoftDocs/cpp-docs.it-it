---
title: "&lt;value&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "value"
  - "<value>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<value> C++ (tag XML)"
  - "value C++ (tag XML)"
ms.assetid: 0ba0a0d5-bcd7-4862-a169-83f2721ad80e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;value&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag di \<value\> consente di descrivere una proprietà e i metodi di accesso della proprietà.  Si noti che quando si aggiunge una proprietà con una creazione guidata codice nell'ambiente di sviluppo integrato di Visual Studio, viene aggiunto un tag di [\<summary\>](../ide/summary-visual-cpp.md) per la nuova proprietà.  È quindi necessario aggiungere manualmente un tag \<value\> per descrivere il valore rappresentato dalla proprietà.  
  
## Sintassi  
  
```  
<value>property-description</value>  
```  
  
#### Parametri  
 `property-description`  
 Descrizione della proprietà.  
  
## Note  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
## Esempio  
  
```  
// xml_value_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_value_tag.dll  
using namespace System;  
/// Text for class Employee.  
public ref class Employee {  
private:  
   String ^ name;  
   /// <value>Name accesses the value of the name data member</value>  
public:  
   property String ^ Name {  
      String ^ get() {  
         return name;   
      }  
      void set(String ^ i) {  
         name = i;  
      }  
   }  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)