---
title: "&#200; previsto l&#39;identificatore preceduto da un punto | Microsoft Docs"
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
  - "bc36576"
  - "vbc36576"
helpviewer_keywords: 
  - "BC36576"
ms.assetid: 02217cc4-8972-4a6d-97a6-4ecbb7399af2
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto l&#39;identificatore preceduto da un punto
Nell'elenco di inizializzatori di una dichiarazione di tipo anonimo è stato incluso un valore da cui non è possibile dedurre il nome della proprietà, non assegnato a un nome di proprietà.  
  
```  
' Not valid. ' Dim anon1 = New With {.grade = 100, 95}  
```  
  
 **ID errore:** BC36576  
  
### Per correggere l'errore  
  
-   Specificare un nome di proprietà per ogni valore nell'elenco di inizializzatori, come mostrato nel codice seguente:  
  
    ```  
    Dim anon2 = New With {.grade1 = 100, .grade2 = 95}  
    ```  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Procedura: Dichiarare un'istanza di un tipo anonimo \(Visual Basic\)](http://msdn.microsoft.com/it-it/119f616c-9bcd-4731-ac00-4285be5959f7)   
 [Procedura: dedurre tipi e nomi di proprietà nelle dichiarazioni di tipo anonimo](../Topic/How%20to:%20Infer%20Property%20Names%20and%20Types%20in%20Anonymous%20Type%20Declarations%20\(Visual%20Basic\).md)