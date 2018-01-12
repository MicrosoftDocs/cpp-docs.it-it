---
title: Errore del compilatore C2868 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2868
dev_langs: C++
helpviewer_keywords: C2868
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7255aa3e73e23109535ae0e83d6e9bd907cdbcd4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2868"></a>Errore del compilatore C2868  
  
> '*identificatore*': sintassi non valida per la dichiarazione using; previsto nome completo  
  
Oggetto [dichiarazione using](../../cpp/using-declaration.md) richiede un *nome completo*, un operatore di ambito (`::`) separati sequenza dei nomi dello spazio dei nomi, classe o di enumerazione che termina con il nome dell'identificatore. Un operatore di risoluzione ambito singolo può essere utilizzato per introdurre un nome dello spazio dei nomi globale.  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente genera l'errore C2868 e inoltre illustrato l'utilizzo corretto:  
  
```cpp  
// C2868.cpp  
class X {  
public:  
   int i;  
};  
  
class Y : X {  
public:  
   using X::i;   // OK  
};  
  
int main() {  
   using X;   // C2868  
}  
```