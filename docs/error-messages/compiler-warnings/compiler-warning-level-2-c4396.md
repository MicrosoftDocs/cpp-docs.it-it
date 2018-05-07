---
title: Compilatore (livello 2) Avviso C4396 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4396
dev_langs:
- C++
helpviewer_keywords:
- C4396
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b937b6ecebedc6984279502a5f64b287f09bd2d9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-2-c4396"></a>Avviso del compilatore (livello 2) C4396
"name": impossibile utilizzare l'identificatore inline quando una dichiarazione Friend fa riferimento alla specializzazione di un modello di funzione  
  
 Una specializzazione di un modello di funzione non è possibile specificare qualsiasi il [inline](../../cpp/inline-functions-cpp.md) identificatori. Il compilatore genera l'avviso C4396 e ignora l'identificatore inline.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Rimuovere l'identificatore `inline`, `__inline`o `__forceinline` dalla dichiarazione di funzione Friend.  
  
## <a name="example"></a>Esempio  
 Il codice di esempio seguente mostra una dichiarazione di funzione Friend non valida con un identificatore `inline` .  
  
```  
// C4396.cpp  
// compile with: /W2 /c  
  
class X;   
template<class T> void Func(T t, int i);  
  
class X {  
    friend inline void Func<char>(char t, int i);  //C4396  
// try the following line instead  
//    friend void Func<char>(char t, int i);   
    int i;  
};  
```