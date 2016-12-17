---
title: "Errore del compilatore CS1725 | Microsoft Docs"
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
  - "cs1725"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1725"
ms.assetid: baef9ae3-b036-41d6-972c-9f3cdae1e8bd
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1725
Il riferimento all'assembly Friend 'reference' non è valido. Nelle dichiarazioni InternalsVisibleTo non è possibile specificare la versione, le impostazioni cultura, il token di chiave pubblica o l'architettura del processore.  
  
 Non è possibile aggiungere le impostazioni cultura della versione in un riferimento all'assembly friend. Le classi parziali devono essere visibili negli assembly di tipo friend.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1725.  
  
```  
// CS1725.cs // compile with: /target:library using System.Runtime.CompilerServices; [assembly:InternalsVisibleTo("partial01,version=1.1.0.0")]   // CS1725 // try the following line instead // [assembly:InternalsVisibleTo("partial01")] partial class TestClass { public static string strBar = "my string"; }  
```  
  
## Vedere anche  
 [Procedura: creare assembly Friend firmati](../Topic/How%20to:%20Create%20Signed%20Friend%20Assemblies%20\(C%23%20and%20Visual%20Basic\).md)