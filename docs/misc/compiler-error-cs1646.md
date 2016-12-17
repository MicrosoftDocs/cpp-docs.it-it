---
title: "Errore del compilatore CS1646 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1646"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1646"
ms.assetid: 5e4b0f1e-8de3-42b0-bde6-9f882677a409
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1646
È prevista la parola chiave, l'identificatore o la stringa dopo l'identificatore verbatim: @  
  
 Vedere i valori letterali stringa per l'utilizzo dell'identificatore verbatim '@'. L'identificatore verbatim è consentito solo prima di una stringa, di una parola chiave o di un identificatore. Per risolvere l'errore, rimuovere il simbolo @ dalle posizioni inappropriate o aggiungere la stringa, la parola chiave o l'identificatore desiderato.  
  
 L'esempio seguente genera l'errore CS1646:  
  
```  
// CS1646 class C { int i = @5;  // CS1646 // Try this line instead: // int i = 5; }  
```