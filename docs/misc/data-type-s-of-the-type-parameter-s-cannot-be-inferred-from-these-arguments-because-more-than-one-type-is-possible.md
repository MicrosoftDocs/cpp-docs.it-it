---
title: "Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo perch&#233; sono possibili pi&#249; tipi. | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36653"
  - "bc36653"
  - "vbc36650"
  - "bc36650"
helpviewer_keywords: 
  - "BC36650"
  - "BC36653"
ms.assetid: 79287e1f-7070-4a71-96d2-aee0a0c9d8bd
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo perch&#233; sono possibili pi&#249; tipi.
Non è possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo perché sono possibili più tipi. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Questo errore si verifica quando la risoluzione dell'overload non riesce. Viene visualizzato come messaggio subordinato che indica il motivo per cui un determinato candidato di overload è stato eliminato. L'errore spiega che, se viene applicata l'inferenza del tipo per determinare il tipo di dati dei parametri di tipo della routine generica chiamata, il compilatore rileva più di un tipo di dati per almeno uno di essi.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Per ulteriori informazioni ed esempi, vedere [Impossibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo '\<nomemetodo\>' perché sono possibili più tipi](../misc/data-type-s-of-the-type-parameter-s-in-method-methodname-cannot-be-inferred-from-these-arguments-because-more-than-one-type-is-possible.md).  
  
 **ID errore:** BC36653 e BC36650  
  
## Vedere anche  
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md)