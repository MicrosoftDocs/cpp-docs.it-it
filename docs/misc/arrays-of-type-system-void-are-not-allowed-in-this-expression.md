---
title: "Le matrici di tipo &#39;System.Void&#39; non sono consentite in questa espressione. | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31428"
  - "bc31428"
helpviewer_keywords: 
  - "BC31428"
ms.assetid: 21d77b56-585f-4107-b7ec-21933ba58017
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le matrici di tipo &#39;System.Void&#39; non sono consentite in questa espressione.
Un'espressione in un'istruzione di assegnazione o una dichiarazione specifica una matrice di tipo <xref:System.Void>.  
  
 La struttura <xref:System.Void> è un tipo specializzato usato internamente da .NET Framework e in particolare da Visual C\# e Visual C\+\+. Rappresenta un tipo valore restituito per un metodo che non restituisce un valore. Visual Basic usa una routine `Sub` quando non viene restituito un valore e una routine `Function` quando viene restituito un valore.  
  
 Le matrici di tipo <xref:System.Void> non sono significative e non sono consentite in alcun contesto.  
  
 **ID errore:** BC31428  
  
### Per correggere l'errore  
  
1.  Rimuovere le parentesi che designano una matrice.  
  
2.  A meno che non esista un motivo specifico per confrontare un tipo di runtime a <xref:System.Void>, rimuovere completamente il riferimento a tale tipo.  
  
## Vedere anche  
 <xref:System.Void>