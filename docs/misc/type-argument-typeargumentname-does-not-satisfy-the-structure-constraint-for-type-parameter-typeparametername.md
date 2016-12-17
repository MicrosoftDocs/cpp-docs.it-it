---
title: "L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; non soddisfa il vincolo &#39;Structure&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; | Microsoft Docs"
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
  - "vbc32105"
  - "bc32105"
helpviewer_keywords: 
  - "BC32105"
ms.assetid: 09e5a837-8afd-4360-86bd-157e53c47513
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; non soddisfa il vincolo &#39;Structure&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39;
Un argomento di tipo fornito a un tipo generico non soddisfa il vincolo di tipo valore nel parametro di tipo corrispondente.  
  
 Un elenco di vincoli impone requisiti per l'argomento di tipo passato al parametro di tipo. Se non si include alcuna classe o interfaccia specifica nell'elenco di vincoli, è possibile imporre un requisito generale specificando una delle seguenti condizioni:  
  
-   L'argomento di tipo deve essere un tipo valore \(deve includere il vincolo [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)\)  
  
-   L'argomento di tipo deve essere un tipo riferimento \(deve includere il vincolo [Class \(Visual Basic\)](http://msdn.microsoft.com/it-it/0777c6e6-46bc-451b-ad70-57b49d4ef4f7)\)  
  
 Non è possibile specificare sia `Structure` che `Class` per lo stesso parametro di tipo e non è possibile specificare uno dei due vincoli più volte.  
  
 **ID errore:** BC32105  
  
### Per correggere l'errore  
  
-   Selezionare un argomento di tipo di qualsiasi tipo valore.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)   
 [Procedura: utilizzare una classe generica](../Topic/How%20to:%20Use%20a%20Generic%20Class%20\(Visual%20Basic\).md)