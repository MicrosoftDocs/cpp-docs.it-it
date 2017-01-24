---
title: "Impossibile convertire l&#39;espressione di tipo &#39;&lt;nometipo&gt;&#39; in &#39;Object&#39; o &#39;ValueType&#39; | Microsoft Docs"
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
  - "bc31394"
  - "vbc31394"
helpviewer_keywords: 
  - "BC31394"
ms.assetid: e6f76257-65bb-4954-99f9-90f282648354
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile convertire l&#39;espressione di tipo &#39;&lt;nometipo&gt;&#39; in &#39;Object&#39; o &#39;ValueType&#39;
Un'espressione restituisce un tipo per il quale Common Language Runtime \(CLR\) non può eseguire il boxing.  
  
 Il termine *boxing* indica il processo di elaborazione necessario per la conversione di un tipo in `Object` o <xref:System.ValueType>. Common Language Runtime non supporta il boxing di alcuni tipi, quali <xref:System.ArgIterator> e <xref:System.TypedReference>.  
  
 Se nell'istruzione che contiene l'espressione non è stata usata la funzione `CType` o `CObj`, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] ha provato a eseguire una conversione implicita che genera questo errore.  
  
 **ID errore:** BC31394  
  
### Per correggere l'errore  
  
1.  Trovare l'espressione che restituisce il tipo citato.  
  
2.  Trovare la parte dell'istruzione che prova a eseguire il boxing del tipo citato.  
  
3.  Riscrivere l'istruzione in modo da impedire la conversione boxing.  
  
## Vedere anche  
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)