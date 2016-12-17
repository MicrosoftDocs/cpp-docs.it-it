---
title: "Errore del compilatore CS0738 | Microsoft Docs"
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
  - "CS0738"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0738"
ms.assetid: 01ce94ee-2435-4326-befc-2b020c441a4f
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0738
'type name' non implementa il membro di interfaccia 'member name'. 'method name' non può implementare 'interface member' perché non ha il tipo restituito corrispondente di 'type name'.  
  
 Il valore restituito di un metodo di implementazione in una classe deve corrispondere al valore restituito del membro di interfaccia che implementa.  
  
### Per correggere l'errore  
  
1.  Modificare il tipo restituito del metodo affinché corrisponda a quello del membro di interfaccia.  
  
## Esempio  
 Il codice seguente genera l'errore CS0738 perché il metodo di classe restituisce `void` e il membro di interfaccia con lo stesso nome restituisce `int`:  
  
```  
using System; interface ITest { int TestMethod(); } public class Test: ITest { public void TestMethod() { } // CS0738 // Try the following line instead. // public int TestMethod(); }  
```  
  
## Vedere anche  
 [Interfacce](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md)