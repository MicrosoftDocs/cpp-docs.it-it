---
title: "Errore del compilatore CS0410 | Microsoft Docs"
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
  - "CS0410"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0410"
ms.assetid: a8b11042-9119-465e-abf6-235cbc7b8db5
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0410
Nessun overload per 'method' ha i tipi di parametro e i tipi restituiti corretti  
  
 Questo errore si verifica se si tenta di creare un'istanza di un delegato con una funzione che contiene i tipi di parametro errati. I tipi di parametro del delegato devono corrispondere alla funzione che si sta assegnando al delegato.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0410:  
  
```  
// CS0410.cs // compile with: /langversion:ISO-1 class Test { delegate void D(double d ); static void F(int i) { } static void Main() { D d = new D(F);  // CS0410 } }  
```