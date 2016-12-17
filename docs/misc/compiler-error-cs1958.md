---
title: "Errore del compilatore CS1958 | Microsoft Docs"
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
  - "CS1958"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1958"
ms.assetid: bb6f3bb2-ea93-4d2e-984c-da9c99f5653f
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1958
Le espressioni dell'inizializzatore di oggetto e di raccolta non possono essere applicate a un'espressione di creazione del delegato  
  
 A differenza di una classe o di uno struct, un delegato è privo di membri, per cui un inizializzatore di oggetto non ha nulla da inizializzare. Se si verifica questo errore, è probabile che siano presenti parentesi graffe dopo l'espressione di creazione del delegato. È sufficiente rimuovere le parentesi graffe per eliminare l'errore.  
  
### Per correggere l'errore  
  
1.  Rimuovere le parentesi graffe.  
  
## Esempio  
 Il codice seguente genera l'errore CS1958:  
  
```  
// cs1958.cs public class MemberInitializerTest { delegate void D<T>(); public static void GenericMethod<T>() { } public static void Run() { D<int> genD = new D<int>(GenericMethod<int>) { }; // CS1958 // Try the following line instead // D<int> genD = new D<int>(GenericMethod<int>); } }  
```