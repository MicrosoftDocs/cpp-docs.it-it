---
title: "&#39;&lt;nometipoderivato&gt;&#39; non pu&#242; ereditare da &lt;tipo&gt; &#39;&lt;nometipobasecreato&gt;&#39; perch&#233; espande l&#39;accesso di tipo &#39;&lt;nometipointerno&gt;&#39; a &lt;regione&gt; &#39;&lt;nomeregione&gt;&#39; | Microsoft Docs"
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
  - "vbc30921"
  - "BC30921"
helpviewer_keywords: 
  - "BC30921"
ms.assetid: b0dd971a-80e2-4d37-925b-854d17411546
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipoderivato&gt;&#39; non pu&#242; ereditare da &lt;tipo&gt; &#39;&lt;nometipobasecreato&gt;&#39; perch&#233; espande l&#39;accesso di tipo &#39;&lt;nometipointerno&gt;&#39; a &lt;regione&gt; &#39;&lt;nomeregione&gt;&#39;
Una classe o un'interfaccia derivata prova a espandere il livello di accesso di un tipo interno usandolo come argomento di tipo per una classe o un'interfaccia base.  
  
 Il codice seguente può generare questo errore.  
  
```  
Public Class containingClass Public Class baseClass(Of t) End Class Friend Class derivedClass Inherits baseClass(Of internalStructure) End Class Private Structure internalStructure Dim firstMember As Integer End Structure End Class  
```  
  
 Al codice esterno a `containingClass` non è consentito l'accesso a `internalStructure`. Tuttavia, è possibile accedere a `derivedClass` da qualsiasi codice nello stesso assembly. Per questo motivo `derivedClass` non può ereditare `baseClass` se usa `internalStructure` come argomento di tipo, perché ciò potrebbe esporre `internalStructure` in tutta la regione del codice di definizione.  
  
 **ID errore:** BC30921  
  
### Per correggere l'errore  
  
-   Regolare i livelli di accesso delle classi o delle interfacce in modo che il tipo derivato non espanda il livello di accesso del tipo interno.  
  
     \-oppure\-  
  
-   Se non è possibile regolare i livelli di accesso, non usare il tipo interno come argomento di tipo durante la costruzione della classe o dell'interfaccia base.  
  
## Vedere anche  
 [Inherits Statement](../Topic/Inherits%20Statement.md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)