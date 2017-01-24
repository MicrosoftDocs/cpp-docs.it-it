---
title: "Errore del compilatore CS0275 | Microsoft Docs"
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
  - "CS0275"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0275"
ms.assetid: 4d59f11c-b0ea-4c91-b2cb-cbe3be9a9ba2
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0275
'accessor': i modificatori di accessibilità non possono essere usati in funzioni di accesso in un'interfaccia  
  
 Questo errore si verifica quando si usa un modificatore di accesso in una qualsiasi delle funzioni di accesso di una proprietà o di un indicizzatore in un'interfaccia. Per risolvere il problema, rimuovere il modificatore di accesso.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0275:  
  
```  
// CS0275.cs public interface MyInterface { int Property { get; internal set;   // CS0275 } }  
```