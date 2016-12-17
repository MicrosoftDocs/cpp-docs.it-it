---
title: "&#39;(&#39; imprevisto | Microsoft Docs"
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
  - "vbc32095"
  - "bc32095"
helpviewer_keywords: 
  - "BC32095"
ms.assetid: a47ad15a-2cfc-4d17-9012-27ba85b7d783
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;(&#39; imprevisto
'\(' imprevisto. Non sono consentite matrici di tipi generici privi di istanze.  
  
 [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può compilare una matrice a meno che non sia un tipo di dati specifico. Non è possibile usare un parametro del tipo di dati di un tipo generico come tipo di dati di una matrice.  
  
 **ID errore:** BC32095  
  
### Per correggere l'errore  
  
-   Se è necessario usare una matrice, è necessario dichiararla come un tipo di dati specifico. Non è possibile usare un parametro del tipo di dati.  
  
-   Se è necessario un gruppo di elementi del tipo di dati da fornire per un parametro del tipo di dati, è necessario usare una raccolta invece di una matrice.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [NIB Raccolte in Visual Basic](http://msdn.microsoft.com/it-it/8b2b7845-2251-4573-8dd3-c9f9c0a66a21)   
 [Gestione di gruppi di oggetti in Visual Basic](http://msdn.microsoft.com/it-it/50be4910-4732-4d5f-a18a-055a162e9037)