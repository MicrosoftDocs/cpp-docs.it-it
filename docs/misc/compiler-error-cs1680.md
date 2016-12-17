---
title: "Errore del compilatore CS1680 | Microsoft Docs"
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
  - "CS1680"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1680"
ms.assetid: 973da155-e6fa-4de8-94fd-7838f839a81f
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1680
Opzione dell'alias di riferimento non valida: 'alias\='. Nome file mancante.  
  
 Questo errore di verifica quando si usa la funzionalità `alias` con l'opzione del compilatore **\/reference** senza specificare un nome file valido.  
  
 L'esempio seguente genera l'errore CS1680.  
  
```  
// CS1680.cs // compile with: /reference:alias= // CS1680 expected // To resolve, specify the name of a file with an assembly manifest class MyClass {}  
  
```