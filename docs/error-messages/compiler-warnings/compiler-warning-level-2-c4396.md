---
title: Compilatore (livello 2) Avviso C4396 | Documenti di Microsoft
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
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 84f0628de933344eb23dc6325679abdcd3699c3a
ms.openlocfilehash: 8e0538cc5a1ec9279c4d84cb9e23e0d6fabfd77e
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-2-c4396"></a>Avviso del compilatore (livello 2) C4396
"name": impossibile utilizzare l'identificatore inline quando una dichiarazione Friend fa riferimento alla specializzazione di un modello di funzione  
  
 Una specializzazione di un modello di funzione non può specificare uno qualsiasi del [inline](../../cpp/inline-functions-cpp.md) identificatori. Il compilatore genera l'avviso C4396 e ignora l'identificatore inline.  
  
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
