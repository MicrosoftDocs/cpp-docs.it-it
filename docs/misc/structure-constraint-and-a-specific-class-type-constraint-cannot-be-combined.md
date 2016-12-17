---
title: "Impossibile combinare il vincolo &#39;Structure&#39; e uno specifico vincolo di tipo di classe | Microsoft Docs"
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
  - "vbc32108"
  - "bc32108"
helpviewer_keywords: 
  - "BC32108"
ms.assetid: de461824-5aec-48d1-967d-b0e0609a8ba6
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile combinare il vincolo &#39;Structure&#39; e uno specifico vincolo di tipo di classe
Un elenco di vincoli include sia il vincolo [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0) che il nome di una classe definita.  
  
 Un elenco di vincoli impone requisiti per l'argomento di tipo passato al parametro di tipo. Si possono specificare i requisiti seguenti in qualsiasi combinazione:  
  
-   L'argomento di tipo deve implementare una o più interfacce  
  
-   L'argomento di tipo deve ereditare al massimo da una classe  
  
-   L'argomento di tipo deve esporre un costruttore senza parametri a cui il codice di creazione possa accedere \(includere il vincolo `New`\)  
  
 Se non si include alcuna classe o interfaccia specifica nell'elenco di vincoli, è possibile imporre un requisito più generale specificando una delle condizioni seguenti:  
  
-   L'argomento di tipo deve essere un tipo valore \(includere il vincolo `Structure`\)  
  
-   L'argomento di tipo deve essere un tipo riferimento \(includere il vincolo `Class`\)  
  
 Non è possibile specificare sia `Structure` che `Class` per lo stesso parametro di tipo e non è possibile specificare uno dei due vincoli più volte.  
  
 **ID errore:** BC32108  
  
### Per correggere l'errore  
  
-   Se si vuole che l'argomento di tipo sia un tipo valore, rimuovere il nome della classe dall'elenco di vincoli.  
  
-   Se si vuole che l'argomento di tipo erediti dal nome della classe specificato, rimuovere la parola chiave `Structure` dall'elenco di vincoli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)