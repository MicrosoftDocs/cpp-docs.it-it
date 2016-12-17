---
title: "Errore del compilatore CS0073 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0073"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0073"
ms.assetid: 579ae534-59ab-4fc5-ad7e-f87639f3f9cd
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0073
Una funzione di accesso add o remove deve avere un corpo  
  
 Una parola chiave **add** o **remove** in una definizione [event](../Topic/event%20\(C%23%20Reference\).md) deve avere un corpo. Per altre informazioni, vedere [Eventi](../Topic/Events%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0073:  
  
```  
// CS0073.cs delegate void del(); class Test { public event del MyEvent { add;   // CS0073 // try the following lines instead // add // { //    MyEvent += value; // } remove { MyEvent -= value; } } public static void Main() { } }  
```