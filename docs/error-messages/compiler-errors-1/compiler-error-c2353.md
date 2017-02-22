---
title: "Errore del compilatore C2353 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2353"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2353"
ms.assetid: d57f8f77-d9b1-4bba-a940-87ec269ad183
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2353
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

specifica di eccezione non consentita  
  
 Le specifiche di eccezione non sono consentite nelle funzioni membro delle classi gestite.  
  
 Il seguente codice di esempio genera l'errore C2353:  
  
```  
// C2353.cpp  
// compile with: /clr /c  
ref class X {  
   void f() throw(int);   // C2353  
   void f();   // OK  
};  
```