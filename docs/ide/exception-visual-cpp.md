---
title: "&lt;exception&gt; (Visual C++) | Microsoft Docs"
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
  - "exception"
  - "<exception>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<exception> C++ (tag XML)"
  - "exception C++ (tag XML)"
ms.assetid: 24451e79-9b89-4b77-98fb-702c6516b818
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;exception&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<exception\> consente di specificare le eccezioni che possono essere generate  Questo tag viene applicato a una definizione di metodo.  
  
## Sintassi  
  
```  
<exception cref="member">description</exception>  
```  
  
#### Parametri  
 `member`  
 Riferimento a un'eccezione disponibile dall'ambiente di compilazione corrente.  Utilizzo di ricerca del nome regole, il compilatore che l'eccezione specificata esista e converte `member` al nome canonico nell'output XML.  Il compilatore genera un avviso se non trova `member`.  
  
 Racchiuderlo tra virgolette singole o doppie.  
  
 Per informazioni sulla creazione di un riferimento cref a un tipo generico, vedere [\<see\>](../ide/see-visual-cpp.md).  
  
 `description`  
 Descrizione.  
  
## Note  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
 Il compilatore di Visual C\+\+ tenta di risolvere i riferimenti cref in una sessione con i commenti della documentazione.  Pertanto, se si utilizza la ricerca di C\+\+ regole, un simbolo non viene trovato che il riferimento verrà contrassegnato come non risolto.  Per ulteriori informazioni, vedere [\<seealso\>](../ide/seealso-visual-cpp.md).  
  
## Esempio  
  
```  
// xml_exception_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_exception_tag.dll  
using namespace System;  
  
/// Text for class EClass.  
public ref class EClass : public Exception {  
   // class definition ...  
};  
  
/// <exception cref="System.Exception">Thrown when... .</exception>  
public ref class TestClass {  
   void Test() {  
      try {  
      }  
      catch(EClass^) {  
      }  
   }  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)