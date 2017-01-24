---
title: "Unknown argument for &#39;:&#39; operator. Complete Regular Expression required in search string. | Microsoft Docs"
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
  - "vs.message.0x800A00BE"
  - "vs.message.VS_E_RE_SPECIALUNKNOWN"
ms.assetid: 8cbc2f7f-7ea1-4803-904c-1f716cd36376
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Unknown argument for &#39;:&#39; operator. Complete Regular Expression required in search string.
Generalmente questo errore si verifica durante la ricerca o sostituzione quando in una stringa di ricerca si utilizzano espressioni regolari o caratteri jolly;  viene immesso l'operatore due punti \(`:`\) seguito da un argomento non valido.  
  
> [!NOTE]
>  Negli argomenti per l'operatore due punti \(`:`\) si utilizza la distinzione tra maiuscole e minuscole.  
  
### Per correggere l'errore  
  
1.  Verificare la sintassi dell'espressione regolare consultando l'argomento "Espressioni regolari".  
  
2.  Controllare che non siano presenti errori nell'utilizzo delle maiuscole e minuscole nell'argomento.  
  
3.  Se si utilizza un editor del metodo di input \(IME\), assicurarsi che l'argomento non contenga caratteri a byte doppio.  
  
## Vedere anche  
 [Utilizzo delle espressioni regolari in Visual Studio](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/it-it/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Cerca nei file](../Topic/Find%20in%20Files.md)