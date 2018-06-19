---
title: C2397 errore del compilatore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.topic: error-reference
f1_keywords:
- C2397
dev_langs:
- C++
ms.assetid: b418cf5a-d50d-4a6c-98a7-994ae35046d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d9d080450368618cc874de0ae96209e547847f8c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196883"
---
# <a name="compiler-error-c2397"></a>C2397 errore del compilatore
conversione da 'type_1' a 'type_2' richiede una conversione di narrowing  
  
 Quando si utilizza l'inizializzazione uniforme, è stata trovata una conversione di narrowing implicita.  
  
 Il linguaggio C consente conversioni implicite verso un assegnazioni e l'inizializzazione e C++ segue seme, anche se la restrizione imprevisto è una causa di molti errori di codice. Per rendere più sicuro il codice, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione di narrowing in un elenco di inizializzazione. In Visual C++, la diagnostica è C2397 errore del compilatore quando si utilizza l'inizio di inizializzazione uniforme sintassi supportata in Visual Studio 2015. Il compilatore genera [C4838 di avviso del compilatore (livello 1)](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md) quando si utilizza l'elenco o una sintassi di inizializzazione aggregata supportata da Visual Studio 2013.  
  
 Una conversione di narrowing può essere corretta quando si conosce in grado di soddisfare la gamma di valori convertiti nella destinazione. In questo caso, saperne di più rispetto al compilatore. Se si apporta una conversione di narrowing intenzionalmente, rendere esplicito intenzioni usando un cast statico. In caso contrario, questo messaggio di errore indica quasi sempre che disporre di un bug nel codice. È possibile risolvere questo problema assicurandosi che gli oggetti che è inizializzare hanno tipi di dimensioni sufficienti per gestire gli input.  
  
 L'esempio seguente genera l'errore C2397 e viene illustrato un modo per risolvere questo problema:  
  
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