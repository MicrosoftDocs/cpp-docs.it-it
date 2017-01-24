---
title: "Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; non pu&#242; essere vincolato a se stesso: &#39;&lt;messaggioerrore&gt;&#39; | Microsoft Docs"
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
  - "bc32113"
  - "vbc32113"
helpviewer_keywords: 
  - "BC32113"
ms.assetid: a74128ae-11d0-46bf-8c0b-c7a2bf881d17
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; non pu&#242; essere vincolato a se stesso: &#39;&lt;messaggioerrore&gt;&#39;
Un elenco di vincoli per un parametro di tipo include il parametro di tipo stesso.  
  
 Un elenco di vincoli in un parametro di tipo può specificare un numero qualsiasi di interfacce e al massimo una classe. Un argomento di tipo fornito per tale parametro di tipo deve implementare ogni interfaccia specificata ed ereditare dalla classe specificata. Il compilatore richiede interfacce e classi che sono già definite quando rileva un elenco di vincoli. Un parametro di tipo non viene considerato come un tipo definito fino a quando non viene sostituito con un argomento di tipo adatto fornito dal codice che crea il tipo generico.  
  
 **ID errore:** BC32113  
  
### Per correggere l'errore  
  
1.  Verificare l'ortografia del parametro di tipo e dei vincoli nel relativo elenco di vincoli.  
  
2.  Se non sono presenti errori di ortografia, rimuovere il nome del parametro di tipo dal relativo elenco di vincoli. Non può essere vincolato a se stesso.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)