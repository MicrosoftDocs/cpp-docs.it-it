---
title: Compilatore avviso (livelli 2 e 4) C4200 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4200
dev_langs:
- C++
helpviewer_keywords:
- C4200
ms.assetid: e44d6073-937f-42b7-acc1-65e802b475c6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6ffc789c3c4da5caf50f0657e17ddabe40a5773c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-levels-2-and-4-c4200"></a>Avviso del compilatore (livelli 2 e 4) C4200
usata estensione non standard: matrice di dimensioni zero in struct/union  
  
 Una struttura o un'unione contiene una matrice di dimensioni pari a zero.  
  
 La dichiarazione di una matrice con dimensione zero è un'estensione Microsoft. L'avviso è di livello 2 quando viene compilato un file C++ e di livello 4 quando viene compilato un file C. La compilazione C++ fornisce inoltre l'avviso: "Impossibile generare un operatore di costruttore di copia o di assegnazione copia se un tipo definito dall'utente contiene una matrice di dimensioni zero". Questo esempio genera l'avviso C4200:  
  
```cpp  
// C4200.cpp  
// compile by using: cl /W4 c4200.cpp  
struct A {  
    int a[0];  // C4200  
};  
int main() {  
}  
```  
  
 Questa estensione non standard viene spesso usata per interfacciare il codice con le strutture di dati esterni che hanno una lunghezza variabile. Se questo scenario si applica al codice, è possibile disabilitare l'avviso:  
  
## <a name="example"></a>Esempio  
  
```cpp  
// C4200b.cpp  
// compile by using: cl /W4 c4200a.cpp  
#pragma warning(disable : 4200)  
struct A {  
    int a[0];  
};  
int main() {  
}  
```