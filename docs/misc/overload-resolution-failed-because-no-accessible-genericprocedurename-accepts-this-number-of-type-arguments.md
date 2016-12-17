---
title: "Risoluzione dell&#39;overload non riuscita perch&#233; nessun &#39;&lt;nomeroutinegenerica&gt;&#39; accessibile accetta questo numero di argomenti di tipo | Microsoft Docs"
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
  - "bc32087"
  - "vbc32087"
helpviewer_keywords: 
  - "BC32087"
ms.assetid: a3eaafd3-80f6-4b7d-9b75-47b043fe17b5
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Risoluzione dell&#39;overload non riuscita perch&#233; nessun &#39;&lt;nomeroutinegenerica&gt;&#39; accessibile accetta questo numero di argomenti di tipo
Una chiamata a una routine di overload generica non può essere risolta perché il compilatore non può accedere a nessuna versione di overload con il numero appropriato di parametri di tipo.  
  
 Quando si chiama una routine generica, è necessario fornire un argomento di tipo per ogni parametro di tipo. In alternativa, è possibile non fornire alcun argomento di tipo e permettere al compilatore di provare a eseguire l'*inferenza del tipo*. Per altre informazioni, vedere "Inferenza di tipi" in [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC32087  
  
### Per correggere l'errore  
  
1.  Verificare che la versione che si vuole chiamare sia accessibile dal codice chiamante. Vedere [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md).  
  
2.  Aggiungere o rimuovere gli argomenti di tipo dal codice chiamante in modo che l'elenco di argomenti di tipo corrisponda all'elenco di parametri di tipo della versione che si intende chiamare.  
  
     \-oppure\-  
  
     Rimuovere tutti gli argomenti di tipo dal codice chiamante e permettere al compilatore di provare a eseguire l'inferenza del tipo. Tenere presente che l'inferenza del tipo può non riuscire se sono presenti conflitti o ambiguità.  
  
## Vedere anche  
 [Overloaded Properties and Methods](../Topic/Overloaded%20Properties%20and%20Methods%20\(Visual%20Basic\).md)   
 [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)