---
title: "Il vincolo &#39;&lt;vincolo1&gt;&#39; &#232; in conflitto con il vincolo &#39;&lt;vincolo2&gt;&#39; gi&#224; specificato per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; | Microsoft Docs"
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
  - "vbc32119"
  - "bc32119"
helpviewer_keywords: 
  - "BC32119"
ms.assetid: 30e6778d-5c2b-4f2d-a136-4e66fa9fbe4d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il vincolo &#39;&lt;vincolo1&gt;&#39; &#232; in conflitto con il vincolo &#39;&lt;vincolo2&gt;&#39; gi&#224; specificato per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39;
Un tipo generico è dichiarato con vincoli in conflitto in un parametro di tipo.  
  
 L'istruzione seguente può generare questo errore.  
  
 `Public Class testClass(Of t As {Structure, Class })`  
  
 I vincoli `Structure` e `Class` determinano un conflitto per il parametro di tipo `t` perché per il vincolo `Structure` l'argomento di tipo corrispondente deve essere un tipo valore, mentre per l'oggetto `Class` deve essere un tipo riferimento.  
  
 **ID errore:** BC32119  
  
### Per correggere l'errore  
  
-   Modificare i vincoli del parametro di tipo per evitare conflitti.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)   
 [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)