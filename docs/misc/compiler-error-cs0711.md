---
title: "Errore del compilatore CS0711 | Microsoft Docs"
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
  - "CS0711"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0711"
ms.assetid: 3a5a6d90-e15d-4808-a7a6-c85fd011a0d0
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0711
Le classi statiche non possono contenere distruttori  
  
 Non è possibile creare un'istanza di una classe statica, pertanto non è necessario specificare costruttori o distruttori. Per evitare l'errore, rimuovere qualsiasi distruttore dalle classi statiche. In alternativa, se si vuole poter costruire ed eliminare definitivamente istanze, dichiarare la classe non statica.  
  
 L'esempio seguente genera l'errore CS0711:  
  
```  
// CS0711.cs public static class C { ~C()  // CS0711 { } public static void Main() { } }  
```