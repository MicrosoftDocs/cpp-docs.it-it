---
title: "Errore del compilatore CS0438 | Microsoft Docs"
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
  - "CS0438"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0438"
ms.assetid: 92c91ecb-8d6a-4850-84eb-c095c3c957f1
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0438
Il tipo 'type' in 'module\_1' è in conflitto con lo spazio dei nomi 'namespace' in 'module\_2'.  
  
 Questo errore si verifica quando un tipo in un file di origine è in conflitto con uno spazio dei nomi in un altro file di origine. Questo accade solitamente quando uno o entrambi gli elementi provengono da un modulo aggiunto. Per risolvere il problema, rinominare il tipo o lo spazio dei nomi che ha causato il conflitto.  
  
 L'esempio seguente genera l'errore CS0438:  
  
 Compilare innanzitutto il file:  
  
```  
// CS0438_1.cs // compile with: /target:module public class Util { public class A { } }  
```  
  
 Compilare quindi il file:  
  
```  
// CS0438_2.cs // compile with: /target:module namespace Util { public class A { } }  
```  
  
 Infine compilare il file:  
  
```  
// CS0438_3.cs // compile with: /addmodule:CS0438_1.netmodule /addmodule:CS0438_2.netmodule using System; public class Test { public static void Main() { Console.WriteLine(typeof(Util.A));   // CS0438 } }  
  
```