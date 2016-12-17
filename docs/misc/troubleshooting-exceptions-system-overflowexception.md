---
title: "Risoluzione dei problemi relativi alle eccezioni: System.OverflowException | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "OverflowException (classe)"
ms.assetid: bd380db7-5d05-4d7f-be5b-e654fdadf14c
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.OverflowException
Un'eccezione <xref:System.OverflowException> viene generata quando un'operazione aritmetica, di cast o di conversione eseguita in un contesto verificato produce un overflow. Un overflow si verifica quando un'operazione restituisce un valore troppo grande per il tipo di destinazione, infinito oppure non numerico.  
  
## Suggerimenti associati  
 **Quando si esegue il cast da un numero, il valore deve essere un numero inferiore a infinito.**  
 Il valore di origine non può essere infinito o non numerico.  
  
 **Assicurarsi che non si stia dividendo per zero.**  
 Normalmente, una divisione per zero genera questa eccezione.  
  
## Note  
 <xref:System.OverflowException> è l'eccezione generata quando si verifica un overflow nei linguaggi che rilevano questa condizione. Ad esempio, in C\# viene utilizzata la parola chiave `checked` per rilevare le condizioni di overflow. L'eccezione <xref:System.OverflowException> viene generata solo in un contesto verificato.  
  
 Quando il risultato di una conversione o un'operazione aritmetica di tipo integrale o decimale non è compreso nell'intervallo del tipo di destinazione:  
  
-   In un contesto verificato si verificherà un errore in fase di compilazione se l'operazione è un'espressione costante. In caso contrario, verrà generata un'eccezione <xref:System.OverflowException> se l'operazione avviene in fase di esecuzione.  
  
-   In un contesto non verificato il risultato verrà troncato mediante l'eliminazione di tutti i bit più significativi che non corrispondono al tipo di destinazione.  
  
 Per informazioni sugli intervalli di valori dei tipi di dati, vedere [Data Types](../Topic/Data%20Type%20Summary%20\(Visual%20Basic\).md), [Tabella dei tipi integrali](../Topic/Integral%20Types%20Table%20\(C%23%20Reference\).md) o [Tabella dei tipi a virgola mobile](../Topic/Floating-Point%20Types%20Table%20\(C%23%20Reference\).md).  
  
## Vedere anche  
 <xref:System.OverflowException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)