---
title: "Errore del compilatore CS1632 | Microsoft Docs"
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
  - "CS1632"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1632"
ms.assetid: fa18061a-8c6c-4788-b74e-62bacb16aed8
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1632
Il controllo non può lasciare il corpo di un metodo anonimo o di un'espressione lambda  
  
 Questo errore si verifica se un'istruzione di salto \(**break**, `goto`, **continue**, ecc.\) tenta di spostare il controllo all'esterno di un blocco di metodi anonimi. Un blocco di metodi anonimi è un corpo della funzione e può essere terminato solo tramite un'istruzione return o raggiungendo la fine del blocco.  
  
 L'esempio seguente genera l'errore CS1632:  
  
```  
// CS1632.cs // compile with: /target:library delegate void MyDelegate(); class MyClass { public void Test() { for (int i = 0 ; i < 5 ; i++) { MyDelegate d = delegate { break;   // CS1632 }; } } }  
```