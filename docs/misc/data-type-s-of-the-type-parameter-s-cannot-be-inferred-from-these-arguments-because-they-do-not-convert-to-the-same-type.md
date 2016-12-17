---
title: "Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo perch&#233; non vengono convertiti nello stesso tipo | Microsoft Docs"
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
  - "vbc36659"
  - "bc36659"
  - "vbc36656"
  - "bc36656"
helpviewer_keywords: 
  - "BC36659"
  - "BC36656"
ms.assetid: 0aa809da-3b44-4d78-b3c5-0a148bdf7ce8
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo perch&#233; non vengono convertiti nello stesso tipo
Non è possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo perché non vengono convertiti nello stesso tipo. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Questo errore si verifica quando la risoluzione dell'overload non riesce. Viene visualizzato come messaggio subordinato che indica perché un determinato candidato di overload è stato eliminato. L'errore spiega che il compilatore non può usare l'inferenza del tipo per trovare tipi di dati per i parametri di tipo che siano compatibili con gli argomenti.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Per altre informazioni ed esempi, vedere [Non è possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo '\<nomemetodo\>' perché non vengono convertiti nello stesso tipo](../misc/data-type-s-of-the-type-parameter-s-in-method-methodname-cannot-be-inferred-from-these-arguments-because-they-do-not-convert-to-the-same-type.md).  
  
 **ID errore:** BC36659 e BC36656  
  
## Vedere anche  
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md)