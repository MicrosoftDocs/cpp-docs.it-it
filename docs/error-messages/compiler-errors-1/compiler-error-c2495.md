---
title: "Errore del compilatore C2495 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2495"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2495"
ms.assetid: bb7066fe-3549-4901-97e4-157f3c04dd57
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2495
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': 'nothrow' può essere applicato solo a dichiarazioni o definizioni di funzione  
  
 L'attributo esteso [nothrow](../../cpp/nothrow-cpp.md) può essere applicato solo a definizioni o dichiarazioni di funzioni.  
  
 Il seguente codice di esempio genera l'errore C2495:  
  
```  
// C2495.cpp  
// compile with: /c  
__declspec(nothrow) class X {   // C2495  
   int m_data;  
} x;  
  
__declspec(nothrow) void test();   // OK  
```