---
title: "Errore del compilatore C2582 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2582"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2582"
ms.assetid: ee1b9378-8bcd-4792-b87e-6d7a466d29ed
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C2582
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

funzione 'funzione' non disponibile in 'tipo'  
  
 È stato eseguito un tentativo di assegnazione a un oggetto che non dispone di un operatore di assegnazione.  
  
 Il seguente codice di esempio genera l'errore C2582:  
  
```  
// C2582.cpp  
// compile with: /clr  
using namespace System;  
  
struct N {};  
ref struct O {};  
ref struct R {  
   property O prop;   // C2582  
   property O ^ prop2;   // OK  
};  
  
int main() {  
   String ^ st1 = gcnew String("");  
   ^st1 = gcnew String("");   // C2582  
   st1 = "xxx";   // OK  
}  
```