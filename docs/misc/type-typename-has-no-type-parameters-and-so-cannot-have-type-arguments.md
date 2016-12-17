---
title: "&#39;&lt;nometipo&gt;&#39; non ha parametri di tipo, quindi non pu&#242; avere argomenti di tipo | Microsoft Docs"
ms.custom: ""
ms.date: "12/08/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32045"
  - "vbc32045"
helpviewer_keywords: 
  - "BC32045"
ms.assetid: b86e784c-6718-4585-bd39-2f0982068828
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; non ha parametri di tipo, quindi non pu&#242; avere argomenti di tipo
Quando viene richiamato un tipo non generico, una dichiarazione o un'istruzione di assegnazione include una clausola [Of](../Topic/Of%20Clause%20\(Visual%20Basic\).md).  
  
 Per definizione, un *tipo generic*o è una classe, struttura, interfaccia, routine o delegato che opera solo su tipi di dati che è possibile specificare tramite uno o più *parametri di tipo*. Quando il codice di utilizzo crea un tipo da questo tipo generico, fornisce a ogni parametro di tipo un *argomento di tipo*. Come parte della creazione del tipo, ogni argomento di tipo sostituisce ogni occorrenza del parametro di tipo corrispondente nel codice generato.  
  
 I parametri di tipo sono definiti con una clausola `Of` tra parentesi e gli argomenti di tipo vengono forniti tramite una clausola `Of` tra parentesi. La clausola `Of` viene usata solo quando si usano i tipi generici.  
  
 I tipi non generici non accettano i parametri di tipo e quando vengono richiamati non è possibile specificare argomenti di tipo.  
  
 **ID errore:** BC32045  
  
### Per correggere l'errore  
  
1.  Controllare l'ortografia del tipo usato nella dichiarazione o nell'istruzione di assegnazione.  
  
2.  Se si richiama un tipo non generico, rimuovere la clausola `Of` e le sue parentesi, se presenti. Non rimuovere le parentesi che circondano un elenco di argomenti standard per una routine, un delegato o un costruttore di classe.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Procedura: utilizzare una classe generica](../Topic/How%20to:%20Use%20a%20Generic%20Class%20\(Visual%20Basic\).md)