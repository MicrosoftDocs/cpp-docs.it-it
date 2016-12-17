---
title: "Errore del compilatore CS1562 | Microsoft Docs"
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
  - "CS1562"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1562"
ms.assetid: fbadbcc6-9cf2-4af6-b372-fd4e4da4402e
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1562
Per gli output senza origine occorre specificare l'opzione \/out  
  
 La compilazione potrebbe creare un file di output, ma non era presente alcun file del codice sorgente come input dal quale inferire il file di output. Ad esempio, è possibile che si stia tentando di compilare un file di soli metadati o di sole risorse.  
  
 Per specificare il nome del file di output, usare l'opzione del compilatore [\/out](../Topic/-out%20\(C%23%20Compiler%20Options\).md).