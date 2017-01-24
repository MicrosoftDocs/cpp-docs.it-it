---
title: "Errore del compilatore CS0208 | Microsoft Docs"
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
  - "CS0208"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0208"
ms.assetid: 03534893-1522-4dab-9822-8b9ed97b3bd0
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0208
Non è possibile accettare l'indirizzo di un tipo gestito \('type'\), recuperarne la dimensione o dichiarare un puntatore a esso  
  
 Anche quando si usa con la parola chiave [unsafe](../Topic/unsafe%20\(C%23%20Reference\).md), non è consentito accettare l'indirizzo e recuperare la dimensione di un oggetto gestito o dichiarare un puntatore a un tipo gestito. Un tipo gestito è:  
  
-   qualsiasi tipo riferimento  
  
-   qualsiasi struct che contenga un tipo riferimento come campo o proprietà  
  
 Per altre informazioni, vedere [Codice unsafe e puntatori](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md) e [sizeof](../Topic/sizeof%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0208:  
  
```  
// CS0208.cs // compile with: /unsafe class myClass { public int a = 98; } struct myProblemStruct { string s; float f; } struct myGoodStruct { int i; float f; } public class MyClass { unsafe public static void Main() { // myClass is a class, a managed type. myClass s = new myClass(); myClass* s2 = &s;    // CS0208 // The struct contains a string, a managed type. int i = sizeof(myProblemStruct); //CS0208 // The struct contains only value types. i = sizeof(myGoodStruct); //OK } }  
  
```  
  
## Vedere anche  
 [sizeof](../Topic/sizeof%20\(C%23%20Reference\).md)