---
title: "&lt;paramref&gt; (Visual C++) | Microsoft Docs"
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
  - "paramref"
  - "<paramref>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<paramref> C++ (tag XML)"
  - "paramref C++ (tag XML)"
ms.assetid: c5730dc2-7159-421f-b2d5-bb971e307122
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;paramref&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag di \<paramref\> fornisce una modalità per indicare che la parola è un parametro.  Il file XML può essere elaborato per formattare il parametro in alcune modalità distinte.  
  
## Sintassi  
  
```  
<paramref name="name"/>  
```  
  
#### Parametri  
 `name`  
 Nome del parametro a cui fare riferimento.  Racchiuderlo tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `name`.  
  
## Note  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
## Esempio  
  
```  
// xml_paramref_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_paramref_tag.dll  
/// Text for class MyClass.  
public ref class MyClass {  
   /// <summary>MyMethod is a method in the MyClass class.  
   /// The <paramref name="Int1"/> parameter takes a number.  
   /// </summary>  
   void MyMethod(int Int1) {}  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)