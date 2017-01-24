---
title: "Errore del compilatore CS0737 | Microsoft Docs"
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
  - "CS0737"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0737"
ms.assetid: d2247770-5546-46f2-a01d-8e2ebfcbb859
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0737
'type name' non implementa il membro di interfaccia 'member name'. 'method name' non può implementare un membro di interfaccia perché non è pubblico.  
  
 Un metodo che implementa un membro di interfaccia deve avere accessibilità pubblica. Tutti i membri di interfaccia sono `public`.  
  
### Per correggere l'errore  
  
1.  Aggiungere il modificatore di accesso [public](../Topic/public%20\(C%23%20Reference\).md) al metodo.  
  
## Esempio  
 Il codice seguente genera l'errore CS0737:  
  
```  
// cs0737.cs interface ITest { // Default access of private with no modifier. int Return42(); // Try the following line instead. // public int Return42(); } struct Struct1 : ITest // CS0737 { int Return42() { return (42); } } public class Test { public static int Main(string[] args) { Struct1 s1 = new Struct1(); return (1); } }  
```  
  
## Vedere anche  
 [Interfacce](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md)