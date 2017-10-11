---
title: Errore del compilatore C2084 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2084
dev_langs:
- C++
helpviewer_keywords:
- C2084
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a1fe070ffe0988b22484d3eb162377a8723c72ee
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2084"></a>Errore del compilatore C2084
funzione '*funzione*' ha già un corpo  
  
 La funzione è già stata definita.  
  
 Nelle versioni di Visual C++ prima di Visual Studio 2002,  
  
-   Il compilatore accetta più specializzazioni del modello risolti nello stesso tipo effettivo, anche se le definizioni aggiuntive non sarebbe mai disponibile. Il compilatore ora rileva questi più definizioni.  
  
-   `__int32`e `int` sono stati considerati come tipi separati. Il compilatore considera ora `__int32` come sinonimo di `int`. Ciò significa che il compilatore rileva più definizioni se è una funzione in overload sia `__int32` e `int` e restituisce un errore.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2084:  
  
```cpp  
// C2084.cpp  
void Func(int);  
void Func(int) {}   // define function  
void Func(int) {}   // C2084 second definition  
```  
  
Per correggere l'errore, rimuovere la definizione duplicata:  
  
```  
// C2084b.cpp  
// compile with: /c  
void Func(int);  
void Func(int) {}  
```
