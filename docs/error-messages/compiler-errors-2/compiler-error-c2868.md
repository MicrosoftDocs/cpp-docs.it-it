---
title: Errore del compilatore C2868 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2868
dev_langs:
- C++
helpviewer_keywords:
- C2868
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 84465453ca7a1d76a9dd6b199232384c2ef9124b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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