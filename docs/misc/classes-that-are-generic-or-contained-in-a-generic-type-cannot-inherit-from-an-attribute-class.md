---
title: "Le classi generiche o che sono contenute in un tipo generico non possono ereditare da una classe Attribute | Microsoft Docs"
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
  - "vbc32074"
  - "BC32074"
helpviewer_keywords: 
  - "BC32074"
ms.assetid: 3552ac98-d86a-4962-9d51-b9a8acc38ea1
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le classi generiche o che sono contenute in un tipo generico non possono ereditare da una classe Attribute
Una classe generica o annidata all'interno di un tipo generico specifica che eredita da una classe Attribute.  
  
 Visual Basic e .NET Framework non supportano alcuna combinazione di attributi e tipi generici. Vengono quindi applicate le limitazioni seguenti:  
  
-   Un attributo non può essere un tipo generico né può essere dichiarato all'interno di un tipo generico.  
  
-   Un attributo non può ereditare da una classe generica o viceversa.  
  
-   Quando viene applicato un attributo, non è possibile fornire alcun argomento fra quelli riportati di seguito:  
  
    -   Un tipo generico  
  
    -   Un tipo costruito da un tipo generico  
  
    -   Un parametro di tipo di un tipo contenitore o  
  
    -   Un tipo costruito da un parametro di tipo di un tipo contenitore.  
  
 **ID errore:** BC32074  
  
### Per correggere l'errore  
  
-   Modificare la classe base in un elemento diverso da una classe Attribute o rimuovere completamente l'istruzione `Inherits`.  
  
## Vedere anche  
 <xref:System.Attribute>   
 [NOT IN BUILD: Cenni preliminari sugli attributi in Visual Basic](http://msdn.microsoft.com/it-it/0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)   
 [Inherits Statement](../Topic/Inherits%20Statement.md)