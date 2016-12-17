---
title: "Errore del compilatore CS1104 | Microsoft Docs"
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
  - "CS1104"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1104"
ms.assetid: 65bfe85f-8dd1-4aed-bcd1-1f7e0635868c
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1104
Non è possibile usare una matrice di parametri con il modificatore 'this' in un metodo di estensione.  
  
 Il primo parametro di un metodo di estensione non può essere una matrice di parametri.  
  
### Per correggere l'errore  
  
1.  Tenere presente che il primo parametro di una definizione di metodo di estensione specifica il tipo che verrà "esteso" dal metodo. Non è un parametro di input. Non è quindi opportuno inserire una matrice di parametri in questa posizione. Se è necessario passare una matrice di parametri, impostarla come secondo parametro.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1104:  
  
```  
// cs1104.cs // Compile with: /target:library public static class Extensions { public static void Test<T>(this params T[] tArr) {} // CS1104 }   
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [params](../Topic/params%20\(C%23%20Reference\).md)