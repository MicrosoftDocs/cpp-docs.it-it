---
title: "Errore del compilatore CS0075 | Microsoft Docs"
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
  - "CS0075"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0075"
ms.assetid: 5084d260-705e-4ff5-8f7a-7f74052fcbbb
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0075
Per eseguire il cast di un valore negativo, è necessario racchiuderlo tra parentesi  
  
 Se si esegue il cast usando una parola chiave che identifica un tipo predefinito, le parentesi non sono necessarie. In caso contrario, è necessario inserire le parentesi, altrimenti \(x\) –y non verrà considerata un'espressione cast. Dalla Specifica del linguaggio C\#, sezione 7.6.6:  
  
 *Dalla regola per la risoluzione dell'ambiguità segue che, se x e y sono identificatori, \(x\)y, \(x\)\(y\) e \(x\)\(\-y\) saranno espressioni cast, ma non \(x\)\-y, anche se x identifica un tipo. Tuttavia, se x è una parola chiave che identifica un tipo predefinito, ad esempio int, tutte e quattro le forme sono espressioni cast, perché una parola chiave di questo tipo non può costituire da sola un'espressione.*  
  
 Il codice seguente genera l'errore CS0075:  
  
```  
// CS0075 namespace MyNamespace { enum MyEnum { } public class MyClass { public static void Main() { // To fix the error, place the negative // values below in parentheses int i = (System.Int32) - 4; //CS0075 MyEnum e = (MyEnum) - 1;    //CS0075 System.Console.WriteLine(i); //to avoid warning System.Console.WriteLine(e); //to avoid warning } } }  
```  
  
## Vedere anche  
 [Cast e conversioni di tipi \(C\#\)](../Topic/Casting%20and%20Type%20Conversions%20\(C%23%20Programming%20Guide\).md)