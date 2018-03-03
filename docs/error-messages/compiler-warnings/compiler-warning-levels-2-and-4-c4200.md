---
title: Compilatore avviso (livelli 2 e 4) C4200 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4200
dev_langs:
- C++
helpviewer_keywords:
- C4200
ms.assetid: e44d6073-937f-42b7-acc1-65e802b475c6
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f160476deb2ab3e4ad0ff00100305c934dfb14c3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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