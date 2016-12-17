---
title: "Errore del compilatore CS0442 | Microsoft Docs"
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
  - "CS0442"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0442"
ms.assetid: a411660d-0db6-4b63-b19e-f4538fc201e5
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0442
'Property': le proprietà astratte non possono avere funzioni di accesso private  
  
 Questo errore si verifica quando si usa il modificatore di accesso "private" per modificare una funzione di accesso astratta. Per risolvere il problema, usare un modificatore di accesso diverso oppure impostare la proprietà come non astratta.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0442:  
  
```  
// CS0442.cs public abstract class MyClass { public abstract int AbstractProperty { get; private set;   // CS0442 // Try this instead: // set; } }  
```