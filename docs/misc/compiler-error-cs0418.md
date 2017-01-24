---
title: "Errore del compilatore CS0418 | Microsoft Docs"
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
  - "CS0418"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0418"
ms.assetid: b78fafde-428b-4fa2-a933-c4614760bb71
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0418
'class name': una classe astratta non può essere di tipo sealed o static  
  
 Non è possibile usare una classe astratta per creare oggetti, a meno che non sia derivata, per cui non ha senso che sia di tipo sealed. Altrettanto privo di significato è che la classe astratta sia di tipo static. Le classi astratte, infatti, sono progettate per supportare una gerarchia di oggetti che userà la classe astratta come base.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0418:  
  
```  
// CS0418.cs public abstract sealed class C  // CS0418 { } sealed static class S  // CS0418 { } public class MyClass { public static void Main() { } }  
```