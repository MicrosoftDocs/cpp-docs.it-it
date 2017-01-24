---
title: "&#39;&lt;nometipoderivato&gt;&#39; non pu&#242; ereditare da &lt;tipo&gt; &#39;&lt;nometipobasecreato&gt;&#39; perch&#233; espande l&#39;accesso di tipo &#39;&lt;nometipointerno&gt;&#39; all&#39;esterno dell&#39;assembly | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BC30922"
  - "vbc30922"
helpviewer_keywords: 
  - "BC30922"
ms.assetid: 81909654-7e67-4b89-81a3-25ae57f678f7
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipoderivato&gt;&#39; non pu&#242; ereditare da &lt;tipo&gt; &#39;&lt;nometipobasecreato&gt;&#39; perch&#233; espande l&#39;accesso di tipo &#39;&lt;nometipointerno&gt;&#39; all&#39;esterno dell&#39;assembly
Una classe o un'interfaccia derivata prova a espandere il livello di accesso di un tipo ristretto usandolo come argomento di tipo per una classe o un'interfaccia base.  
  
 Il codice seguente può generare questo errore.  
  
```  
Public Class baseClass(Of t)  
End Class  
Public Class derivedClass  
    Inherits baseClass(Of restrictedStructure)  
End Class  
Friend Structure restrictedStructure  
    Dim firstMember As Integer  
End Structure  
```  
  
 Il codice all'esterno dell'assembly non può accedere a `restrictedStructure`. L'accesso all'oggetto `derivedClass`, tuttavia, è consentito a qualsiasi codice che può farvi riferimento. Di conseguenza, `derivedClass` non può ereditare da `baseClass` se usa `restrictedStructure` come argomento di tipo perché altrimenti `restrictedStructure` verrebbe esposta al codice in qualsiasi assembly.  
  
 **ID errore:** BC30922  
  
### Per correggere l'errore  
  
-   Modificare i livelli di accesso delle classi o delle interfacce in modo che il tipo derivato non espanda il livello di accesso del tipo limitato.  
  
     \-oppure\-  
  
-   Se non è possibile modificare i livelli di accesso, non usare il tipo limitato come argomento di tipo quando si costruisce la classe o l'interfaccia base.  
  
## Vedere anche  
 [Inherits Statement](../Topic/Inherits%20Statement.md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)