---
title: "Avviso del compilatore (livello 4) C4208 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4208"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4208"
ms.assetid: 5cb0a36e-3fb5-422f-a5f9-e40b70776c27
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 4) C4208
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: delete \[esp\] \- esp valutato ma ignorato  
  
 Con le estensioni Microsoft \(\/Ze\), è possibile eliminare una matrice mediante un valore tra parentesi con l'[operatore delete](../../cpp/delete-operator-cpp.md).  Il valore viene ignorato.  
  
```  
// C4208.cpp  
// compile with: /W4  
int main()  
{  
   int * MyArray = new int[18];  
   delete [18] MyArray;      // C4208  
   MyArray = new int[18];  
   delete [] MyArray;        // ok  
}  
```  
  
 Tali valori non sono validi in compatibilità ANSI \([\/Za](../../build/reference/za-ze-disable-language-extensions.md)\).