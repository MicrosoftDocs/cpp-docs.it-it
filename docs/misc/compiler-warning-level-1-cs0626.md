---
title: "Avviso del compilatore (livello 1) CS0626 | Microsoft Docs"
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
  - "CS0626"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0626"
ms.assetid: 2cd5061c-80e7-48d3-8d14-be7fc642af94
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0626
Il metodo, la funzione di accesso o l'operatore 'method' è contrassegnato come esterno e non include attributi. Provare ad aggiungere un attributo DllImport per specificare l'implementazione esterna  
  
 Un metodo contrassegnato come `extern` deve essere contrassegnato anche con un attributo, ad esempio l'attributo [DllImport](frlrfSystemRuntimeInteropServicesDllImportAttributeClassTopic).  
  
 L'attributo specifica dove viene implementato il metodo. Il programma avrà bisogno di queste informazioni in fase di esecuzione.  
  
 L'esempio seguente genera l'errore CS0626:  
  
```  
// CS0626.cs // compile with: /warnaserror using System.Runtime.InteropServices; public class MyClass { static extern public void M(); // CS0626 // try the following line // [DllImport("mydll.dll")] static extern public void M(); public static void Main() { } }  
```