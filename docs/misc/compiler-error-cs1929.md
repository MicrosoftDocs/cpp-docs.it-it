---
title: "Errore del compilatore CS1929 | Microsoft Docs"
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
  - "CS1929"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1929"
ms.assetid: effdd5d4-e156-418b-9d45-4ca194ab4319
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1929
Argomento dell'istanza: impossibile eseguire la conversione da 'typeA' a 'typeB'.  
  
 Questo errore viene generato quando si prova a richiamare un metodo di estensione da una classe non estesa dal metodo. Nell'esempio che segue, il metodo di estensione è definito per la classe derivata `A`, ma non per la classe base `B`.  
  
### Per correggere l'errore  
  
1.  Creare un nuovo metodo di estensione per il tipo in cui occorre richiamarlo oppure passare la chiamata a un oggetto del tipo esteso dal metodo esistente.  
  
## Esempio  
 Il codice seguente genera gli errori CS1928 e CS1929:  
  
```  
// cs1929.cs using System.Linq; using System.Collections; static class Ext { public static void ExtMethod(this A a) { } } class A : B { } class B { static void Main() { B b = new B(); b.ExtMethod(); // CS1929 } }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)