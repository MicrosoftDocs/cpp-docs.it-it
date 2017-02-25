---
title: "Valutazione di token | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "token, valutazione"
ms.assetid: 28870b62-dff6-4644-8b75-d58f340b48d2
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Valutazione di token
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando il compilatore interpreta i token, include il maggior numero di caratteri possibile in un unico token prima di passare al token successivo.  A causa di tale comportamento, il compilatore non è in grado di interpretare i token nel modo corretto se non sono separati da spazi.  Si consideri la seguente espressione:  
  
```  
i+++j  
```  
  
 In questo esempio, il compilatore considera innanzitutto l'operatore più lungo possibile \(`++`\) a partire dai tre segni più, quindi elabora il segno più rimanente come un operatore di addizione \(`+`\).  L'espressione viene quindi interpretata come `(i++) + (j)` e non come `(i) + (++j)`.  In questo e in casi analoghi, utilizzare spazi e parentesi per evitare ambiguità e assicurare la valutazione corretta dell'espressione.  
  
 **Sezione specifica Microsoft**  
  
 Il compilatore C considera il carattere di CTRL\+Z come indicatore di fine file.  Il testo dopo CTRL\+Z viene ignorato.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Token C](../c-language/c-tokens.md)