---
title: "Avviso del compilatore (livello 2) CS0114 | Microsoft Docs"
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
  - "CS0114"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0114"
ms.assetid: 9647772b-d581-4620-981e-f9c607d4a1af
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0114
'function1' nasconde il membro ereditato 'function2'. Affinché il metodo corrente esegua l'override di tale implementazione, aggiungere la parola chiave override. In caso contrario, aggiungere la parola chiave new.  
  
 Una dichiarazione in una classe è in conflitto con una dichiarazione in una classe base in modo che il membro della classe base sia nascosto.  
  
 Per altre informazioni, vedere [base](../Topic/base%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0114:  
  
```  
// CS0114.cs // compile with: /W:2 /warnaserror abstract public class clx { public abstract void f(); } public class cly : clx { public void f() // CS0114, hides base class member // try the following line instead // override public void f() { } public static void Main() { } }  
```