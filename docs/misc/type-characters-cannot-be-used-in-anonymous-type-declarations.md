---
title: "Non &#232; possibile usare i caratteri tipo nelle dichiarazioni di tipo anonimo | Microsoft Docs"
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
  - "bc36560"
  - "vbc36560"
helpviewer_keywords: 
  - "BC36560"
ms.assetid: 70eee559-d6fc-409b-b835-2c84511b160e
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare i caratteri tipo nelle dichiarazioni di tipo anonimo
Quando si dichiara un'istanza di un tipo anonimo, non è possibile usare un carattere tipo in un nome di proprietà. Il tipo di dati della proprietà viene dedotto dal valore assegnato a esso. Ad esempio, le dichiarazioni seguenti non sono valide.  
  
```vb#  
'' Not valid. 'Dim anon1 = New With {.ID$ = "abc"} 'Dim anon2 = New With {.ID$ = 42}  
```  
  
 **ID errore:** BC36560  
  
### Per correggere l'errore  
  
-   Rimuovere il tipo di carattere dall'elenco di inizializzatori. Se si vuole definire il tipo di dati desiderato per la proprietà, è possibile convertire esplicitamente il valore assegnato.  
  
    ```vb#  
    ' Valid. Dim anon1 = New With {.ID = "abc"} Dim anon2 = New With {.ID = CStr(42)}  
    ```  
  
## Vedere anche  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Procedura: dedurre tipi e nomi di proprietà nelle dichiarazioni di tipo anonimo](../Topic/How%20to:%20Infer%20Property%20Names%20and%20Types%20in%20Anonymous%20Type%20Declarations%20\(Visual%20Basic\).md)   
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)