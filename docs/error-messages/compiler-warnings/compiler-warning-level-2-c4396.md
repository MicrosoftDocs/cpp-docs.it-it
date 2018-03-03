---
title: Compilatore (livello 2) Avviso C4396 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4396
dev_langs:
- C++
helpviewer_keywords:
- C4396
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bd40c2b78c12cff4b3904348c86dff1c7c3da0b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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