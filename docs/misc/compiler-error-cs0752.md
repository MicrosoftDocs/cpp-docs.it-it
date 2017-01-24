---
title: "Errore del compilatore CS0752 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0752"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0752"
ms.assetid: f9a373d6-31ed-42db-8206-80cbe9b8c546
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0752
Un metodo parziale non può avere parametri out  
  
 Un metodo parziale non può avere un parametro [out](../Topic/out%20\(C%23%20Reference\).md). I parametri out non sono consentiti perché se il metodo parziale viene rimosso dal compilatore, non è garantito che il parametro out venga assegnato.  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore out dal parametro e usare invece il valore restituito del metodo oppure rimuovere il modificatore parziale dalla dichiarazione di metodo.  
  
## Esempio  
 Il codice seguente genera l'errore CS0752:  
  
```  
// cs0752.cs public partial class C { partial void Part(out int num); // CS0752 // try the following line instead // partial void Part(int num); public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)