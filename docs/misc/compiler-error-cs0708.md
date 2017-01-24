---
title: "Errore del compilatore CS0708 | Microsoft Docs"
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
  - "CS0708"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0708"
ms.assetid: 19e1907f-b78c-4c8b-b78c-eedfd57115f2
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0708
'field': non è possibile dichiarare i membri di istanza in una classe statica  
  
 Questo errore si verifica se si dichiara un membro non statico in una classe dichiarata come statica. Non è possibile creare istanze di classi statiche, quindi le variabili di istanza non sarebbero significative. A tutti i membri delle classi statiche deve essere applicata la parola chiave **static**.  
  
 L'esempio seguente genera l'errore CS0708:  
  
```  
// CS0708.cs // compile with: /target:library public static class C { int i;  // CS0708 static int j;  // OK }  
```