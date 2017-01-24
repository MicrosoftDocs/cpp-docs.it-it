---
title: "alignof e alignas (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 1d18aa8a-9621-4fb5-86e5-4cc86d5187f4
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# alignof e alignas (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'identificatore di tipo `alignas` è la soluzione standard portabile di C\+\+ per specificare l'allineamento personalizzato di variabili e tipi definiti dall'utente.  Analogamente, l'operatore `alignof` è una soluzione standard portabile per ottenere l'allineamento di un tipo o di una variabile specificata.  
  
## Esempio  
 È possibile usare `alignas` su una classe, uno struct o un'unione oppure su singoli membri.  Se vengono rilevato più identificatori `alignas`, il compilatore sceglierà quello più rigoroso, ovvero quello con il valore maggiore.  
  
```  
struct alignas(16) Bar  
{      
    int i;       // 4 bytes  
    int n;      // 4 bytes  
    alignas(4) char arr[3];  
    short s;          // 2 bytes  
};  
…  
cout << alignof(Bar) << endl; // output: 16  
  
```  
  
## Vedere anche  
 [Allineamento](../cpp/alignment-cpp-declarations.md)