---
title: "Errore del compilatore CS1527 | Microsoft Docs"
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
  - "CS1527"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1527"
ms.assetid: a0d52130-d6da-41bb-b153-8e96cbb7e316
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1527
Gli elementi definiti in uno spazio dei nomi non possono essere dichiarati in modo esplicito come private, protected o protected internal  
  
 Le dichiarazioni di tipo in uno spazio dei nomi possono avere accesso [public](../Topic/public%20\(C%23%20Reference\).md) o [internal](../Topic/internal%20\(C%23%20Reference\).md). Se non è specificata alcuna accessibilità, l'impostazione predefinita è **internal**.  
  
 L'esempio seguente genera l'errore CS1527:  
  
```  
// CS1527.cs namespace Sample { private class C1 {};             // CS1527 protected class C2 {};           // CS1527 protected internal class C3 {};  // CS1527 }  
```  
  
 L'esempio seguente genera l'errore CS1527 perché quando nessuno spazio dei nomi è dichiarato in modo esplicito nel codice programma, tutte le dichiarazioni di tipo si trovano in modo implicito nello spazio dei nomi globale.  
  
```  
//cs1527_2.cs using System; protected class C4{} private struct S1{}  
```  
  
## Vedere anche  
 [Spazi dei nomi](../Topic/Namespaces%20\(C%23%20Programming%20Guide\).md)   
 [global](../Topic/global%20\(C%23%20Reference\).md)   
 [Operatore ::](../Topic/::%20Operator%20\(C%23%20Reference\).md)   
 [Dominio di accessibilità](../Topic/Accessibility%20Domain%20\(C%23%20Reference\).md)   
 [Modificatori di accesso](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md)