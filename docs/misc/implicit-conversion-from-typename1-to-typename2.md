---
title: "Conversione implicita da &#39;&lt;nometipo1&gt;&#39; a &#39;&lt;nometipo2&gt;&#39; | Microsoft Docs"
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
  - "vbc42016"
  - "BC42016"
helpviewer_keywords: 
  - "BC42016"
ms.assetid: 7dabaab0-8258-4c17-927f-28e61f50bd3a
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conversione implicita da &#39;&lt;nometipo1&gt;&#39; a &#39;&lt;nometipo2&gt;&#39;
Un'espressione o un'istruzione di assegnazione accetta un valore di un tipo di dati e lo converte in un altro tipo. Dato che non viene usata alcuna parola chiave, la conversione è *implicita*.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42016  
  
### Per correggere l'errore  
  
-   Se possibile, usare valori dello stesso tipo di dati in modo che [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non debba eseguire alcuna conversione.  
  
-   Usare `CType` o una delle altre parole chiave di conversione affinché la conversione sia *esplicita*.  
  
## Vedere anche  
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)