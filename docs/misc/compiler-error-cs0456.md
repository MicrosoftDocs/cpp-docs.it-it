---
title: "Errore del compilatore CS0456 | Microsoft Docs"
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
  - "CS0456"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0456"
ms.assetid: d714ec06-a7f4-405e-bf32-423696848319
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0456
Il parametro di tipo 'Type Parameter Name 1' ha il vincolo 'struct'. Non è quindi possibile usare 'Type Parameter Name 1' come vincolo per ''Type Parameter Name2'  
  
 I vincoli di tipo valore sono implicitamente sealed e non è quindi possibile usarli su un secondo parametro di tipo. I tipi valore, infatti, non possono essere sottoposti a override. Per risolvere questo errore, applicare un vincolo di tipo valore direttamente al secondo parametro di tipo, anziché eseguire l'operazione in modo indiretto tramite il primo parametro di tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0456.  
  
```  
// CS0456.cs // compile with: /target:library public class GenericsErrors { public class G5<T> where T : struct { public class N<U> where U : T {}   // CS0456 public class N2<U> where U : struct {}   // OK } }  
```