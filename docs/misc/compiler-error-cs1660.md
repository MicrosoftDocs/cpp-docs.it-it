---
title: "Errore del compilatore CS1660 | Microsoft Docs"
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
  - "CS1660"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1660"
ms.assetid: ae7fede3-471b-4e20-97a7-b80fdc2bb080
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1660
Impossibile convertire il blocco di metodi anonimi nel tipo 'type' perché non è un tipo delegato  
  
 Questo errore si verifica se si tenta di assegnare o convertire un blocco di metodo anonimo a un tipo che non è un tipo delegato.  
  
 L'esempio seguente genera l'errore CS1660:  
  
```  
// CS1660.cs delegate int MyDelegate(); class C { static void Main() { int i = delegate { return 1; };  // CS1660 // Try this instead: // MyDelegate myDelegate = delegate { return 1; }; // int i = myDelegate(); } }  
```