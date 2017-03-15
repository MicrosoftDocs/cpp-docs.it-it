---
title: "&lt;see&gt; (Visual C++) | Microsoft Docs"
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
  - "<see>"
  - "see"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<see> C++ (tag XML)"
  - "see C++ (tag XML)"
ms.assetid: 20ef66f4-b278-45cf-8613-63919edf5720
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;see&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<see\> consente di specificare un collegamento nel testo.  L'utilizzo [\<seealso\>](../ide/seealso-visual-cpp.md) indicare il testo che si desidera visualizzare in un vedere anche sezioni.  
  
## Sintassi  
  
```  
<see cref="member"/>  
```  
  
#### Parametri  
 `member`  
 Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente.  Racchiuderlo tra virgolette singole o doppie.  
  
 Il compilatore controlla che l'elemento di codice specificato esiste e risolve `member` al nome dell'elemento nell'output XML.  Il compilatore genera un avviso se non trova `member`.  
  
## Note  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
 Vedere [\<summary\>](../ide/summary-visual-cpp.md) per un esempio di utilizzo \<see\>.  
  
 Il compilatore di Visual C\+\+ tenta di risolvere i riferimenti cref in una sessione con i commenti della documentazione.  Pertanto, se si utilizza la ricerca di C\+\+ regole, un simbolo non viene trovato che il riferimento verrà contrassegnato come non risolto.  Per ulteriori informazioni, vedere [\<seealso\>](../ide/seealso-visual-cpp.md).  
  
## Esempio  
 Illustrato come impostare il riferimento cref a un tipo generico, tali di esempio che, il compilatore risolverà il riferimento.  
  
```  
// xml_see_cref_example.cpp  
// compile with: /LD /clr /doc  
// the following cref shows how to specify the reference, such that,  
// the compiler will resolve the reference  
/// <see cref="C{T}">  
/// </see>  
ref class A {};  
  
// the following cref shows another way to specify the reference,   
// such that, the compiler will resolve the reference  
/// <see cref="C < T >"/>  
  
// the following cref shows how to hard-code the reference  
/// <see cref="T:C`1">  
/// </see>  
ref class B {};  
  
/// <see cref="A">  
/// </see>  
/// <typeparam name="T"></typeparam>  
generic<class T>  
ref class C {};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)