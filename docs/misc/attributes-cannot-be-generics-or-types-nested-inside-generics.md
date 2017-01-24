---
title: "Gli attributi non possono essere generics o tipi annidati all&#39;interno di generics | Microsoft Docs"
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
  - "bc32067"
  - "vbc32067"
helpviewer_keywords: 
  - "BC32067"
ms.assetid: 93ae2848-0a72-4ae5-82a3-32e0a49bb7cd
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli attributi non possono essere generics o tipi annidati all&#39;interno di generics
Un attributo è dichiarato come tipo generico o all'interno di un tipo generico.  
  
 Visual Basic e .NET Framework non supportano alcuna combinazione di attributi e tipi generici. Vengono quindi applicate le limitazioni seguenti:  
  
-   Un attributo non può essere un tipo generico né può essere dichiarato all'interno di un tipo generico.  
  
-   Un attributo non può ereditare da una classe generica o viceversa.  
  
-   Quando viene applicato un attributo, non è possibile fornire alcun argomento fra quelli riportati di seguito:  
  
    -   Un tipo generico  
  
    -   Un tipo costruito da un tipo generico  
  
    -   Un parametro di tipo di un tipo contenitore o  
  
    -   Un tipo costruito da un parametro di tipo di un tipo contenitore.  
  
 **ID errore:** BC32067  
  
### Per correggere l'errore  
  
-   Se la dichiarazione di attributo include la parola chiave `Of` e un elenco di parametri di tipo, rimuoverli.  
  
-   Se la dichiarazione di attributo compare all'interno di un tipo generico, spostarla in una posizione che sia esterna a qualsiasi tipo generico.  
  
## Vedere anche  
 <xref:System.Attribute>   
 [NOT IN BUILD: Cenni preliminari sugli attributi in Visual Basic](http://msdn.microsoft.com/it-it/0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)