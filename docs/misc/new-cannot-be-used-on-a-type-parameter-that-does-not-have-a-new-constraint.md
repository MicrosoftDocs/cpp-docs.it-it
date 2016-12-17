---
title: "Impossibile utilizzare &#39;New&#39; in un parametro di tipo che non ha un vincolo &#39;New&#39; | Microsoft Docs"
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
  - "bc32046"
  - "vbc32046"
helpviewer_keywords: 
  - "BC32046"
ms.assetid: 7ec6b52d-6fd5-47a0-b4a2-163bfd3dae35
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile utilizzare &#39;New&#39; in un parametro di tipo che non ha un vincolo &#39;New&#39;
Un'istruzione di dichiarazione usa una clausola [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md) che specifica un parametro di tipo come tipo da creare e il parametro di tipo viene dichiarato senza un vincolo `New`.  
  
 Un *vincolo* su un parametro di tipo impone un requisito su qualsiasi argomento di tipo passato a tale parametro di tipo quando viene creato il tipo generico. Il vincolo `New` specifica che l'argomento di tipo deve esporre un costruttore senza parametri al quale il codice di creazione può accedere. Questo è ciò che consente a una clausola `New` in un'istruzione di dichiarazione per creare un'istanza di quel tipo.  
  
 **ID errore:** BC32046  
  
### Per correggere l'errore  
  
-   Se è possibile richiedere all'argomento di tipo di esporre un costruttore senza parametri accessibile, aggiungere il vincolo `New` alla dichiarazione del parametro di tipo.  
  
-   Se non è possibile richiedere all'argomento di tipo di esporre un costruttore senza parametri accessibile, aggiungere la clausola `New` dall'istruzione di dichiarazione. Non è possibile garantire che qualsiasi argomento di tipo passato a tale parametro di tipo permetta la creazione di un'istanza.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)