---
title: "Errore del compilatore CS1665 | Microsoft Docs"
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
  - "CS1665"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1665"
ms.assetid: 93d4a4af-23c3-4730-a778-77852e41db4d
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1665
La lunghezza dei buffer a dimensione fissa deve essere maggiore di zero  
  
 Questo errore si verifica se la lunghezza di un buffer di dimensione fissa viene dichiarata come negativa o pari a zero. La lunghezza di un buffer di dimensione fissa deve essere un valore integer positivo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1665.  
  
```  
// CS1665.cs // compile with: /unsafe /target:library struct S { public unsafe fixed int A[0];   // CS1665 }  
```