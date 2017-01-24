---
title: "Argomenti di tipo imprevisti. Gli attributi non possono essere generics | Microsoft Docs"
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
  - "bc32066"
  - "vbc32066"
helpviewer_keywords: 
  - "BC32066"
ms.assetid: cd43a92c-33fb-4def-bbf7-527d21bff93c
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Argomenti di tipo imprevisti. Gli attributi non possono essere generics
Un attributo viene applicato usando un elenco di argomenti di tipo.  
  
 Visual Basic e .NET Framework non supportano alcuna combinazione di attributi e tipi generici. Vengono quindi applicate le limitazioni seguenti:  
  
-   Un attributo non può essere un tipo generico né può essere dichiarato all'interno di un tipo generico.  
  
-   Un attributo non può ereditare da una classe generica o viceversa.  
  
-   Quando viene applicato un attributo, non è possibile fornire alcun argomento fra quelli riportati di seguito:  
  
    -   Un tipo generico  
  
    -   Un tipo costruito da un tipo generico  
  
    -   Un parametro di tipo di un tipo contenitore o  
  
    -   Un tipo costruito da un parametro di tipo di un tipo contenitore.  
  
 **ID errore:** BC32066  
  
### Per correggere l'errore  
  
-   Se gli argomenti di tipo sono destinati a essere argomenti normali, rimuovere la parola chiave `Of`. Questa operazione consente di trasformare gli elenchi di argomenti di tipo in un elenco di argomenti normali.  
  
-   Se gli argomenti di tipo sono destinati a essere forniti ai parametri di tipo, rimuovere la parola chiave `Of` e tutti gli argomenti di tipo. Un attributo non può accettare argomenti di tipo.  
  
## Vedere anche  
 <xref:System.Attribute>   
 [NOT IN BUILD: Cenni preliminari sugli attributi in Visual Basic](http://msdn.microsoft.com/it-it/0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)