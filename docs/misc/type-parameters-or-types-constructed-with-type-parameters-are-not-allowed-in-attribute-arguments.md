---
title: "I parametri di tipo o i tipi costruiti con parametri di tipo non sono consentiti negli argomenti di attributo | Microsoft Docs"
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
  - "BC32079"
  - "vbc32079"
helpviewer_keywords: 
  - "BC32079"
ms.assetid: 93eb59bd-e7db-4f73-a37f-405a83df48c1
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I parametri di tipo o i tipi costruiti con parametri di tipo non sono consentiti negli argomenti di attributo
È stato applicato un attributo con un argomento che è un parametro di tipo o è costruito con un parametro di tipo.  
  
 Visual Basic e .NET Framework non supportano alcuna combinazione di attributi e tipi generici. Vengono quindi applicate le limitazioni seguenti:  
  
-   Un attributo non può essere un tipo generico né può essere dichiarato all'interno di un tipo generico.  
  
-   Un attributo non può ereditare da una classe generica o viceversa.  
  
-   Quando viene applicato un attributo, non è possibile fornire alcun argomento fra quelli riportati di seguito:  
  
    -   Un tipo generico  
  
    -   Un tipo costruito da un tipo generico  
  
    -   Un parametro di tipo di un tipo contenitore o  
  
    -   Un tipo costruito da un parametro di tipo di un tipo contenitore.  
  
 **ID errore:** BC32079  
  
### Per correggere l'errore  
  
-   Ricostruire gli argomenti forniti all'attributo in modo che non includano parametri di tipo o un tipo costruito da un parametro di tipo.  
  
## Vedere anche  
 <xref:System.Attribute>   
 [NOT IN BUILD: Cenni preliminari sugli attributi in Visual Basic](http://msdn.microsoft.com/it-it/0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)