---
title: "&lt;seealso&gt; (Visual C++) | Microsoft Docs"
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
  - "<seealso>"
  - "seealso"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<seealso> C++ (tag XML)"
  - "seealso C++ (tag XML)"
ms.assetid: cb33d100-9c50-4485-8d0c-573429eff155
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;seealso&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<seealso\> consente di specificare il testo che si desidera visualizzare in una sezione Vedere anche.  Utilizzare [\<see\>](../ide/see-visual-cpp.md) per specificare un collegamento nel testo.  
  
## Sintassi  
  
```  
<seealso cref="member"/>  
```  
  
#### Parametri  
 `member`  
 Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente.  Racchiuderlo tra virgolette singole o doppie.  
  
 Il compilatore controlla che l'elemento di codice specificato esiste e risolve `member` al nome dell'elemento nell'output XML.  Il compilatore genera un avviso se non trova `member`.  
  
 Per informazioni sulla creazione di un riferimento cref a un tipo generico, vedere [\<see\>](../ide/see-visual-cpp.md).  
  
## Note  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
 Vedere [\<summary\>](../ide/summary-visual-cpp.md) per un esempio di utilizzo \<seealso\>.  
  
 Il compilatore di Visual C\+\+ tenta di risolvere i riferimenti cref in una sessione con i commenti della documentazione.  Pertanto, se si utilizza la ricerca di C\+\+ regole, un simbolo non viene trovato che il riferimento verrà contrassegnato come non risolto.  
  
## Esempio  
 Nell'esempio seguente, un simbolo non risolto viene fatto riferimento in un cref.  Il commento XML per il cref a B::Test verrà `<seealso cref="!:B::Test" />`, mentre il riferimento a A::Test è `<seealso cref="M:A.Test" />`corretto.  
  
```  
// xml_seealso_tag.cpp  
// compile with: /LD /clr /doc  
// post-build command: xdcmake xml_seealso_tag.dll  
  
/// Text for class A.  
public ref struct A {  
   /// <summary><seealso cref="A::Test"/>  
   /// <seealso cref="B::Test"/>  
   /// </summary>  
   void MyMethod(int Int1) {}  
  
   /// text  
   void Test() {}  
};  
  
/// Text for class B.  
public ref struct B {  
   void Test() {}  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)