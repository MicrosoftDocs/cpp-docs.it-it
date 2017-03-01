---
title: C2397 errore del compilatore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2397
dev_langs:
- C++
ms.assetid: b418cf5a-d50d-4a6c-98a7-994ae35046d1
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 31f2b548fd13bc7702d44ef4a6d5dc5c34a5eb3c
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2397"></a>C2397 errore del compilatore
la conversione da 'tipo_1' a 'tipo_2' richiede una conversione di restrizione  
  
 È stata trovata una conversione di narrowing implicita quando si utilizza l'inizializzazione uniforme.  
  
 Il linguaggio C consente le conversioni di restrizione implicite nell'assegnazione e inizializzazione e C++ comporterà di conseguenza, anche se la restrizione imprevisto è una causa di molti errori di codice. Per rendere più sicuro il codice, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione di narrowing in un elenco di inizializzazione. In Visual C++, la diagnostica è C2397 errore del compilatore quando si utilizza l'inizio della sintassi supportata l'inizializzazione uniforme in Visual Studio 2015. Il compilatore genera [C4838 di avviso del compilatore (livello 1)](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md) quando si utilizza l'elenco o la sintassi di inizializzazione aggregata supportata da Visual Studio 2013.  
  
 Conversione di restrizione può essere corretta quando si conosce in grado di soddisfare la gamma di valori convertiti nella destinazione. In questo caso, saperne di più rispetto a quando il compilatore. Se si apporta una conversione di narrowing intenzionalmente, rendere esplicito intenzioni utilizzando un cast statico. In caso contrario, questo messaggio di errore indica quasi sempre che si dispone di un bug nel codice. È possibile correggere l'errore, verificare gli oggetti che è possibile inizializzare hanno tipi di dimensioni sufficienti per gestire gli input.  
  
 Nell'esempio seguente viene generato l'errore C2397 e viene illustrato un modo per risolvere questo problema:  
  
```  
// C2397.cpp -- C++ narrowing conversion diagnostics  
// Compile by using: cl /EHsc C2397.cpp  
#include <vector>   
  
struct S1 {  
    int m1;  
    double m2, m3;  
};  
  
void function_C2397(double d1) {  
    char c1 { 127 };          // OK  
    char c2 { 513 };          // error C2397  
  
    std::vector<S1> vS1;  
    vS1.push_back({ d1, 2, 3 }); // error C2397  
  
    // Possible fix if you know d1 always fits in an int  
    vS1.push_back({ static_cast<int>(d1), 2, 3 });   
}  
```
