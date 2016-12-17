---
title: "Errore del compilatore CS0712 | Microsoft Docs"
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
  - "CS0712"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0712"
ms.assetid: cde64c0c-3953-4563-8c24-8b646230bbb8
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0712
Non è possibile creare un'istanza della classe statica 'static class'  
  
 Non è possibile creare istanze di classi statiche. Le classi statiche sono progettate per contenere metodi e campi di tipo statico, ma non possono essere usate per la creazione di istanze.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0712:  
  
```  
// CS0712.cs public static class SC { } public class CMain { public static void Main() { SC sc = new SC();  // CS0712 } }  
```