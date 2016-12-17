---
title: "Procedura: utilizzare la funzione ReadFile di Windows (Guida per programmatori C#) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "ReadFile (funzione) [C#]"
ms.assetid: 46bb53e0-a658-48c9-ae36-6720da7781c1
caps.latest.revision: 18
caps.handback.revision: 18
ms.author: "billchi"
manager: "douge"
---
# Procedura: utilizzare la funzione ReadFile di Windows (Guida per programmatori C#)
In questo esempio viene illustrata la funzione `ReadFile` di Windows con la lettura e la visualizzazione di un file di testo.  La funzione `ReadFile` richiede l'utilizzo di codice `unsafe`, perché è necessario un puntatore come parametro.  
  
 La matrice di byte passata nella funzione `Read` è un tipo gestito.  Il Garbage Collector di Common Language Runtime è quindi in grado di rilocare la memoria utilizzata dalla matrice secondo necessità.  Per evitare questo comportamento, viene utilizzata l'istruzione [fixed](../Topic/fixed%20Statement%20\(C%23%20Reference\).md) per ottenere un puntatore alla memoria e contrassegnarla in modo che il Garbage Collector non la sposti.  Alla fine del blocco `fixed`, la memoria tornerà automaticamente a essere soggetta a spostamenti tramite Garbage Collection.  
  
 Questa funzionalità è nota come *blocco dichiarativo*.  Il blocco comporta un overhead minimo a meno che non si verifichi un Garbage Collection nel blocco `fixed`. Tale evenienza è tuttavia piuttosto improbabile.  Il blocco può però portare ad alcuni effetti collaterali indesiderati durante l'esecuzione globale del Garbage Collection.  La possibilità del Garbage Collector di comprimere la memoria è notevolmente limitata dai buffer bloccati.  Pertanto, il blocco dovrebbe essere evitato laddove possibile.  
  
## Esempio  
 [!code-cs[csProgGuidePointers#2](../misc/codesnippet/CSharp/how-to-use-the-windows-readfile-function-csharp-programming-guide_1.cs)]  
  
## Vedere anche  
 [Guida per programmatori C\#](../Topic/C%23%20Programming%20Guide.md)   
 [Riferimenti per C\#](../Topic/C%23%20Reference.md)   
 [Codice unsafe e puntatori](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md)   
 [Tipi di puntatori](../Topic/Pointer%20types%20\(C%23%20Programming%20Guide\).md)   
 [Garbage Collection](../Topic/Garbage%20Collection.md)