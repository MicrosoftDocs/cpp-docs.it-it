---
title: "Errore del compilatore CS0250 | Microsoft Docs"
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
  - "CS0250"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0250"
ms.assetid: a994f361-6287-4db0-9ce1-e293a8190049
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0250
Non chiamare direttamente il metodo Finalize della classe base. Viene chiamato automaticamente dal distruttore.  
  
 Un programma non può provare a forzare la pulizia delle risorse della classe base.  
  
 Per altre informazioni, vedere [Metodi Finalize e distruttori](http://msdn.microsoft.com/it-it/fd376774-1643-499b-869e-9546a3aeea70).  
  
 L'esempio seguente genera l'errore CS0250  
  
```  
// CS0250.cs class B { } class C : B { ~C() { base.Finalize();   // CS0250 } public static void Main() { } }  
```