---
title: "Avviso del compilatore C4936 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4936"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4936"
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4936
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

questo \_\_declspec è supportato solo con la compilazione con \/clr o \/clr:pure  
  
 È stato usato un modificatore `__declspec`, ma tale modificatore `__declspec` è valido solo quando viene compilato con una delle opzioni [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).  
  
 C4936 viene sempre generato come errore.  È possibile disabilitare C4936 con il pragma [warning](../../preprocessor/warning.md).  
  
 L'esempio seguente genera l'avviso C4936:  
  
```  
// C4936.cpp // compile with: /c // #pragma warning (disable : 4936) __declspec(process) int i;   // C4936 __declspec(appdomain) int j;   // C4936  
```