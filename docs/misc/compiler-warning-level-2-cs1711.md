---
title: "Avviso del compilatore (livello 2) CS1711 | Microsoft Docs"
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
  - "CS1711"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1711"
ms.assetid: 0021275a-43eb-4295-929e-bb3283577a11
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS1711
Il commento XML in 'type' contiene un tag typeparam per 'parameter', ma non esiste alcun parametro di tipo con tale nome  
  
 La documentazione di un tipo generico include un tag per il parametro di tipo con il nome non corretto.  
  
## Esempio  
 Il codice seguente genera l'avviso CS1711.  
  
```  
// cs1711.cs // compile with: /doc:cs1711.xml // CS1711 expected using System; ///<typeparam name="WrongName">can be an int</typeparam> class CMain { public static void Main() { } }  
```