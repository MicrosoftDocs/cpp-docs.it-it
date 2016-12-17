---
title: "Impossibile dedurre dal delegato &#39;&lt;NomeDelegato&gt;&#39; gli argomenti di tipo del metodo di estensione &#39;&lt;NomeMetodo&gt;&#39; definito in &#39;&lt;NomeTipo&gt;&#39; | Microsoft Docs"
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
  - "bc36581"
  - "vbc36581"
helpviewer_keywords: 
  - "BC36581"
ms.assetid: 2bb9ca8d-7293-40e9-9285-e20b8254b3af
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile dedurre dal delegato &#39;&lt;NomeDelegato&gt;&#39; gli argomenti di tipo del metodo di estensione &#39;&lt;NomeMetodo&gt;&#39; definito in &#39;&lt;NomeTipo&gt;&#39;
Un'istruzione di assegnazione usa `AddressOf` per assegnare l'indirizzo di un metodo di estensione generico a un delegato, ma non fornisce alcun argomento di tipo al metodo generico.  
  
 Di norma, quando si richiama un metodo generico, si fornisce un argomento di tipo per ogni parametro di tipo definito dal metodo generico. Se non si specifica alcun argomento di tipo, il compilatore prova a dedurre i tipi da passare ai parametri di tipo. Se il contesto non fornisce informazioni sufficienti per consentire al compilatore di dedurre i tipi, genera un errore.  
  
 **ID errore:** BC36581  
  
### Per correggere l'errore  
  
-   Specificare gli argomenti di tipo per il metodo di estensione nell'espressione `AddressOf`.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)