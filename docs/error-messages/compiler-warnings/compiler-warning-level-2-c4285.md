---
title: Compilatore avviso (livello 2) C4285 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4285
dev_langs:
- C++
helpviewer_keywords:
- C4285
ms.assetid: fa14de1f-fc19-4eec-8bea-81003636e12f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 85f7904eb3a570b8f348503277117167a624a0d1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-2-c4285"></a>Avviso del compilatore (livello 2) C4285
tipo restituito per 'Identifier:: operator ->' è ricorsivo se applicato utilizzando la notazione infissa  
  
 Specificato **operator -> ()** funzione non può restituire il tipo per cui è definita o un riferimento al tipo per cui è definito.  
  
 L'esempio seguente genera l'errore C4285:  
  
```  
// C4285.cpp  
// compile with: /W2  
class C  
{  
public:  
    C operator->();   // C4285  
   // C& operator->();  C4285, also  
};  
  
int main()  
{  
}  
```