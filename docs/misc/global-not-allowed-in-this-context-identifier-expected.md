---
title: "&#39;Global&#39; non consentito in questo contesto; previsto identificatore | Microsoft Docs"
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
  - "vbc36001"
  - "bc36001"
helpviewer_keywords: 
  - "BC36001"
ms.assetid: d515daa2-f53d-424c-81fd-e9c4b12f331b
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Global&#39; non consentito in questo contesto; previsto identificatore
La parola chiave `Global` è usata in un'istruzione in cui non è consentita.  
  
 La parola chiave `Global` consente di accedere a uno spazio dei nomi definito all'esterno della relativa gerarchia in cui deve essere compilato il codice.`Global` definisce l'inizio del percorso di qualificazione al livello più esterno dello spazio dei nomi della libreria di classi .NET Framework. Per informazioni generali, vedere [Global \- eliminazione](http://msdn.microsoft.com/it-it/18c8ba14-40f6-4978-8096-6a5852324635).  
  
 Alcune istruzioni, ad esempio `Imports` e `Namespace`, sono indipendenti dallo spazio dei nomi in cui viene compilato il codice. e richiedono un percorso di qualificazione completo che inizi con lo spazio dei nomi a livello di radice, ad esempio<xref:System> o <xref:Microsoft.VisualBasic>. In queste istruzioni la parola chiave `Global` sarebbe superflua e comunque non è consentita.  
  
 **ID errore:** BC36001  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Global` dall'istruzione. Non è necessaria.  
  
## Vedere anche  
 [Global \- eliminazione](http://msdn.microsoft.com/it-it/18c8ba14-40f6-4978-8096-6a5852324635)   
 [Imports Statement \(.NET Namespace and Type\)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md)   
 [Namespace Statement](../Topic/Namespace%20Statement.md)   
 [References and the Imports Statement](../Topic/References%20and%20the%20Imports%20Statement%20\(Visual%20Basic\).md)