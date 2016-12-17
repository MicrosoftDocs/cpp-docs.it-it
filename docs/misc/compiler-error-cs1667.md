---
title: "Errore del compilatore CS1667 | Microsoft Docs"
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
  - "CS1667"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1667"
ms.assetid: 59f64828-58bc-487c-862a-75537e21d4ea
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1667
L'attributo 'attribute' non è valido nelle funzioni di accesso a proprietà o eventi. È valido solo nelle dichiarazioni 'declaration type'.  
  
 Questo errore si verifica se si usa un attributo in una funzione di accesso a una proprietà o a un evento, invece che nella proprietà o nell'evento stesso. Questo errore potrebbe verificarsi con gli attributi <xref:System.CLSCompliantAttribute>, <xref:System.Diagnostics.ConditionalAttribute> e <xref:System.ObsoleteAttribute>.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1670:  
  
```  
// CS1667.cs using System; public class C { private int i; //Try this instead: //[Obsolete] public int ObsoleteProperty { [Obsolete]  // CS1667 get { return i; } set { i = value; } } public static void Main() { } }  
```