---
title: "Avviso del compilatore (livello 2) CS0252 | Microsoft Docs"
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
  - "CS0252"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0252"
ms.assetid: ff82fbac-01cf-4ae9-b6a0-3aa990096b46
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0252
È probabile che il confronto dei riferimenti non sia intenzionale. Per confrontare i valori, eseguire il cast dell'espressione di sinistra sul tipo 'type'  
  
 Il compilatore sta effettuando un confronto dei riferimenti. Se si vuole confrontare il valore di stringhe, eseguire il cast della parte sinistra dell'espressione a `type`.  
  
 L'esempio seguente genera l'errore CS0252:  
  
```  
// CS0252.cs // compile with: /W:2 using System; class MyClass { public static void Main() { string s = "11"; object o = s + s; bool b = o == s;   // CS0252 // try the following line instead // bool b = (string)o == s; } }  
```