---
title: "I metodi dichiarati nelle strutture non possono contenere clausole &#39;Handles&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30728"
  - "bc30728"
helpviewer_keywords: 
  - "BC30728"
ms.assetid: 64c70bb5-3696-4865-8194-328394c2b4b1
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi dichiarati nelle strutture non possono contenere clausole &#39;Handles&#39;
I metodi per la struttura non possono usare la parola chiave `Handles` per gestire gli eventi.  
  
 **ID errore:** BC30728  
  
### Per correggere l'errore  
  
-   È consigliabile riprogettare la struttura come una classe.  
  
     È possibile usare `AddHandler` per associare un evento a un gestore eventi in una struttura, purché la struttura implementi un gestore eventi definito in un'interfaccia.  
  
## Vedere anche  
 [Structures and Classes](../Topic/Structures%20and%20Classes%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Classi: progetti iniziali degli oggetti](http://msdn.microsoft.com/it-it/2c86373d-0333-4616-a7d8-4790c4e89f7b)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: AddHandler e RemoveHandler](http://msdn.microsoft.com/it-it/a7a24bd2-519a-46fe-8a2c-2b9df2ca28ef)