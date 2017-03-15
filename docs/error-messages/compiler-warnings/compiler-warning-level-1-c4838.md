---
title: Compilatore (livello 1) Avviso C4838 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4838
dev_langs:
- C++
helpviewer_keywords:
- C4838
ms.assetid: fea07924-5feb-4ed4-99b5-1a8c41d28db6
caps.latest.revision: 4
author: corob-msft
ms.author: corob
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 227af1840fe5aee63545e35456fe09749f00de1d
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4838"></a>Compilatore (livello 1) Avviso C4838
la conversione da 'tipo_1' a 'tipo_2' richiede una conversione di restrizione  
  
 È stata trovata una conversione implicita verso quando si utilizza l'inizializzazione di aggregazione o elenco.  
  
 Il linguaggio C consente le conversioni di restrizione implicite nell'assegnazione e inizializzazione e C++ comporterà di conseguenza, anche se la restrizione imprevisto è una causa di molti errori di codice. Per rendere più sicuro il codice, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione di narrowing in un elenco di inizializzazione. In Visual C++, la diagnostica è [C2397 errore del compilatore](../../error-messages/compiler-errors-1/compiler-error-c2397.md) quando si utilizza la sintassi di inizializzazione uniforme supportata a partire da Visual Studio 2015. Il compilatore genera l'avviso C4838 quando si utilizza l'elenco o la sintassi di inizializzazione aggregata supportata da Visual Studio 2013.  
  
 Conversione di restrizione può essere corretta quando si conosce in grado di soddisfare la gamma di valori convertiti nella destinazione. In questo caso, saperne di più rispetto a quando il compilatore. Se si apporta una conversione di narrowing intenzionalmente, rendere esplicito intenzioni utilizzando un cast statico. In caso contrario, questo messaggio di avviso indica quasi sempre di avere un bug nel codice. È possibile correggere l'errore, verificare gli oggetti che è possibile inizializzare hanno tipi di dimensioni sufficienti per gestire gli input.  
  
 Nell'esempio seguente viene generato l'errore C4838 e viene illustrato un modo per risolvere questo problema:  
  
```  
// C4838.cpp -- C++ narrowing conversion diagnostics  
// Compile by using: cl /EHsc C4838.cpp  
  
struct S1 {  
    int m1;  
    double m2, m3;  
};  
  
void function_C4838(double d1) {  
    double ad[] = { 1, d1 }; // OK  
    int ai[] = { 1, d1 };    // warning C4838  
    S1 s11 = { 1, 2, d1 };   // OK  
    S1 s12 { d1, 2, 3 };     // warning C4838  
    S1 s13 { static_cast<int>(d1), 2, 3 }; // possible fix for C4838  
}  
```
