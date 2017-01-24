---
title: "Errore del compilatore CS0154 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0154"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0154"
ms.assetid: 815150da-09b4-4593-825f-1dd435c92da8
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0154
Non è possibile usare la proprietà o l'indicizzatore 'property' in questo contesto perché manca la funzione di accesso get  
  
 Il tentativo di usare una [proprietà](../Topic/Using%20Properties%20\(C%23%20Programming%20Guide\).md) non è riuscito perché nella proprietà non è stato definito alcun metodo di funzione di accesso get. Per altre informazioni, vedere [Campi](../Topic/Fields%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0154:  
  
```  
// CS0154.cs public class MyClass2 { public int i { set { } // uncomment the get method to resolve this error /* get { return 0; } */ } } public class MyClass { public static void Main() { MyClass2 myClass2 = new MyClass2(); int j = myClass2.i;   // CS0154, no get method } }  
```