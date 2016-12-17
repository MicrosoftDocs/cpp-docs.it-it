---
title: "Avviso del compilatore (livello 2) CS1927 | Microsoft Docs"
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
  - "CS1927"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1927"
ms.assetid: 32b4e58f-668c-4596-9529-7f3a293ff4ac
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS1927
L'opzione \/win32manifest per il modulo verrà ignorata perché si applica solo agli assembly.  
  
 Un manifesto win32 viene applicato solo a livello di assembly. Il modulo verrà compilato, ma non avrà un manifesto.  
  
### Per correggere l'errore  
  
1.  Rimuovere l'**\/win32manifest option**.  
  
2.  Compilare il codice come assembly.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1927 quando viene compilato con entrambe le opzioni del compilatore **\/target:module** e **\/win32manifest**.  
  
```  
// cs1927.cs // Compile with: /target:module /win32manifest using System; class ManifestWithModule { static int Main() { return 1; } }  
```  
  
## Vedere anche  
 [\/win32manifest \(Import a Custom Win32 Manifest File\)](../Topic/-win32manifest%20\(C%23%20Compiler%20Options\).md)   
 [\/target:module \(Create Module to Add to Assembly\)](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md)