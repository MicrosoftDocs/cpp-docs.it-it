---
title: "Errore del compilatore CS0757 | Microsoft Docs"
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
  - "CS0757"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0757"
ms.assetid: ba093570-306d-4b7b-aad5-1a3855ad6776
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0757
Un metodo parziale non può avere più dichiarazioni di implementazione.  
  
 Un metodo parziale è costituito da una dichiarazione di definizione \(firma\) e da una o nessuna dichiarazione di implementazione \(corpo\). Non sono consentite più dichiarazioni di implementazione per le stesse dichiarazioni di definizione. I metodi parziali possono essere sottoposti a overload e ogni versione di overload può avere una o nessuna dichiarazione di implementazione.  
  
### Per correggere l'errore  
  
1.  Rimuovere tutte le dichiarazioni di implementazione tranne una per il metodo parziale.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0757:  
  
```  
// cs0757.cs using System; public partial class C { // Defining declaration. partial void Part(); // Implementing declaration. partial void Part() { //...Do something. } // Second implementing declaration. partial void Part() // CS0757 { //...Do something. } public static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)