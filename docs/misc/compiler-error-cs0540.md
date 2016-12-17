---
title: "Errore del compilatore CS0540 | Microsoft Docs"
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
  - "CS0540"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0540"
ms.assetid: 2da2cd4a-0ff1-45ea-bb72-ea078bc95dea
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0540
'interface member': il tipo che lo contiene non implementa l'interfaccia 'interface'  
  
 Si è provato a implementare un membro di interfaccia in una [classe](../Topic/class%20\(C%23%20Reference\).md) che non deriva dall'[interfaccia](../Topic/interface%20\(C%23%20Reference\).md). È necessario eliminare l'implementazione del membro di interfaccia o aggiungere l'interfaccia all'elenco delle classi base della classe.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0540.  
  
```  
// CS0540.cs interface I { void m(); } public class Clx { void I.m() {}   // CS0540 } // OK public class Cly : I { void I.m() {} public static void Main() {} }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS0540.  
  
```  
// CS0540_b.cs using System; class C { void IDisposable.Dispose() {}   // CS0540 } class D : IDisposable { void IDisposable.Dispose() {} public void Dispose() {} static void Main() { using (D d = new D()) {} } }  
```