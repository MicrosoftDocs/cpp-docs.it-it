---
title: "Tipo di vincolo &#39;&lt;nometipo&gt;&#39; gi&#224; specificato per questo parametro di tipo | Microsoft Docs"
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
  - "BC32071"
  - "vbc32071"
helpviewer_keywords: 
  - "BC32071"
ms.assetid: 6b0e85e9-3ac8-4181-97de-ca690b95a63c
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Tipo di vincolo &#39;&lt;nometipo&gt;&#39; gi&#224; specificato per questo parametro di tipo
Un elenco di vincoli include più volte un vincolo di classe o interfaccia.  
  
 Un elenco di vincoli impone requisiti per l'argomento di tipo passato al parametro di tipo. Si possono specificare i requisiti seguenti in qualsiasi combinazione:  
  
-   L'argomento di tipo deve implementare una o più interfacce  
  
-   L'argomento di tipo deve ereditare al massimo da una classe  
  
 Un tipo non può implementare o ereditare più volte lo stesso tipo e non è possibile specificare un tipo più volte nello stesso elenco di vincoli.  
  
 **ID errore:** BC32071  
  
### Per correggere l'errore  
  
-   Rimuovere qualsiasi specifica ridondante della stessa classe o interfaccia. Dovrebbe essere presente una sola volta nell'elenco di vincoli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)