---
title: "Errore del compilatore CS0644 | Microsoft Docs"
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
  - "CS0644"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0644"
ms.assetid: 835f3ee2-f897-4ba2-ad13-af629a9ab7fe
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0644
'class1' non può derivare dalla classe speciale 'class2'  
  
 Le classi non possono ereditare in modo esplicito da una qualsiasi delle classi base seguenti:  
  
-   **System.Enum**  
  
-   **System.ValueType**  
  
-   **System.Delegate**  
  
-   **System.Array**  
  
 Queste classi vengono usate come classi base implicite dal compilatore. Ad esempio, **System.ValueType** è la classe base implicita degli struct.  
  
 L'esempio seguente genera l'errore CS0644:  
  
```  
// CS0644.cs class MyClass : System.ValueType   // CS0644 { }  
```