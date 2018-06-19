---
title: Compilatore (livello 1) Avviso C4838 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.topic: error-reference
f1_keywords:
- C4838
dev_langs:
- C++
helpviewer_keywords:
- C4838
ms.assetid: fea07924-5feb-4ed4-99b5-1a8c41d28db6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1327ed8869c17701c6aa0a6ce2e3479b6109b8cd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283845"
---
# <a name="compiler-warning-level-1-c4838"></a>Compilatore (livello 1) Avviso C4838
conversione da 'type_1' a 'type_2' richiede una conversione di narrowing  
  
 Quando si utilizza l'aggregazione o un elenco di inizializzazione, una conversione implicita di restrizione è stata trovata.  
  
 Il linguaggio C consente conversioni implicite verso un assegnazioni e l'inizializzazione e C++ segue seme, anche se la restrizione imprevisto è una causa di molti errori di codice. Per rendere più sicuro il codice, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione di narrowing in un elenco di inizializzazione. In Visual C++, la diagnostica è [C2397 errore del compilatore](../../error-messages/compiler-errors-1/compiler-error-c2397.md) quando si utilizza la sintassi di inizializzazione uniforme supportata a partire da Visual Studio 2015. Il compilatore genera l'avviso C4838 quando si utilizza l'elenco o una sintassi di inizializzazione aggregata supportata da Visual Studio 2013.  
  
 Una conversione di narrowing può essere corretta quando si conosce in grado di soddisfare la gamma di valori convertiti nella destinazione. In questo caso, saperne di più rispetto al compilatore. Se si apporta una conversione di narrowing intenzionalmente, rendere esplicito intenzioni usando un cast statico. In caso contrario, questo messaggio di avviso quasi sempre indica la presenza di un bug nel codice. È possibile risolvere questo problema assicurandosi che gli oggetti che è inizializzare hanno tipi di dimensioni sufficienti per gestire gli input.  
  
 L'esempio seguente genera l'errore C4838 e viene illustrato un modo per risolvere questo problema:  
  
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