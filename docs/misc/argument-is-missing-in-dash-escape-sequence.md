---
title: "Argument is missing in &#39;\&#39; escape sequence. | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_RE_ESCAPEMISSINGARG"
  - "vs.message.0x800A00BD"
ms.assetid: 5bd6559b-8cd9-450f-91c8-335ff1b1ef86
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Argument is missing in &#39;\&#39; escape sequence.
Generalmente questo errore si verifica durante la ricerca o sostituzione quando in una stringa di ricerca si utilizzano espressioni regolari o caratteri jolly;  l'errore può essere causato da una barra rovesciata singola \(`\`\) alla fine di un criterio di ricerca oppure da `\x` o `\u` privi di un carattere Unicode esadecimale valido.  
  
### Per correggere l'errore  
  
1.  Per eseguire una ricerca utilizzando il carattere di escape dell'espressione regolare, immettere `\`.  
  
2.  Per cercare un carattere Unicode, immettere `\x` o `\u` seguiti da un valore Unicode valido.  
  
3.  Per cercare il valore letterale barra rovesciata, immettere `\\`.  
  
## Vedere anche  
 [Utilizzo delle espressioni regolari in Visual Studio](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/it-it/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Cerca nei file](../Topic/Find%20in%20Files.md)