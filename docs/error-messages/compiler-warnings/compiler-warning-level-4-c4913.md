---
title: Compilatore avviso (livello 4) C4913 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4913
dev_langs:
- C++
helpviewer_keywords:
- C4913
ms.assetid: b94aa52e-6029-4170-9134-017714931546
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dbac505559f07e2c58b76970ba33b11a109d90b7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33294622"
---
# <a name="compiler-warning-level-4-c4913"></a>Avviso del compilatore (livello 4) C4913
**l'operatore binario definito dall'utente ',' esiste, ma nessuno degli overload può convertire tutti gli operandi. Verrà utilizzato l'operatore binario ',' incorporato predefinito.**  
  
 Si è verificata una chiamata all'operatore virgola predefinito in un programma che ha anche un operatore virgola di overload; una conversione che si riteneva completata in realtà non è stata eseguita.  
  
 L'esempio di codice seguente genera l'errore C4913:  
  
```  
// C4913.cpp  
// compile with: /W4  
struct A  
{  
};  
  
struct S  
{  
};  
  
struct B  
{  
   // B() { }  
   // B(S &s) { s; }  
};  
  
B operator , (A a, B b)     
{  
   a;  
   return b;  
}  
  
int main()  
{  
   A a;  
   B b;  
   S s;  
  
   a, b;   // OK calls user defined operator  
   a, s;   // C4913 uses builtin comma operator  
           // uncomment the conversion code in B to resolve.  
}  
```