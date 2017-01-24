---
title: "Non &#232; possibile specificare il modificatore nullable &#39;?&#39; e i modificatori di matrici &#39;(&#39; e &#39;)&#39; sia nella variabile che nel relativo tipo | Microsoft Docs"
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
  - "vbc33102"
  - "bc33102"
helpviewer_keywords: 
  - "BC33102"
ms.assetid: fd3f65a4-63f9-41dc-ba15-98d86f097ba8
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare il modificatore nullable &#39;?&#39; e i modificatori di matrici &#39;(&#39; e &#39;)&#39; sia nella variabile che nel relativo tipo
Il modificatore di tipo nullable \(?\) è incluso nella variabile in una dichiarazione di variabile in cui i modificatori di matrici \(parentesi\) sono inclusi nel tipo di variabile specificato. Oppure il modificatore di tipo nullable è incluso nel tipo di variabile specificato in una dichiarazione di variabile in cui i modificatori di matrici sono inclusi nella variabile.  
  
 **ID errore:** BC33102  
  
### Per correggere l'errore  
  
1.  Specificare sia il modificatore di tipo nullable \(?\) che i modificatori di matrici \(parentesi\) nella variabile dichiarata o nel tipo di variabile specificato, come mostrato nell'esempio seguente.  
  
    ```vb#  
    ' These are incorrect. ' Dim numbers? As Integer() ' Dim values() As Integer? 'These are correct. Dim numbers?() As Integer Dim values As Integer?()  
    ```  
  
## Vedere anche  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)