---
title: "Le matrici non possono essere dichiarate con &#39;New&#39; | Microsoft Docs"
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
  - "vbc30053"
  - "bc30053"
helpviewer_keywords: 
  - "BC30053"
ms.assetid: aa55f3b7-2045-497b-9543-5ec6e2b74fe2
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le matrici non possono essere dichiarate con &#39;New&#39;
La parola chiave `New` può essere presente solo nella parte relativa all'inizializzazione di una dichiarazione di matrice. Ciò significa che `New` deve essere a destra del segno di uguale \(`=`\) così da poter creare un nuovo tipo di matrice da assegnare alla variabile di matrice.  
  
 Il collegamento per l'inizializzazione della classe non è disponibile per le matrici. Le seguenti righe di codice sono entrambe valide e sono equivalenti perché inizializzano un oggetto da una classe.  
  
```  
Dim formA as Form = New Form Dim formA as New Form  
```  
  
 Tuttavia, l'inizializzazione di matrice non può usare lo stesso collegamento dell'inizializzazione della classe.  
  
 Si noti che la clausola `New` per la matrice deve contenere sia le parentesi tonde, `()`, che le parentesi graffe, `{}`. Le parentesi tonde specificano che il nuovo tipo è una matrice e le parentesi graffe forniscono i valori di inizializzazione. Il compilatore richiede le parentesi graffe anche se sono vuote, vale a dire, anche se non viene inizializzato nessuno dei valori di matrice.  
  
 **ID errore:** BC30053  
  
### Per correggere l'errore  
  
-   Sostituire un'istruzione come `Dim myDates() As New Date` con un'istruzione come `Dim myDates() As Date = New Date() {}`.  
  
## Vedere anche  
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)   
 [How to: Initialize an Array Variable in Visual Basic](../Topic/How%20to:%20Initialize%20an%20Array%20Variable%20in%20Visual%20Basic.md)