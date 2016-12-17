---
title: "L&#39;espressione per la chiamata o l&#39;indice non &#232; valida | Microsoft Docs"
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
  - "vbc32303"
  - "bc32303"
helpviewer_keywords: 
  - "BC32303"
ms.assetid: eed6a16e-4a44-4f72-b1de-d4212940da37
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;espressione per la chiamata o l&#39;indice non &#232; valida
Un valore tra parentesi segue un'espressione che non è una routine, una proprietà o una matrice.  
  
 Il codice seguente può generare questo errore.  
  
 `Dim testVariable As Object = Nothing(1)`  
  
 `Nothing` non accetta argomenti o indici, quindi non può essere usata con le parentesi.  
  
 **ID errore:** BC32303  
  
### Per correggere l'errore  
  
-   Rimuovere le parentesi e i valori che racchiudono.  
  
## Vedere anche  
 [How to: Call a Procedure That Returns a Value](../Topic/How%20to:%20Call%20a%20Procedure%20That%20Returns%20a%20Value%20\(Visual%20Basic\).md)   
 [How to: Call a Procedure that Does Not Return a Value](../Topic/How%20to:%20Call%20a%20Procedure%20that%20Does%20Not%20Return%20a%20Value%20\(Visual%20Basic\).md)   
 [NOTINBUILD Procedura: Inserire un valore in una matrice](http://msdn.microsoft.com/it-it/6dddc79c-cf60-41c2-b572-8bfa49b4fe7e)   
 [NOTINBUILD Procedura: Ottenere un valore da una matrice](http://msdn.microsoft.com/it-it/202a6468-8ccb-4864-bd8b-eab3b42d4288)   
 [How to: Put a Value in a Property](../Topic/How%20to:%20Put%20a%20Value%20in%20a%20Property%20\(Visual%20Basic\).md)   
 [How to: Get a Value from a Property](../Topic/How%20to:%20Get%20a%20Value%20from%20a%20Property%20\(Visual%20Basic\).md)