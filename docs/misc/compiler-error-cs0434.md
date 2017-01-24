---
title: "Errore del compilatore CS0434 | Microsoft Docs"
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
  - "CS0434"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0434"
ms.assetid: 8f8871fc-a4bb-4a9e-ba19-999f4943001e
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0434
Lo spazio dei nomi NomeSpazionomi1 in NomeSpazionomi2 è in conflitto con il tipo NomeTipo1 in NomeSpazionomi3  
  
 Questo errore si verifica quando il tipo importato e lo spazio dei nomi importato hanno lo stesso nome completo. Quando viene fatto riferimento al nome, il compilatore non riesce a distinguere tra i due elementi. Se è possibile modificare il codice sorgente importato, è possibile risolvere l'errore modificando il nome del tipo o lo spazio dei nomi in modo che entrambi siano univoci all'interno dell'assembly.  
  
 Il codice seguente genera l'errore CS0434.  
  
## Esempio  
 Il codice riportato di seguito genera la prima copia del tipo con il nome completo identico.  
  
```  
// CS0434_1.cs // compile with: /t:library namespace TypeBindConflicts { namespace NsImpAggPubImp { public class X { } } }  
```  
  
## Esempio  
 Il codice riportato di seguito genera la seconda copia del tipo con il nome completo identico.  
  
```  
// CS0434_2.cs // compile with: /t:library namespace TypeBindConflicts { // Conflicts with another import (import2.cs). public class NsImpAggPubImp { } // Try this instead: // public class UniqueClassName { } }  
```  
  
## Esempio  
 Il codice riportato di seguito fa riferimento al tipo con il nome completo identico.  
  
```  
// CS0434.cs // compile with: /r:cs0434_1.dll /r:cs0434_2.dll using TypeBindConflicts; public class Test { public TypeBindConflicts.NsImpAggPubImp.X n2 = null; // CS0434 }  
```