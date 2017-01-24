---
title: "Inferenza dell&#39;argomento di tipo non riuscita per il parametro di tipo &#39;&lt;nomeparametrotipo1&gt;&#39; di &#39;&lt;firmaroutinegenerica&gt;&#39; | Microsoft Docs"
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
  - "vbc32116"
  - "bc32116"
helpviewer_keywords: 
  - "BC32116"
ms.assetid: 6bfb02ec-814a-4b1f-a585-6d902a861d00
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Inferenza dell&#39;argomento di tipo non riuscita per il parametro di tipo &#39;&lt;nomeparametrotipo1&gt;&#39; di &#39;&lt;firmaroutinegenerica&gt;&#39;
Inferenza dell'argomento di tipo non riuscita per il parametro di tipo '\<nomeparametrotipo1\>' di '\<firmaroutinegenerica\>'. L'argomento di tipo dedotto dall'argomento passato al parametro '\<nomeparametro1\>' è in conflitto con l'argomento di tipo dedotto dall'argomento passato al parametro ''\<nomeparametro2\>'.  
  
 È stata chiamata una routine generica senza argomenti di tipo e l'inferenza del tipo tentata ha generato un conflitto di tipo di dati fra i parametri di tipo.  
  
 Di norma, quando si chiama una routine generica, si fornisce un argomento di tipo per ogni parametro di tipo definito dalla routine generica. Se non si specifica alcun argomento di tipo, il compilatore prova a dedurre i tipi da passare ai parametri di tipo. Se il contesto della chiamata fornisce informazioni sui tipi di dati contraddittorie per un parametro di tipo, l'inferenza del tipo ha esito negativo.  
  
 Il codice seguente può generare questo errore.  
  
```  
Public Sub takeTwoValues(Of t)(ByVal x As t, ByVal y As t) End Sub Call takeTwoValues(4, 2.5)  
```  
  
 Poiché il primo argomento induce il compilatore a dedurre un tipo `Integer` per il parametro di tipo `t`, mentre il secondo argomento lo induce a inferire il tipo `Double` per lo stesso parametro di tipo, viene a crearsi un conflitto relativamente al tipo di dati da passare a `t`.  
  
 **ID errore:** BC32116  
  
### Per correggere l'errore  
  
-   Fornire degli argomenti di tipo al tipo generico in modo che il compilatore non debba dedurli.  
  
    ```  
    Call takeTwoValues(Of Double)(4, 2.5)  
    ```  
  
     Osservare che in questo caso, in cui i due argomenti normali sono caratterizzati da tipi di dati diversi, il codice chiamante deve passare un argomento di tipo adeguato per entrambi i tipi di dati. In questo caso, `Integer` si amplia in `Double`.  
  
     \-oppure\-  
  
-   Ridefinire la routine generica per specificare parametri di tipo diversi per i parametri normali, in modo che non si crei conflitto nel dedurre i tipi.  
  
    ```  
    Public Sub takeTwoValues(Of t1, t2)(ByVal x As t1, ByVal y As t2)  
    ```  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)