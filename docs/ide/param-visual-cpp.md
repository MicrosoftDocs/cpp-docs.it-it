---
title: "&lt;param&gt; (Visual C++) | Microsoft Docs"
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
  - "param"
  - "<param>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<param> C++ (tag XML)"
  - "param C++ (tag XML)"
ms.assetid: 66c1a1c3-4f98-4bcf-8c7d-9a40308982fb
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;param&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<param\> viene utilizzato nel commento per una dichiarazione di metodo per descrivere uno dei parametri del metodo.  
  
## Sintassi  
  
```  
<param name='name'>description</param>  
```  
  
#### Parametri  
 `name`  
 Nome di un parametro di metodo.  Racchiuderlo tra virgolette singole o doppie.  Il compilatore genera un avviso se non trova `name`.  
  
 `description`  
 Descrizione del parametro.  
  
## Note  
 Il testo per il tag di \<param\> visualizzati in IntelliSense, [Visualizzatore oggetti](http://msdn.microsoft.com/it-it/f89acfc5-1152-413d-9f56-3dc16e3f0470)e nel report Web sui commenti del codice.  
  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
## Esempio  
  
```  
// xml_param_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_param_tag.dll  
/// Text for class MyClass.  
public ref class MyClass {  
   /// <param name="Int1">Used to indicate status.</param>  
   void MyMethod(int Int1) {  
   }  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)