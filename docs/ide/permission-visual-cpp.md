---
title: "&lt;permission&gt; (Visual C++) | Microsoft Docs"
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
  - "permission"
  - "<permission>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "<permission> C++ (tag XML)"
  - "permission C++ (tag XML)"
ms.assetid: 537ee2bc-95bd-48e4-9ce6-3420c3da87f4
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# &lt;permission&gt; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tag \<permission\> consente di documentare l'accesso a un membro.  <xref:System.Security.PermissionSet> consente di specificare l'accesso a un membro.  
  
## Sintassi  
  
```  
<permission cref="member">description</permission>  
```  
  
#### Parametri  
 `member`  
 Riferimento a un membro o a un campo disponibile per essere chiamato dall'ambiente di compilazione corrente.  Il compilatore verifica che l'elemento di codice fornito esista e converte `member` nel nome canonico dell'elemento nell'XML di output.  Racchiuderlo tra virgolette singole o doppie.  
  
 Il compilatore genera un avviso se non trova `member`.  
  
 Per informazioni sulla creazione di un riferimento cref a un tipo generico, vedere [\<see\>](../ide/see-visual-cpp.md).  
  
 `description`  
 Descrizione dell'accesso al membro.  
  
## Note  
 Eseguire la compilazione con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) per elaborare in un file i commenti per la creazione della documentazione.  
  
 Il compilatore di Visual C\+\+ tenta di risolvere i riferimenti cref in una sessione con i commenti della documentazione.  Pertanto, se si utilizza la ricerca di C\+\+ regole, un simbolo non viene trovato che il riferimento verrà contrassegnato come non risolto.  Per ulteriori informazioni, vedere [\<seealso\>](../ide/seealso-visual-cpp.md).  
  
## Esempio  
  
```  
// xml_permission_tag.cpp  
// compile with: /clr /doc /LD  
// post-build command: xdcmake xml_permission_tag.dll  
using namespace System;  
/// Text for class TestClass.  
public ref class TestClass {  
   /// <permission cref="System::Security::PermissionSet">Everyone can access this method.</permission>  
   void Test() {}  
};  
```  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)