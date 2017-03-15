---
title: "Errore del compilatore C3656 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3656"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3656"
ms.assetid: 88965d85-73b0-4b35-8020-0650c9c94cd8
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3656
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'override': impossibile ripetere l'indicatore di override  
  
 La parola chiave di un override esplicito può essere specificata una sola volta.  Per ulteriori informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3656:  
  
```  
// C3656.cpp  
// compile with: /clr /c  
public interface struct O {  
   int f();  
};  
  
public ref struct V : O {  
   int f() override override { return 0; }   // C3656  
   // try the following line instead  
   // int f() override { return 0; }  
};  
```