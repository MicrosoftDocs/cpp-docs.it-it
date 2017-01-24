---
title: "&#39;Of&#39; &#232; richiesto quando si specificano argomenti di tipo per un tipo o metodo generico | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32093"
  - "vbc32093"
helpviewer_keywords: 
  - "BC32093"
ms.assetid: 9a1baf12-a4a4-442d-9baa-852ad30a956b
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Of&#39; &#232; richiesto quando si specificano argomenti di tipo per un tipo o metodo generico
Un'istruzione tenta di costruire un tipo da un tipo generico o di chiamare un metodo generico, senza usare una clausola [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md).  
  
 La sintassi [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] per i tipi generici richiede che i parametri e gli argomenti di tipo siano introdotti dalla parola chiave `Of`. Inoltre, l'elenco di parametri di tipo o di argomenti di tipo deve essere racchiuso tra parentesi.  
  
 **ID errore:** BC32093  
  
### Per correggere l'errore  
  
-   Includere la parola chiave `Of` all'inizio dell'elenco di argomenti di tipo e racchiudere l'intero elenco tra parentesi.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Procedura: utilizzare una classe generica](../Topic/How%20to:%20Use%20a%20Generic%20Class%20\(Visual%20Basic\).md)