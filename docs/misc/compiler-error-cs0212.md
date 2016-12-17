---
title: "Errore del compilatore CS0212 | Microsoft Docs"
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
  - "CS0212"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0212"
ms.assetid: 1b8973b8-03c9-42a6-bf61-2e401b89387e
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0212
È possibile accettare l'indirizzo di un'espressione unfixed solo all'interno dell'inizializzatore di un'istruzione fixed  
  
 Per altre informazioni, vedere [Codice unsafe e puntatori](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente mostra come accettare l'indirizzo di un'espressione unfixed. L'esempio seguente genera l'errore CS0212.  
  
```  
// CS0212a.cs // compile with: /unsafe /target:library public class A { public int iField = 5; unsafe public void M() { A a = new A(); int* ptr = &a.iField;   // CS0212 } // OK unsafe public void M2() { A a = new A(); fixed (int* ptr = &a.iField) {} } }  
```  
  
 Anche l'esempio seguente genera l'errore CS0212 e illustrato come risolvere l'errore:  
  
```  
// CS0212b.cs // compile with: /unsafe /target:library using System; public class MyClass { unsafe public void M() { // Null-terminated ASCII characters in an sbyte array sbyte[] sbArr1 = new sbyte[] { 0x41, 0x42, 0x43, 0x00 }; sbyte* pAsciiUpper = &sbArr1[0];   // CS0212 // To resolve this error, delete the previous line and // uncomment the following code: // fixed (sbyte* pAsciiUpper = sbArr1) // { //    String szAsciiUpper = new String(pAsciiUpper); // } } }  
```