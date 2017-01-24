---
title: "Non &#232; possibile inizializzare la variabile con il tipo non matrice &#39;&lt;nomeelemento&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36536"
  - "bc36536"
helpviewer_keywords: 
  - "BC36536"
ms.assetid: 959415de-164e-4971-aab0-faad315753e9
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile inizializzare la variabile con il tipo non matrice &#39;&lt;nomeelemento&gt;&#39;
Una variabile dichiarata come matrice deve essere inizializzata con un valore di matrice.  
  
```  
' Not valid. ' The following line causes this error when executed with Option Strict off. ' Dim arrayVar1() = 10  
```  
  
 **ID errore:** BC36536  
  
### Per correggere l'errore  
  
-   Inizializzare la variabile di matrice con un valore di matrice:  
  
    ```  
    ' With Option Strict off. Dim arrayVar2() = {1, 2, 3} ' With Option Strict on. Dim arrayVar3() As Integer = {1, 2, 3}  
    ```  
  
## Vedere anche  
 [NOTINBUILD Variabile di matrice](http://msdn.microsoft.com/it-it/c2da78bd-6928-46ba-805f-44f819dfaf93)