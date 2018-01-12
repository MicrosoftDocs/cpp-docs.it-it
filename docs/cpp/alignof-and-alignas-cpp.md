---
title: alignof e alignas (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
ms.assetid: 1d18aa8a-9621-4fb5-86e5-4cc86d5187f4
caps.latest.revision: "2"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8a506a3c44c3304e786c41a2eb049939d317778e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="alignof-and-alignas-c"></a>alignof e alignas (C++)
L'identificatore di tipo `alignas` è la soluzione standard portabile di C++ per specificare l'allineamento personalizzato di variabili e tipi definiti dall'utente. Analogamente, l'operatore `alignof` è una soluzione standard portabile per ottenere l'allineamento di un tipo o di una variabile specificata.  
  
## <a name="example"></a>Esempio  
 È possibile usare `alignas` su una classe, uno struct o un'unione oppure su singoli membri. Se vengono rilevato più identificatori `alignas`, il compilatore sceglierà quello più rigoroso, ovvero quello con il valore maggiore.  
  
```cpp  
// alignas_alignof.cpp
// compile with: cl /EHsc alignas_alignof.cpp
#include <iostream>

struct alignas(16) Bar  
{      
    int i;       // 4 bytes  
    int n;      // 4 bytes  
    alignas(4) char arr[3];  
    short s;          // 2 bytes  
};  

int main()
{  
    std::cout << alignof(Bar) << std::endl; // output: 16  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Allineamento](../cpp/alignment-cpp-declarations.md)