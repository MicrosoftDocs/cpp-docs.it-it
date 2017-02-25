---
title: "Errore del compilatore C3389 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3389"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3389"
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3389
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile utilizzare \_\_declspec\(parola chiave\) con \/clr:pure o \/clr:safe  
  
 Un modificatore [\_\_declspec](../../cpp/declspec.md) utilizzato implica uno stato per processo.  [\/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md) implica uno stato [appdomain](../../cpp/appdomain.md).  Non sono pertanto consentite la dichiarazione di una variabile con il modificatore `keyword` **\_\_declspec** e la compilazione con **\/clr:pure**.  
  
 Il seguente codice di esempio genera l'errore C3389:  
  
```  
// C3389.cpp  
// compile with: /clr:pure /c  
__declspec(dllexport) int g2 = 0;   // C3389  
```