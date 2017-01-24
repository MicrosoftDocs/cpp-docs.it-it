---
title: "In un&#39;espressione costante usata come argomento di un attributo non pu&#242; verificarsi la conversione da &#39;&lt;type1&gt;&#39; a &#39;&lt;type2&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30934"
  - "vbc30934"
helpviewer_keywords: 
  - "BC30934"
ms.assetid: 120e05f9-1d0e-4800-b05c-a8373e286b9b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# In un&#39;espressione costante usata come argomento di un attributo non pu&#242; verificarsi la conversione da &#39;&lt;type1&gt;&#39; a &#39;&lt;type2&gt;&#39;
Un'espressione usata per un argomento di attributo restituisce un tipo di dati diverso da quello del parametro di attributo corrispondente e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non consente la conversione di tipo richiesta per gli argomenti di attributo.  
  
 Un attributo fornisce metadati per l'elemento a cui è applicato e il compilatore deve essere in grado di costruire tutti i metadati in fase di compilazione. Per questo motivo, ogni attributo deve usare valori costanti in fase di compilazione e, di conseguenza, anche ogni argomento di attributo deve restituire un valore costante.  
  
 Alcune conversioni di tipo non possono produrre valori costanti in fase di compilazione. Ad esempio, la conversione di `String` in `Double` o in `Date` dipende dalle impostazioni locali in fase di esecuzione. Altre conversioni, ad esempio la conversione di una matrice di un tipo derivato in una matrice di `Object`, presentano diversi problemi che impediscono al compilatore di accettarle negli argomenti di attributo.  
  
 **ID errore:** BC30934  
  
### Per correggere l'errore  
  
-   Usare un'espressione che restituisca lo stesso tipo di dati del parametro corrispondente, come definito dall'attributo.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Const Statement](../Topic/Const%20Statement%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)